#pragma once
namespace Assembly_CSharp_firstpass::RootMotion
{
	enum struct BipedNaming_BoneType : int32_t
	{
		Unassigned = static_cast<int32_t>(0x0),
		Spine = static_cast<int32_t>(0x1),
		Head = static_cast<int32_t>(0x2),
		Arm = static_cast<int32_t>(0x3),
		Leg = static_cast<int32_t>(0x4),
		Tail = static_cast<int32_t>(0x5),
		Eye = static_cast<int32_t>(0x6),
	};
}

