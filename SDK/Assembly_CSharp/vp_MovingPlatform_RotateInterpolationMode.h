#pragma once
namespace Assembly_CSharp
{
	enum struct vp_MovingPlatform_RotateInterpolationMode : int32_t
	{
		SyncToMovement = static_cast<int32_t>(0x0),
		EaseOut = static_cast<int32_t>(0x1),
		CustomEaseOut = static_cast<int32_t>(0x2),
		CustomRotate = static_cast<int32_t>(0x3),
	};
}

