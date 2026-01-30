#pragma once
namespace Assembly_CSharp
{
	enum struct vp_MovingPlatform_PathMoveType : int32_t
	{
		PingPong = static_cast<int32_t>(0x0),
		Loop = static_cast<int32_t>(0x1),
		Target = static_cast<int32_t>(0x2),
	};
}

