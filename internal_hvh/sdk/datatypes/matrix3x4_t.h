#pragma once


struct matrix3x4_t
{
	matrix3x4_t() = default;
	matrix3x4_t(
		float m00, float m01, float m02, float m03,
		float m10, float m11, float m12, float m13,
		float m20, float m21, float m22, float m23 )
	{
		m_flMatVal[ 0 ][ 0 ] = m00;	m_flMatVal[ 0 ][ 1 ] = m01; m_flMatVal[ 0 ][ 2 ] = m02; m_flMatVal[ 0 ][ 3 ] = m03;
		m_flMatVal[ 1 ][ 0 ] = m10;	m_flMatVal[ 1 ][ 1 ] = m11; m_flMatVal[ 1 ][ 2 ] = m12; m_flMatVal[ 1 ][ 3 ] = m13;
		m_flMatVal[ 2 ][ 0 ] = m20;	m_flMatVal[ 2 ][ 1 ] = m21; m_flMatVal[ 2 ][ 2 ] = m22; m_flMatVal[ 2 ][ 3 ] = m23;
	}

	matrix3x4_t( const float arr[ 12 ] )
	{
		m_flMatVal[ 0 ][ 0 ] = arr[ 0 ];	m_flMatVal[ 0 ][ 1 ] = arr[ 1 ]; m_flMatVal[ 0 ][ 2 ] = arr[ 2 ]; m_flMatVal[ 0 ][ 3 ] = arr[ 3 ];
		m_flMatVal[ 1 ][ 0 ] = arr[ 4 ];	m_flMatVal[ 1 ][ 1 ] = arr[ 5 ]; m_flMatVal[ 1 ][ 2 ] = arr[ 6 ]; m_flMatVal[ 1 ][ 3 ] = arr[ 7 ];
		m_flMatVal[ 2 ][ 0 ] = arr[ 8 ];	m_flMatVal[ 2 ][ 1 ] = arr[ 9 ]; m_flMatVal[ 2 ][ 2 ] = arr[ 10 ]; m_flMatVal[ 2 ][ 3 ] = arr[ 11 ];
	}

	//-----------------------------------------------------------------------------
	// Creates a matrix where the X axis = forward
	// the Y axis = left, and the Z axis = up
	//-----------------------------------------------------------------------------
	void Init( const Vector& xAxis, const Vector& yAxis, const Vector& zAxis, const Vector &vecOrigin )
	{
		m_flMatVal[ 0 ][ 0 ] = xAxis.x; m_flMatVal[ 0 ][ 1 ] = yAxis.x; m_flMatVal[ 0 ][ 2 ] = zAxis.x; m_flMatVal[ 0 ][ 3 ] = vecOrigin.x;
		m_flMatVal[ 1 ][ 0 ] = xAxis.y; m_flMatVal[ 1 ][ 1 ] = yAxis.y; m_flMatVal[ 1 ][ 2 ] = zAxis.y; m_flMatVal[ 1 ][ 3 ] = vecOrigin.y;
		m_flMatVal[ 2 ][ 0 ] = xAxis.z; m_flMatVal[ 2 ][ 1 ] = yAxis.z; m_flMatVal[ 2 ][ 2 ] = zAxis.z; m_flMatVal[ 2 ][ 3 ] = vecOrigin.z;
	}

	//-----------------------------------------------------------------------------
	// Creates a matrix where the X axis = forward
	// the Y axis = left, and the Z axis = up
	//-----------------------------------------------------------------------------
	matrix3x4_t( const Vector& xAxis, const Vector& yAxis, const Vector& zAxis, const Vector &vecOrigin )
	{
		Init( xAxis, yAxis, zAxis, vecOrigin );
	}

	inline void SetOrigin( Vector const & p )
	{
		m_flMatVal[ 0 ][ 3 ] = p.x;
		m_flMatVal[ 1 ][ 3 ] = p.y;
		m_flMatVal[ 2 ][ 3 ] = p.z;
	}

	inline void Invalidate( void )
	{
		for ( int i = 0; i < 3; i++ )
		{
			for ( int j = 0; j < 4; j++ )
			{
				m_flMatVal[ i ][ j ] = VEC_T_NAN;
			}
		}
	}

	float *operator[]( int i ) { Assert( ( i >= 0 ) && ( i < 3 ) ); return m_flMatVal[ i ]; }
	const float *operator[]( int i ) const { Assert( ( i >= 0 ) && ( i < 3 ) ); return m_flMatVal[ i ]; }
	float *Base() { return &m_flMatVal[ 0 ][ 0 ]; }
	const float *Base() const { return &m_flMatVal[ 0 ][ 0 ]; }

	float m_flMatVal[ 3 ][ 4 ]{};
};