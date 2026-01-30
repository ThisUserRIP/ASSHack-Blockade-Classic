#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct TextContainerAnchors : int32_t
	{
		TopLeft = static_cast<int32_t>(0x0),
		Top = static_cast<int32_t>(0x1),
		TopRight = static_cast<int32_t>(0x2),
		Left = static_cast<int32_t>(0x3),
		Middle = static_cast<int32_t>(0x4),
		Right = static_cast<int32_t>(0x5),
		BottomLeft = static_cast<int32_t>(0x6),
		Bottom = static_cast<int32_t>(0x7),
		BottomRight = static_cast<int32_t>(0x8),
		Custom = static_cast<int32_t>(0x9),
	};
}

