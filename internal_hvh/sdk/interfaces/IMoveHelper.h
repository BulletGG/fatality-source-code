#pragma once

class IMoveHelper
{
public:
	virtual	void _vpad() = 0;
	virtual void SetHost( IClientEntity* host ) = 0;
	virtual	void _vpad2() = 0;
	void UnknownFunc()
	{
		auto funcaddr = util::get_vfunc<DWORD>( this, 4 );
		auto thisptr = reinterpret_cast< DWORD >( this );
		_asm
		{
			mov ecx, thisptr
			mov eax, [ ecx ]
			call funcaddr
		}
	}

	bool m_bFirstRunOfFunctions : 1;
	bool m_bGameCodeMovedPlayer : 1;
	int m_nPlayerHandle; // edict index on server, client entity handle on client=
	int m_nImpulseCommand; // Impulse command issued.
	QAngle m_vecViewAngles; // Command view angles (local space)
	QAngle m_vecAbsViewAngles; // Command view angles (world space)
	int m_nButtons; // Attack buttons.
	int m_nOldButtons; // From host_client->oldbuttons;
	float m_flForwardMove;
	float m_flSideMove;
	float m_flUpMove;
	float m_flMaxSpeed;
	float m_flClientMaxSpeed;
	Vector m_vecVelocity; // edict::velocity // Current movement direction.
	QAngle m_vecAngles; // edict::angles
	QAngle m_vecOldAngles;
	float m_outStepHeight; // how much you climbed this move
	Vector m_outWishVel; // This is where you tried 
	Vector m_outJumpVel; // This is your jump velocity
	Vector m_vecConstraintCenter;
	float m_flConstraintRadius;
	float m_flConstraintWidth;
	float m_flConstraintSpeedFactor;
	float m_flUnknown[ 5 ];
	Vector m_vecAbsOrigin;
};