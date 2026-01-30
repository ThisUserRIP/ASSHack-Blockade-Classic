#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	enum struct IKSolverVR_RotationOffset : int32_t
	{
		Pelvis = static_cast<int32_t>(0x0),
		Chest = static_cast<int32_t>(0x1),
		Head = static_cast<int32_t>(0x2),
	};
}

