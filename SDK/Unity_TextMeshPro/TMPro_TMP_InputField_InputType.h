#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct TMP_InputField_InputType : int32_t
	{
		Standard = static_cast<int32_t>(0x0),
		AutoCorrect = static_cast<int32_t>(0x1),
		Password = static_cast<int32_t>(0x2),
	};
}

