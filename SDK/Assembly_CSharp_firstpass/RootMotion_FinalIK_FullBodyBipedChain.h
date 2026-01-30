#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	enum struct FullBodyBipedChain : int32_t
	{
		LeftArm = static_cast<int32_t>(0x0),
		RightArm = static_cast<int32_t>(0x1),
		LeftLeg = static_cast<int32_t>(0x2),
		RightLeg = static_cast<int32_t>(0x3),
	};
}

