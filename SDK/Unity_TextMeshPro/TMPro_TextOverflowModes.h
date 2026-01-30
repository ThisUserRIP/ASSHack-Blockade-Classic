#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct TextOverflowModes : int32_t
	{
		Overflow = static_cast<int32_t>(0x0),
		Ellipsis = static_cast<int32_t>(0x1),
		Masking = static_cast<int32_t>(0x2),
		Truncate = static_cast<int32_t>(0x3),
		ScrollRect = static_cast<int32_t>(0x4),
		Page = static_cast<int32_t>(0x5),
		Linked = static_cast<int32_t>(0x6),
	};
}

