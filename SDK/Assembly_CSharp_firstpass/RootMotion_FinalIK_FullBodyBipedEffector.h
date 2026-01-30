#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	enum struct FullBodyBipedEffector : int32_t
	{
		Body = static_cast<int32_t>(0x0),
		LeftShoulder = static_cast<int32_t>(0x1),
		RightShoulder = static_cast<int32_t>(0x2),
		LeftThigh = static_cast<int32_t>(0x3),
		RightThigh = static_cast<int32_t>(0x4),
		LeftHand = static_cast<int32_t>(0x5),
		RightHand = static_cast<int32_t>(0x6),
		LeftFoot = static_cast<int32_t>(0x7),
		RightFoot = static_cast<int32_t>(0x8),
	};
}

