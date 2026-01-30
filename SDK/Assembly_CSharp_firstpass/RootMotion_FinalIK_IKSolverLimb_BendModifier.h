#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	enum struct IKSolverLimb_BendModifier : int32_t
	{
		Animation = static_cast<int32_t>(0x0),
		Target = static_cast<int32_t>(0x1),
		Parent = static_cast<int32_t>(0x2),
		Arm = static_cast<int32_t>(0x3),
		Goal = static_cast<int32_t>(0x4),
	};
}

