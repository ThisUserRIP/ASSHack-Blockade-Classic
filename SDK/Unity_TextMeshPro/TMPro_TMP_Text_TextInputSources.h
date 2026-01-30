#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct TMP_Text_TextInputSources : int32_t
	{
		TextInputBox = static_cast<int32_t>(0x0),
		SetText = static_cast<int32_t>(0x1),
		SetTextArray = static_cast<int32_t>(0x2),
		TextString = static_cast<int32_t>(0x3),
	};
}

