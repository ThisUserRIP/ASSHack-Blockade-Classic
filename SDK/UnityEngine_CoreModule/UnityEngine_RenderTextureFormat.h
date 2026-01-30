#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct RenderTextureFormat : int32_t
	{
		ARGB32 = static_cast<int32_t>(0x0),
		Depth = static_cast<int32_t>(0x1),
		ARGBHalf = static_cast<int32_t>(0x2),
		Shadowmap = static_cast<int32_t>(0x3),
		RGB565 = static_cast<int32_t>(0x4),
		ARGB4444 = static_cast<int32_t>(0x5),
		ARGB1555 = static_cast<int32_t>(0x6),
		Default = static_cast<int32_t>(0x7),
		ARGB2101010 = static_cast<int32_t>(0x8),
		DefaultHDR = static_cast<int32_t>(0x9),
		ARGB64 = static_cast<int32_t>(0xA),
		ARGBFloat = static_cast<int32_t>(0xB),
		RGFloat = static_cast<int32_t>(0xC),
		RGHalf = static_cast<int32_t>(0xD),
		RFloat = static_cast<int32_t>(0xE),
		RHalf = static_cast<int32_t>(0xF),
		R8 = static_cast<int32_t>(0x10),
		ARGBInt = static_cast<int32_t>(0x11),
		RGInt = static_cast<int32_t>(0x12),
		RInt = static_cast<int32_t>(0x13),
		BGRA32 = static_cast<int32_t>(0x14),
		RGB111110Float = static_cast<int32_t>(0x16),
		RG32 = static_cast<int32_t>(0x17),
		RGBAUShort = static_cast<int32_t>(0x18),
		RG16 = static_cast<int32_t>(0x19),
		BGRA10101010_XR = static_cast<int32_t>(0x1A),
		BGR101010_XR = static_cast<int32_t>(0x1B),
		R16 = static_cast<int32_t>(0x1C),
	};
}

