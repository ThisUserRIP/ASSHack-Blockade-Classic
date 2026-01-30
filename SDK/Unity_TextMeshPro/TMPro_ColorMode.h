#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct ColorMode : int32_t
	{
		Single = static_cast<int32_t>(0x0),
		HorizontalGradient = static_cast<int32_t>(0x1),
		VerticalGradient = static_cast<int32_t>(0x2),
		FourCornersGradient = static_cast<int32_t>(0x3),
	};
}

