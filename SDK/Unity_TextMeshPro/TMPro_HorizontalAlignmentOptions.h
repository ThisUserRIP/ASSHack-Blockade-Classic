#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct HorizontalAlignmentOptions : int32_t
	{
		Left = static_cast<int32_t>(0x1),
		Center = static_cast<int32_t>(0x2),
		Right = static_cast<int32_t>(0x4),
		Justified = static_cast<int32_t>(0x8),
		Flush = static_cast<int32_t>(0x10),
		Geometry = static_cast<int32_t>(0x20),
	};
}

