#pragma once
namespace Assembly_CSharp
{
	enum struct vp_Spring_UpdateMode : int32_t
	{
		Position = static_cast<int32_t>(0x0),
		PositionAdditive = static_cast<int32_t>(0x1),
		Rotation = static_cast<int32_t>(0x2),
		RotationAdditive = static_cast<int32_t>(0x3),
		Scale = static_cast<int32_t>(0x4),
		ScaleAdditive = static_cast<int32_t>(0x5),
	};
}

