#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct TMP_InputField_LineType : int32_t
	{
		SingleLine = static_cast<int32_t>(0x0),
		MultiLineSubmit = static_cast<int32_t>(0x1),
		MultiLineNewline = static_cast<int32_t>(0x2),
	};
}

