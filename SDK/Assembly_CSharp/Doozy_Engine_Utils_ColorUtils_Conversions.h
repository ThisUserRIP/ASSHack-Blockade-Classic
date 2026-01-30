#pragma once
namespace Assembly_CSharp::Doozy::Engine::Utils
{
	enum struct ColorUtils_Conversions : int32_t
	{
		RGB_TO_RGB = static_cast<int32_t>(0x0),
		HEX_TO_RGB = static_cast<int32_t>(0x1),
		RGB_TO_HEX = static_cast<int32_t>(0x2),
		RGB_TO_FGC = static_cast<int32_t>(0x3),
		HSL_TO_RGB = static_cast<int32_t>(0x4),
		RGB_TO_HSL = static_cast<int32_t>(0x5),
		HSV_TO_RGB = static_cast<int32_t>(0x6),
		RGB_TO_HSV = static_cast<int32_t>(0x7),
		CMY_TO_RGB = static_cast<int32_t>(0x8),
		RGB_TO_CMY = static_cast<int32_t>(0x9),
		CMYK_TO_RGB = static_cast<int32_t>(0xA),
		RGB_TO_CMYK = static_cast<int32_t>(0xB),
		XYZ_TO_RGB = static_cast<int32_t>(0xC),
		RGB_TO_XYZ = static_cast<int32_t>(0xD),
		Yxy_TO_RGB = static_cast<int32_t>(0xE),
		RGB_TO_Yxy = static_cast<int32_t>(0xF),
		LAB_TO_RGB = static_cast<int32_t>(0x10),
		RGB_TO_LAB = static_cast<int32_t>(0x11),
	};
}

