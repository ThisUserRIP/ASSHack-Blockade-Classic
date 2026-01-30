#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	enum struct InteractionObject_WeightCurve_Type : int32_t
	{
		PositionWeight = static_cast<int32_t>(0x0),
		RotationWeight = static_cast<int32_t>(0x1),
		PositionOffsetX = static_cast<int32_t>(0x2),
		PositionOffsetY = static_cast<int32_t>(0x3),
		PositionOffsetZ = static_cast<int32_t>(0x4),
		Pull = static_cast<int32_t>(0x5),
		Reach = static_cast<int32_t>(0x6),
		RotateBoneWeight = static_cast<int32_t>(0x7),
		Push = static_cast<int32_t>(0x8),
		PushParent = static_cast<int32_t>(0x9),
		PoserWeight = static_cast<int32_t>(0xA),
	};
}

