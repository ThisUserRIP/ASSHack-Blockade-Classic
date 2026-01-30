#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct TextureMappingOptions : int32_t
	{
		Character = static_cast<int32_t>(0x0),
		Line = static_cast<int32_t>(0x1),
		Paragraph = static_cast<int32_t>(0x2),
		MatchAspect = static_cast<int32_t>(0x3),
	};
}

