#pragma once
namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	enum struct AAMode : int32_t
	{
		FXAA2 = static_cast<int32_t>(0x0),
		FXAA3Console = static_cast<int32_t>(0x1),
		FXAA1PresetA = static_cast<int32_t>(0x2),
		FXAA1PresetB = static_cast<int32_t>(0x3),
		NFAA = static_cast<int32_t>(0x4),
		SSAA = static_cast<int32_t>(0x5),
		DLAA = static_cast<int32_t>(0x6),
	};
}

