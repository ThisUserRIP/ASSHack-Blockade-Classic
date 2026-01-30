#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct VerticalAlignmentOptions : int32_t
	{
		Top = static_cast<int32_t>(0x100),
		Middle = static_cast<int32_t>(0x200),
		Bottom = static_cast<int32_t>(0x400),
		Baseline = static_cast<int32_t>(0x800),
		Geometry = static_cast<int32_t>(0x1000),
		Capline = static_cast<int32_t>(0x2000),
	};
}

