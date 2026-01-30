#pragma once
namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	enum struct ScreenOverlay_OverlayBlendMode : int32_t
	{
		Additive = static_cast<int32_t>(0x0),
		ScreenBlend = static_cast<int32_t>(0x1),
		Multiply = static_cast<int32_t>(0x2),
		Overlay = static_cast<int32_t>(0x3),
		AlphaBlend = static_cast<int32_t>(0x4),
	};
}

