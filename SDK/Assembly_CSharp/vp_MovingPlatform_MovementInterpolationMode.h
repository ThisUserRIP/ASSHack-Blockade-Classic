#pragma once
namespace Assembly_CSharp
{
	enum struct vp_MovingPlatform_MovementInterpolationMode : int32_t
	{
		EaseInOut = static_cast<int32_t>(0x0),
		EaseIn = static_cast<int32_t>(0x1),
		EaseOut = static_cast<int32_t>(0x2),
		EaseOut2 = static_cast<int32_t>(0x3),
		Slerp = static_cast<int32_t>(0x4),
		Lerp = static_cast<int32_t>(0x5),
	};
}

