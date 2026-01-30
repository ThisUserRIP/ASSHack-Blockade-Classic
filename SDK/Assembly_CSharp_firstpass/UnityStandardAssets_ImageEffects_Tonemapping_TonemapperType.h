#pragma once
namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	enum struct Tonemapping_TonemapperType : int32_t
	{
		SimpleReinhard = static_cast<int32_t>(0x0),
		UserCurve = static_cast<int32_t>(0x1),
		Hable = static_cast<int32_t>(0x2),
		Photographic = static_cast<int32_t>(0x3),
		OptimizedHejiDawson = static_cast<int32_t>(0x4),
		AdaptiveReinhard = static_cast<int32_t>(0x5),
		AdaptiveReinhardAutoWhite = static_cast<int32_t>(0x6),
	};
}

