#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	enum struct IKSolverVR_PositionOffset : int32_t
	{
		Pelvis = static_cast<int32_t>(0x0),
		Chest = static_cast<int32_t>(0x1),
		Head = static_cast<int32_t>(0x2),
		LeftHand = static_cast<int32_t>(0x3),
		RightHand = static_cast<int32_t>(0x4),
		LeftFoot = static_cast<int32_t>(0x5),
		RightFoot = static_cast<int32_t>(0x6),
		LeftHeel = static_cast<int32_t>(0x7),
		RightHeel = static_cast<int32_t>(0x8),
	};
}

