#pragma once
namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	enum struct CameraMotionBlur_MotionBlurFilter : int32_t
	{
		CameraMotion = static_cast<int32_t>(0x0),
		LocalBlur = static_cast<int32_t>(0x1),
		Reconstruction = static_cast<int32_t>(0x2),
		ReconstructionDX11 = static_cast<int32_t>(0x3),
		ReconstructionDisc = static_cast<int32_t>(0x4),
	};
}

