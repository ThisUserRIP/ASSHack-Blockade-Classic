#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	enum struct IKMappingLimb_BoneMapType : int32_t
	{
		Parent = static_cast<int32_t>(0x0),
		Bone1 = static_cast<int32_t>(0x1),
		Bone2 = static_cast<int32_t>(0x2),
		Bone3 = static_cast<int32_t>(0x3),
	};
}

