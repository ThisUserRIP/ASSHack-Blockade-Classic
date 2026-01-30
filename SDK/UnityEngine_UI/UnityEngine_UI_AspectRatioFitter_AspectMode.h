#pragma once
namespace UnityEngine_UI::UnityEngine::UI
{
	enum struct AspectRatioFitter_AspectMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		WidthControlsHeight = static_cast<int32_t>(0x1),
		HeightControlsWidth = static_cast<int32_t>(0x2),
		FitInParent = static_cast<int32_t>(0x3),
		EnvelopeParent = static_cast<int32_t>(0x4),
	};
}

