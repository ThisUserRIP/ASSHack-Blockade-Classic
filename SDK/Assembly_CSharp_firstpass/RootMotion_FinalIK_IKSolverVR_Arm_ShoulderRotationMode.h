#pragma once
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	enum struct IKSolverVR_Arm_ShoulderRotationMode : int32_t
	{
		YawPitch = static_cast<int32_t>(0x0),
		FromTo = static_cast<int32_t>(0x1),
	};
}

