#pragma once

#define MAX_CASCADED_SHADOW_MAPPING_CASCADES (4)

// The number of float4's in the CascadedShadowMappingState_t (starting at m_vLightColor)
#define CASCADED_SHADOW_MAPPING_CONSTANT_BUFFER_SIZE (26)

// Note: This struct is sent as-is as an array of pixel shader constants (starting at m_vLightColor). If you modify it, be sure to update CASCADED_SHADOW_MAPPING_CONSTANT_BUFFER_SIZE.
struct CascadedShadowMappingState_t
{
	uint32_t m_nNumCascades;
	bool m_bIsRenderingViewModels;

	Vector4D m_vLightColor;

	Vector m_vLightDir;
	float m_flPadding1;

	struct
	{
		float m_flInvShadowTextureWidth;
		float m_flInvShadowTextureHeight;
		float m_flHalfInvShadowTextureWidth;
		float m_flHalfInvShadowTextureHeight;
	} m_TexParams;

	struct
	{
		float m_flShadowTextureWidth;
		float m_flShadowTextureHeight;
		float m_flSplitLerpFactorBase;
		float m_flSplitLerpFactorInvRange;
	} m_TexParams2;

	struct
	{
		float m_flDistLerpFactorBase;
		float m_flDistLerpFactorInvRange;
		float m_flUnused0;
		float m_flUnused1;
	} m_TexParams3;

	VMatrix m_matWorldToShadowTexMatrices[ MAX_CASCADED_SHADOW_MAPPING_CASCADES ];
	Vector4D m_vCascadeAtlasUVOffsets[ MAX_CASCADED_SHADOW_MAPPING_CASCADES ];

	Vector4D m_vCamPosition;
};

enum
{
	MATERIAL_MAX_LIGHT_COUNT = 4,
};

struct MaterialLightingState_t
{
	Vector			m_vecAmbientCube[ 6 ];		// ambient, and lights that aren't in locallight[]
	Vector			m_vecLightingOrigin;		// The position from which lighting state was computed
	int				m_nLocalLightCount;
	LightDesc_t		m_pLocalLightDesc[ MATERIAL_MAX_LIGHT_COUNT ];

	MaterialLightingState_t& operator=( const MaterialLightingState_t& src )
	{
		memcpy( this, &src, sizeof( MaterialLightingState_t ) - MATERIAL_MAX_LIGHT_COUNT * sizeof( LightDesc_t ) );
		size_t byteCount = src.m_nLocalLightCount * sizeof( LightDesc_t );
		Assert( byteCount <= sizeof( m_pLocalLightDesc ) );
		memcpy( m_pLocalLightDesc, &src.m_pLocalLightDesc, byteCount );
		return *this;
	}
};

struct Texture_t
{
	std::byte			pad0[ 0xC ];		// 0x0000
	IDirect3DTexture9* lpRawTexture;	// 0x000C
};

class ITexture
{
private:
	template <typename T, typename ... args_t>
	constexpr T CallVFunc( void* thisptr, std::size_t nIndex, args_t... argList )
	{
		using VirtualFn = T( __thiscall* )( void*, decltype( argList )... );
		return ( *static_cast< VirtualFn** >( thisptr ) )[ nIndex ]( thisptr, argList... );
	}
private:
	std::byte	pad0[ 0x50 ];		 // 0x0000
public:
	Texture_t** pTextureHandles; // 0x0050

	int GetActualWidth()
	{
		return CallVFunc<int>( this, 3 );
	}

	int GetActualHeight()
	{
		return CallVFunc<int>( this, 4 );
	}

	void IncrementReferenceCount()
	{
		CallVFunc<void>( this, 10 );
	}

	void DecrementReferenceCount()
	{
		CallVFunc<void>( this, 11 );
	}
};

enum MaterialIndexFormat_t
{
	MATERIAL_INDEX_FORMAT_UNKNOWN = -1,
	MATERIAL_INDEX_FORMAT_16BIT = 0,
	MATERIAL_INDEX_FORMAT_32BIT,
};

struct ShaderStencilState_t;
struct LightDesc_t;
class Vector4D;
struct MaterialMatrixMode_t;
struct MaterialCullMode_t;
struct MaterialFogMode_t;
struct MaterialHeightClipMode_t;
class IMesh;
class IVertexBuffer;
class IIndexBuffer;
struct OcclusionQueryObjectHandle_t;
struct FlashlightState_t;
struct MorphFormat_t;
struct MorphWeight_t;
struct Rect_t;
class IMorph;
class ICallQueue;
struct DeformationBase_t;
struct ColorCorrectionHandle_t;
struct MaterialNonInteractiveMode_t;
typedef uint64 VertexFormat_t;
struct Vector2D;
class IMatRenderContext : public IRefCounted
{
public:
	virtual void				BeginRender() = 0;
	virtual void				EndRender() = 0;

	virtual void				Flush( bool flushHardware = false ) = 0;

	virtual void				BindLocalCubemap( ITexture* pTexture ) = 0;

	// pass in an ITexture (that is build with "rendertarget" "1") or
	// pass in NULL for the regular backbuffer.
	virtual void				SetRenderTarget( ITexture* pTexture ) = 0;
	virtual ITexture* GetRenderTarget( void ) = 0;

	virtual void				GetRenderTargetDimensions( int& width, int& height ) const = 0;

	// Bind a material is current for rendering.
	virtual void				Bind( IMaterial* material, void* proxyData = 0 ) = 0;
	// Bind a lightmap page current for rendering.  You only have to
	// do this for materials that require lightmaps.
	virtual void				BindLightmapPage( int lightmapPageID ) = 0;

	// inputs are between 0 and 1
	virtual void				DepthRange( float zNear, float zFar ) = 0;

	virtual void				ClearBuffers( bool bClearColor, bool bClearDepth, bool bClearStencil = false ) = 0;

	// read to a unsigned char rgb image.
	virtual void				ReadPixels( int x, int y, int width, int height, unsigned char* data, ImageFormat dstFormat, ITexture* pRenderTargetTexture = NULL ) = 0;
	virtual void				ReadPixelsAsync( int x, int y, int width, int height, unsigned char* data, ImageFormat dstFormat, ITexture* pRenderTargetTexture = NULL, void* pPixelsReadEvent = NULL ) = 0;
	virtual void				ReadPixelsAsyncGetResult( int x, int y, int width, int height, unsigned char* data, ImageFormat dstFormat, void* pGetResultEvent = NULL ) = 0;

	// Sets lighting
	virtual void				SetLightingState( const MaterialLightingState_t& state ) = 0;
	virtual void				SetLights( int nCount, const LightDesc_t* pLights ) = 0;

	// The faces of the cube are specified in the same order as cubemap textures
	virtual void				SetAmbientLightCube( Vector4D cube[ 6 ] ) = 0;

	// Blit the backbuffer to the framebuffer texture
	virtual void				CopyRenderTargetToTexture( ITexture* pTexture ) = 0;

	// Set the current texture that is a copy of the framebuffer.
	virtual void				SetFrameBufferCopyTexture( ITexture* pTexture, int textureIndex = 0 ) = 0;
	virtual ITexture* GetFrameBufferCopyTexture( int textureIndex ) = 0;

	//
	// end vertex array api
	//

	// matrix api
	virtual void				MatrixMode( MaterialMatrixMode_t matrixMode ) = 0;
	virtual void				PushMatrix( void ) = 0;
	virtual void				PopMatrix( void ) = 0;
	virtual void				LoadMatrix( VMatrix const& matrix ) = 0;
	virtual void				LoadMatrix( matrix3x4_t const& matrix ) = 0;
	virtual void				MultMatrix( VMatrix const& matrix ) = 0;
	virtual void				MultMatrix( matrix3x4_t const& matrix ) = 0;
	virtual void				MultMatrixLocal( VMatrix const& matrix ) = 0;
	virtual void				MultMatrixLocal( matrix3x4_t const& matrix ) = 0;
	virtual void				GetMatrix( MaterialMatrixMode_t matrixMode, VMatrix* matrix ) = 0;
	virtual void				GetMatrix( MaterialMatrixMode_t matrixMode, matrix3x4_t* matrix ) = 0;
	virtual void				LoadIdentity( void ) = 0;
	virtual void				Ortho( double left, double top, double right, double bottom, double zNear, double zFar ) = 0;
	virtual void				PerspectiveX( double fovx, double aspect, double zNear, double zFar ) = 0;
	virtual void				PickMatrix( int x, int y, int width, int height ) = 0;
	virtual void				Rotate( float angle, float x, float y, float z ) = 0;
	virtual void				Translate( float x, float y, float z ) = 0;
	virtual void				Scale( float x, float y, float z ) = 0;
	// end matrix api

	// Sets/gets the viewport
	virtual void				Viewport( int x, int y, int width, int height ) = 0;
	virtual void				GetViewport( int& x, int& y, int& width, int& height ) const = 0;

	// The cull mode
	virtual void				CullMode( MaterialCullMode_t cullMode ) = 0;
	virtual void				FlipCullMode( void ) = 0; //CW->CCW or CCW->CW, intended for mirror support where the view matrix is flipped horizontally

	// Shadow buffer generation
	virtual void				BeginGeneratingCSMs() = 0;
	virtual void				EndGeneratingCSMs() = 0;
	virtual void				PerpareForCascadeDraw( int cascade, float fShadowSlopeScaleDepthBias, float fShadowDepthBias ) = 0;

	// end matrix api

	// This could easily be extended to a general user clip plane
	virtual void				SetHeightClipMode( MaterialHeightClipMode_t nHeightClipMode ) = 0;
	// garymcthack : fog z is always used for heightclipz for now.
	virtual void				SetHeightClipZ( float z ) = 0;

	// Fog methods...
	virtual void				FogMode( MaterialFogMode_t fogMode ) = 0;
	virtual void				FogStart( float fStart ) = 0;
	virtual void				FogEnd( float fEnd ) = 0;
	virtual void				SetFogZ( float fogZ ) = 0;
	virtual MaterialFogMode_t	GetFogMode( void ) = 0;

	virtual void				FogColor3f( float r, float g, float b ) = 0;
	virtual void				FogColor3fv( float const* rgb ) = 0;
	virtual void				FogColor3ub( unsigned char r, unsigned char g, unsigned char b ) = 0;
	virtual void				FogColor3ubv( unsigned char const* rgb ) = 0;

	virtual void				GetFogColor( unsigned char* rgb ) = 0;

	// Sets the number of bones for skinning
	virtual void				SetNumBoneWeights( int numBones ) = 0;

	// Creates/destroys Mesh
	virtual IMesh* CreateStaticMesh( VertexFormat_t fmt, const char* pTextureBudgetGroup, IMaterial* pMaterial = NULL, VertexStreamSpec_t* pStreamSpec = NULL ) = 0;
	virtual void DestroyStaticMesh( IMesh* mesh ) = 0;

	// Gets the dynamic mesh associated with the currently bound material
	// note that you've got to render the mesh before calling this function
	// a second time. Clients should *not* call DestroyStaticMesh on the mesh
	// returned by this call.
	// Use buffered = false if you want to not have the mesh be buffered,
	// but use it instead in the following pattern:
	//		meshBuilder.Begin
	//		meshBuilder.End
	//		Draw partial
	//		Draw partial
	//		Draw partial
	//		meshBuilder.Begin
	//		meshBuilder.End
	//		etc
	// Use Vertex or Index Override to supply a static vertex or index buffer
	// to use in place of the dynamic buffers.
	//
	// If you pass in a material in pAutoBind, it will automatically bind the
	// material. This can be helpful since you must bind the material you're
	// going to use BEFORE calling GetDynamicMesh.
	virtual IMesh* GetDynamicMesh(
		bool buffered = true,
		IMesh* pVertexOverride = 0,
		IMesh* pIndexOverride = 0,
		IMaterial* pAutoBind = 0 ) = 0;

	// ------------ New Vertex/Index Buffer interface ----------------------------
	// Do we need support for bForceTempMesh and bSoftwareVertexShader?
	// I don't think we use bSoftwareVertexShader anymore. .need to look into bForceTempMesh.
	virtual IVertexBuffer* CreateStaticVertexBuffer( VertexFormat_t fmt, int nVertexCount, const char* pTextureBudgetGroup ) = 0;
	virtual IIndexBuffer* CreateStaticIndexBuffer( MaterialIndexFormat_t fmt, int nIndexCount, const char* pTextureBudgetGroup ) = 0;
	virtual void DestroyVertexBuffer( IVertexBuffer* ) = 0;
	virtual void DestroyIndexBuffer( IIndexBuffer* ) = 0;
	// Do we need to specify the stream here in the case of locking multiple dynamic VBs on different streams?
	virtual IVertexBuffer* GetDynamicVertexBuffer( int streamID, VertexFormat_t vertexFormat, bool bBuffered = true ) = 0;
	virtual IIndexBuffer* GetDynamicIndexBuffer() = 0;
	virtual void BindVertexBuffer( int streamID, IVertexBuffer* pVertexBuffer, int nOffsetInBytes, int nFirstVertex, int nVertexCount, VertexFormat_t fmt, int nRepetitions = 1 ) = 0;
	virtual void BindIndexBuffer( IIndexBuffer* pIndexBuffer, int nOffsetInBytes ) = 0;
	virtual void Draw( MaterialPrimitiveType_t primitiveType, int firstIndex, int numIndices ) = 0;
	// ------------ End ----------------------------

	// Selection mode methods
	virtual int  SelectionMode( bool selectionMode ) = 0;
	virtual void SelectionBuffer( unsigned int* pBuffer, int size ) = 0;
	virtual void ClearSelectionNames() = 0;
	virtual void LoadSelectionName( int name ) = 0;
	virtual void PushSelectionName( int name ) = 0;
	virtual void PopSelectionName() = 0;

	// Sets the Clear Color for ClearBuffer....
	virtual void		ClearColor3ub( unsigned char r, unsigned char g, unsigned char b ) = 0;
	virtual void		ClearColor4ub( unsigned char r, unsigned char g, unsigned char b, unsigned char a ) = 0;

	// Allows us to override the depth buffer setting of a material
	virtual void	OverrideDepthEnable( bool bEnable, bool bDepthWriteEnable, bool bDepthTestEnable = true ) = 0;

	// FIXME: This is a hack required for NVidia/XBox, can they fix in drivers?
	virtual void	DrawScreenSpaceQuad( IMaterial* pMaterial ) = 0;

	// For debugging and building recording files. This will stuff a token into the recording file,
	// then someone doing a playback can watch for the token.
	virtual void	SyncToken( const char* pToken ) = 0;

	// FIXME: REMOVE THIS FUNCTION!
	// The only reason why it's not gone is because we're a week from ship when I found the bug in it
	// and everything's tuned to use it.
	// It's returning values which are 2x too big (it's returning sphere diameter x2)
	// Use ComputePixelDiameterOfSphere below in all new code instead.
	virtual float	ComputePixelWidthOfSphere( const Vector& origin, float flRadius ) = 0;

	//
	// Occlusion query support
	//

	// Allocate and delete query objects.
	virtual OcclusionQueryObjectHandle_t CreateOcclusionQueryObject( void ) = 0;
	virtual void DestroyOcclusionQueryObject( OcclusionQueryObjectHandle_t ) = 0;

	// Bracket drawing with begin and end so that we can get counts next frame.
	virtual void BeginOcclusionQueryDrawing( OcclusionQueryObjectHandle_t ) = 0;
	virtual void EndOcclusionQueryDrawing( OcclusionQueryObjectHandle_t ) = 0;

	// Get the number of pixels rendered between begin and end on an earlier frame.
	// Calling this in the same frame is a huge perf hit!
	virtual int OcclusionQuery_GetNumPixelsRendered( OcclusionQueryObjectHandle_t ) = 0;

	virtual void SetFlashlightMode( bool bEnable ) = 0;

	virtual void SetFlashlightState( const FlashlightState_t& state, const VMatrix& worldToTexture ) = 0;

	virtual bool IsCascadedShadowMapping() const = 0;
	virtual void SetCascadedShadowMapping( bool bEnable ) = 0;
	virtual void SetCascadedShadowMappingState( const CascadedShadowMappingState_t& state, ITexture* pDepthTextureAtlas ) = 0;

	// Gets the current height clip mode
	virtual MaterialHeightClipMode_t GetHeightClipMode() = 0;

	// This returns the diameter of the sphere in pixels based on
	// the current model, view, + projection matrices and viewport.
	virtual float	ComputePixelDiameterOfSphere( const Vector& vecAbsOrigin, float flRadius ) = 0;

	// By default, the material system applies the VIEW and PROJECTION matrices	to the user clip
	// planes (which are specified in world space) to generate projection-space user clip planes
	// Occasionally (for the particle system in hl2, for example), we want to override that
	// behavior and explictly specify a ViewProj transform for user clip planes
	virtual void	EnableUserClipTransformOverride( bool bEnable ) = 0;
	virtual void	UserClipTransform( const VMatrix& worldToView ) = 0;

	virtual bool GetFlashlightMode() const = 0;

	virtual bool IsCullingEnabledForSinglePassFlashlight() const = 0;
	virtual void EnableCullingForSinglePassFlashlight( bool bEnable ) = 0;

	// Used to make the handle think it's never had a successful query before
	virtual void ResetOcclusionQueryObject( OcclusionQueryObjectHandle_t ) = 0;

	// Creates/destroys morph data associated w/ a particular material
	virtual IMorph* CreateMorph( MorphFormat_t format, const char* pDebugName ) = 0;
	virtual void DestroyMorph( IMorph* pMorph ) = 0;

	// Binds the morph data for use in rendering
	virtual void BindMorph( IMorph* pMorph ) = 0;

	// Sets flexweights for rendering
	virtual void SetFlexWeights( int nFirstWeight, int nCount, const MorphWeight_t* pWeights ) = 0;

	// Allocates temp render data. Renderdata goes out of scope at frame end in multicore
	// Renderdata goes out of scope after refcount goes to zero in singlecore.
	// Locking/unlocking increases + decreases refcount
	virtual void* LockRenderData( int nSizeInBytes ) = 0;
	virtual void			UnlockRenderData( void* pData ) = 0;

	// Typed version. If specified, pSrcData is copied into the locked memory.
	template< class E > E* LockRenderDataTyped( int nCount, const E* pSrcData = NULL );

	// Temp render data gets immediately freed after it's all unlocked in single core.
	// This prevents it from being freed
	virtual void			AddRefRenderData() = 0;
	virtual void			ReleaseRenderData() = 0;

	// Returns whether a pointer is render data. NOTE: passing NULL returns true
	virtual bool			IsRenderData( const void* pData ) const = 0;

	// Read w/ stretch to a host-memory buffer
	virtual void ReadPixelsAndStretch( Rect_t* pSrcRect, Rect_t* pDstRect, unsigned char* pBuffer, ImageFormat dstFormat, int nDstStride ) = 0;

	// Gets the window size
	virtual void GetWindowSize( int& width, int& height ) const = 0;

	virtual void				pad() = 0;

	// This function performs a texture map from one texture map to the render destination, doing
	// all the necessary pixel/texel coordinate fix ups. fractional values can be used for the
	// src_texture coordinates to get linear sampling - integer values should produce 1:1 mappings
	// for non-scaled operations.
	virtual void DrawScreenSpaceRectangle(
		IMaterial* pMaterial,
		int destx, int desty,
		int width, int height,
		float src_texture_x0, float src_texture_y0,			// which texel you want to appear at
		// destx/y
		float src_texture_x1, float src_texture_y1,			// which texel you want to appear at
		// destx+width-1, desty+height-1
		int src_texture_width, int src_texture_height,		// needed for fixup
		void* pClientRenderable = NULL,
		int nXDice = 1,
		int nYDice = 1 ) = 0;

	virtual void LoadBoneMatrix( int boneIndex, const matrix3x4_t& matrix ) = 0;

	// This version will push the current rendertarget + current viewport onto the stack
	virtual void PushRenderTargetAndViewport() = 0;

	// This version will push a new rendertarget + a maximal viewport for that rendertarget onto the stack
	virtual void PushRenderTargetAndViewport( ITexture* pTexture ) = 0;

	// This version will push a new rendertarget + a specified viewport onto the stack
	virtual void PushRenderTargetAndViewport( ITexture* pTexture, int nViewX, int nViewY, int nViewW, int nViewH ) = 0;

	// This version will push a new rendertarget + a specified viewport onto the stack
	virtual void PushRenderTargetAndViewport( ITexture* pTexture, ITexture* pDepthTexture, int nViewX, int nViewY, int nViewW, int nViewH ) = 0;

	// This will pop a rendertarget + viewport
	virtual void PopRenderTargetAndViewport( void ) = 0;

	// Binds a particular texture as the current lightmap
	virtual void BindLightmapTexture( ITexture* pLightmapTexture ) = 0;

	// Blit a subrect of the current render target to another texture
	virtual void CopyRenderTargetToTextureEx( ITexture* pTexture, int nRenderTargetID, Rect_t* pSrcRect, Rect_t* pDstRect = NULL ) = 0;
	virtual void CopyTextureToRenderTargetEx( int nRenderTargetID, ITexture* pTexture, Rect_t* pSrcRect, Rect_t* pDstRect = NULL ) = 0;

	// Special off-center perspective matrix for DoF, MSAA jitter and poster rendering
	virtual void PerspectiveOffCenterX( double fovx, double aspect, double zNear, double zFar, double bottom, double top, double left, double right ) = 0;

	// Rendering parameters control special drawing modes withing the material system, shader
	// system, shaders, and engine. renderparm.h has their definitions.
	virtual void SetFloatRenderingParameter( int parm_number, float value ) = 0;
	virtual void SetIntRenderingParameter( int parm_number, int value ) = 0;
	virtual void SetVectorRenderingParameter( int parm_number, Vector const& value ) = 0;

	// stencil buffer operations.
	virtual void SetStencilState( const ShaderStencilState_t& state ) = 0;
	virtual void ClearStencilBufferRectangle( int xmin, int ymin, int xmax, int ymax, int value ) = 0;

	virtual void SetRenderTargetEx( int nRenderTargetID, ITexture* pTexture ) = 0;

	// rendering clip planes, beware that only the most recently pushed plane will actually be used in a sizeable chunk of hardware configurations
	// and that changes to the clip planes mid-frame while UsingFastClipping() is true will result unresolvable depth inconsistencies
	virtual void PushCustomClipPlane( const float* pPlane ) = 0;
	virtual void PopCustomClipPlane( void ) = 0;

	// Returns the number of vertices + indices we can render using the dynamic mesh
	// Passing true in the second parameter will return the max # of vertices + indices
	// we can use before a flush is provoked and may return different values
	// if called multiple times in succession.
	// Passing false into the second parameter will return
	// the maximum possible vertices + indices that can be rendered in a single batch
	virtual void GetMaxToRender( IMesh* pMesh, bool bMaxUntilFlush, int* pMaxVerts, int* pMaxIndices ) = 0;

	// Returns the max possible vertices + indices to render in a single draw call
	virtual int GetMaxVerticesToRender( IMaterial* pMaterial ) = 0;
	virtual int GetMaxIndicesToRender() = 0;
	virtual void DisableAllLocalLights() = 0;
	virtual int CompareMaterialCombos( IMaterial* pMaterial1, IMaterial* pMaterial2, int lightMapID1, int lightMapID2 ) = 0;

	virtual IMesh* GetFlexMesh() = 0;

	virtual void SetFlashlightStateEx( const FlashlightState_t& state, const VMatrix& worldToTexture, ITexture* pFlashlightDepthTexture ) = 0;

	// Returns the currently bound local cubemap
	virtual ITexture* GetLocalCubemap() = 0;

	// This is a version of clear buffers which will only clear the buffer at pixels which pass the stencil test
	virtual void ClearBuffersObeyStencil( bool bClearColor, bool bClearDepth ) = 0;

	//enables/disables all entered clipping planes, returns the input from the last time it was called.
	virtual bool EnableClipping( bool bEnable ) = 0;

	//get fog distances entered with FogStart(), FogEnd(), and SetFogZ()
	virtual void GetFogDistances( float* fStart, float* fEnd, float* fFogZ ) = 0;

	// Hooks for firing PIX events from outside the Material System...
	virtual void BeginPIXEvent( unsigned long color, const char* szName ) = 0;
	virtual void EndPIXEvent() = 0;
	virtual void SetPIXMarker( unsigned long color, const char* szName ) = 0;

	// Batch API
	// from changelist 166623:
	// - replaced obtuse material system batch usage with an explicit and easier to thread API
	virtual void BeginBatch( IMesh* pIndices ) = 0;
	virtual void BindBatch( IMesh* pVertices, IMaterial* pAutoBind = NULL ) = 0;
	virtual void DrawBatch( MaterialPrimitiveType_t primType, int firstIndex, int numIndices ) = 0;
	virtual void EndBatch() = 0;

	// Raw access to the call queue, which can be NULL if not in a queued mode
	virtual ICallQueue* GetCallQueue() = 0;

	// Returns the world-space camera position
	virtual void GetWorldSpaceCameraPosition( Vector* pCameraPos ) = 0;
	virtual void GetWorldSpaceCameraVectors( Vector* pVecForward, Vector* pVecRight, Vector* pVecUp ) = 0;

	// Set a linear vector color scale for all 3D rendering.
	// A value of [1.0f, 1.0f, 1.0f] should match non-tone-mapped rendering.

	virtual void				SetToneMappingScaleLinear( const Vector& scale ) = 0;
	virtual Vector				GetToneMappingScaleLinear( void ) = 0;

	virtual void				SetShadowDepthBiasFactors( float fSlopeScaleDepthBias, float fDepthBias ) = 0;

	// Apply stencil operations to every pixel on the screen without disturbing depth or color buffers
	virtual void				PerformFullScreenStencilOperation( void ) = 0;

	// Sets lighting origin for the current model (needed to convert directional lights to points)
	virtual void				SetLightingOrigin( Vector vLightingOrigin ) = 0;

	// Set scissor rect for rendering
	virtual void				PushScissorRect( const int nLeft, const int nTop, const int nRight, const int nBottom ) = 0;
	virtual void				PopScissorRect() = 0;

	// Methods used to build the morph accumulator that is read from when HW morphing is enabled.
	virtual void				BeginMorphAccumulation() = 0;
	virtual void				EndMorphAccumulation() = 0;
	virtual void				AccumulateMorph( IMorph* pMorph, int nMorphCount, const MorphWeight_t* pWeights ) = 0;

	virtual void				PushDeformation( DeformationBase_t const* Deformation ) = 0;
	virtual void				PopDeformation() = 0;
	virtual int					GetNumActiveDeformations() const = 0;

	virtual bool				GetMorphAccumulatorTexCoord( Vector2D* pTexCoord, IMorph* pMorph, int nVertex ) = 0;

	// Version of get dynamic mesh that specifies a specific vertex format
	virtual IMesh* GetDynamicMeshEx( VertexFormat_t vertexFormat, bool bBuffered = true,
		IMesh* pVertexOverride = 0, IMesh* pIndexOverride = 0, IMaterial* pAutoBind = 0 ) = 0;

	virtual void				FogMaxDensity( float flMaxDensity ) = 0;

#if defined( _X360 )
	//Seems best to expose GPR allocation to scene rendering code. 128 total to split between vertex/pixel shaders (pixel will be set to 128 - vertex). Minimum value of 16. More GPR's = more threads.
	virtual void				PushVertexShaderGPRAllocation( int iVertexShaderCount = 64 ) = 0;
	virtual void				PopVertexShaderGPRAllocation( void ) = 0;

	virtual void				FlushHiStencil() = 0;

#endif

#if defined( _GAMECONSOLE )
	virtual void                BeginConsoleZPass( const WorldListIndicesInfo_t& indicesInfo ) = 0;
	virtual void                BeginConsoleZPass2( int nSlack ) = 0;
	virtual void				EndConsoleZPass() = 0;
#endif

#if defined( _PS3 )
	virtual void				FlushTextureCache() = 0;
#endif
	virtual void                AntiAliasingHint( int nHint ) = 0;

	virtual IMaterial* GetCurrentMaterial() = 0;
	virtual int  GetCurrentNumBones() const = 0;
	virtual void* GetCurrentProxy() = 0;

	// Color correction related methods..
	// Client cannot call IColorCorrectionSystem directly because it is not thread-safe
	// FIXME: Make IColorCorrectionSystem threadsafe?
	virtual void EnableColorCorrection( bool bEnable ) = 0;
	virtual ColorCorrectionHandle_t AddLookup( const char* pName ) = 0;
	virtual bool RemoveLookup( ColorCorrectionHandle_t handle ) = 0;
	virtual void LockLookup( ColorCorrectionHandle_t handle ) = 0;
	virtual void LoadLookup( ColorCorrectionHandle_t handle, const char* pLookupName ) = 0;
	virtual void UnlockLookup( ColorCorrectionHandle_t handle ) = 0;
	virtual void SetLookupWeight( ColorCorrectionHandle_t handle, float flWeight ) = 0;
	virtual void ResetLookupWeights() = 0;
	virtual void SetResetable( ColorCorrectionHandle_t handle, bool bResetable ) = 0;

	//There are some cases where it's simply not reasonable to update the full screen depth texture (mostly on PC).
	//Use this to mark it as invalid and use a dummy texture for depth reads.
	virtual void SetFullScreenDepthTextureValidityFlag( bool bIsValid ) = 0;

	// A special path used to tick the front buffer while loading on the 360
	virtual void SetNonInteractiveLogoTexture( ITexture* pTexture, float flNormalizedX, float flNormalizedY, float flNormalizedW, float flNormalizedH ) = 0;
	virtual void SetNonInteractivePacifierTexture( ITexture* pTexture, float flNormalizedX, float flNormalizedY, float flNormalizedSize ) = 0;
	virtual void SetNonInteractiveTempFullscreenBuffer( ITexture* pTexture, MaterialNonInteractiveMode_t mode ) = 0;
	virtual void EnableNonInteractiveMode( MaterialNonInteractiveMode_t mode ) = 0;
	virtual void RefreshFrontBufferNonInteractive() = 0;

	// Flip culling state (swap CCW <-> CW)
	virtual void FlipCulling( bool bFlipCulling ) = 0;

	virtual void SetTextureRenderingParameter( int parm_number, ITexture* pTexture ) = 0;

	//only actually sets a bool that can be read in from shaders, doesn't do any of the legwork
	virtual void EnableSinglePassFlashlightMode( bool bEnable ) = 0;

	// Are we in Single Pass Flashlight Mode?
	virtual bool SinglePassFlashlightModeEnabled() const = 0;

	// Draws instances with different meshes
	virtual void DrawInstances( int nInstanceCount, const MeshInstanceData_t* pInstance ) = 0;

	// Allows us to override the color/alpha write settings of a material
	virtual void OverrideAlphaWriteEnable( bool bOverrideEnable, bool bAlphaWriteEnable ) = 0;
	virtual void OverrideColorWriteEnable( bool bOverrideEnable, bool bColorWriteEnable ) = 0;

	virtual void ClearBuffersObeyStencilEx( bool bClearColor, bool bClearAlpha, bool bClearDepth ) = 0;

	// Subdivision surface interface
	virtual int GetSubDBufferWidth() = 0;
	virtual float* LockSubDBuffer( int nNumRows ) = 0;
	virtual void UnlockSubDBuffer() = 0;

	// Update current frame's game time for the shader api.
	virtual void UpdateGameTime( float flTime ) = 0;

	virtual void			PrintfVA( char* fmt, va_list vargs ) = 0;
	virtual void			Printf( char* fmt, ... ) = 0;
	virtual float			Knob( char* knobname, float* setvalue = NULL ) = 0;

	// expose scaleform functons

#if defined( INCLUDE_SCALEFORM )
	virtual void SetScaleformSlotViewport( int slot, int x, int y, int w, int h ) = 0;
	virtual void RenderScaleformSlot( int slot ) = 0;
	virtual void ForkRenderScaleformSlot( int slot ) = 0;
	virtual void JoinRenderScaleformSlot( int slot ) = 0;

	virtual void SetScaleformCursorViewport( int x, int y, int w, int h ) = 0;
	virtual void RenderScaleformCursor() = 0;

	virtual void AdvanceAndRenderScaleformSlot( int slot ) = 0;
	virtual void AdvanceAndRenderScaleformCursor() = 0;
#endif

	virtual void SetRenderingPaint( bool bEnable ) = 0;

	// Draws batches of different materials using a faster API
	//virtual void DrawBatchedMaterials( int nBatchCount, const MaterialBatchData_t *pBatches ) = 0;

	virtual ColorCorrectionHandle_t FindLookup( const char* pName ) = 0;
};

template <class T>
class CBaseAutoPtr
{
public:
	CBaseAutoPtr() : m_pObject( 0 ) {}
	CBaseAutoPtr( T* pFrom ) : m_pObject( pFrom ) {}

	operator const void* ( ) const { return m_pObject; }
	operator void* ( ) { return m_pObject; }

	operator const T* ( ) const { return m_pObject; }
	operator const T* ( ) { return m_pObject; }
	operator T* ( ) { return m_pObject; }

	int			operator=( int i ) { m_pObject = 0; return 0; }
	T* operator=( T* p ) { m_pObject = p; return p; }

	bool        operator !() const { return ( !m_pObject ); }
	bool        operator!=( int i ) const { return ( m_pObject != NULL ); }
	bool		operator==( const void* p ) const { return ( m_pObject == p ); }
	bool		operator!=( const void* p ) const { return ( m_pObject != p ); }
	bool		operator==( T* p ) const { return operator==( ( void* ) p ); }
	bool		operator!=( T* p ) const { return operator!=( ( void* ) p ); }
	bool		operator==( const CBaseAutoPtr<T>& p ) const { return operator==( ( const void* ) p ); }
	bool		operator!=( const CBaseAutoPtr<T>& p ) const { return operator!=( ( const void* ) p ); }

	T* operator->() { return m_pObject; }
	T& operator *() { return *m_pObject; }
	T** operator &() { return &m_pObject; }

	const T* operator->() const { return m_pObject; }
	const T& operator *() const { return *m_pObject; }
	T* const* operator &() const { return &m_pObject; }

protected:
	CBaseAutoPtr( const CBaseAutoPtr<T>& from ) : m_pObject( from.m_pObject ) {}
	void operator=( const CBaseAutoPtr<T>& from ) { m_pObject = from.m_pObject; }

	T* m_pObject;
};

//---------------------------------------------------------

template <class T>
class CRefPtr : public CBaseAutoPtr<T>
{
	typedef CBaseAutoPtr<T> BaseClass;
public:
	CRefPtr() {}
	CRefPtr( T* pInit ) : BaseClass( pInit ) {}
	CRefPtr( const CRefPtr<T>& from ) : BaseClass( from ) {}
	~CRefPtr() { if ( BaseClass::m_pObject ) BaseClass::m_pObject->Release(); }

	void operator=( const CRefPtr<T>& from ) { BaseClass::operator=( from ); }

	int operator=( int i ) { return BaseClass::operator=( i ); }
	T* operator=( T* p ) { return BaseClass::operator=( p ); }

	operator bool() const { return !BaseClass::operator!(); }
	operator bool() { return !BaseClass::operator!(); }

	void SafeRelease() { if ( BaseClass::m_pObject ) BaseClass::m_pObject->Release(); BaseClass::m_pObject = 0; }
	void AssignAddRef( T* pFrom ) { if ( pFrom ) pFrom->destruct( false ); SafeRelease(); BaseClass::m_pObject = pFrom; }
	void AddRefAssignTo( T*& pTo ) { if ( BaseClass::m_pObject ) BaseClass::m_pObject->destruct( false ); ::SafeRelease( pTo ); pTo = BaseClass::m_pObject; }
};

class CMatRenderContextPtr : public CRefPtr<IMatRenderContext>
{
	typedef CRefPtr<IMatRenderContext> BaseClass;
public:
	CMatRenderContextPtr() {}
	CMatRenderContextPtr( IMatRenderContext* pInit ) : BaseClass( pInit ) {} // intentioal no BeginRender
	CMatRenderContextPtr( IMaterialSystem* pFrom ) : BaseClass( pFrom->GetRenderContext() ) { if ( BaseClass::m_pObject ) BaseClass::m_pObject->BeginRender(); }
	~CMatRenderContextPtr() { if ( BaseClass::m_pObject ) BaseClass::m_pObject->EndRender(); SafeRelease(); } // intentioal saferelease

	IMatRenderContext* operator=( IMatRenderContext* p ) { if ( p ) p->BeginRender(); return BaseClass::operator=( p ); }

	void SafeRelease() { if ( BaseClass::m_pObject ) BaseClass::m_pObject->EndRender(); BaseClass::SafeRelease(); }
	void AssignAddRef( IMatRenderContext* pFrom ) { if ( BaseClass::m_pObject ) BaseClass::m_pObject->EndRender(); BaseClass::AssignAddRef( pFrom ); BaseClass::m_pObject->BeginRender(); }

	void GetFrom( IMaterialSystem* pFrom ) { AssignAddRef( pFrom->GetRenderContext() ); }


private:
	CMatRenderContextPtr( const CMatRenderContextPtr& from );
	void operator=( const CMatRenderContextPtr& from );

};
