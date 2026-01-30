#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct TMP_InputField_CharacterValidation : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Digit = static_cast<int32_t>(0x1),
		Integer = static_cast<int32_t>(0x2),
		Decimal = static_cast<int32_t>(0x3),
		Alphanumeric = static_cast<int32_t>(0x4),
		Name = static_cast<int32_t>(0x5),
		Regex = static_cast<int32_t>(0x6),
		EmailAddress = static_cast<int32_t>(0x7),
		CustomValidator = static_cast<int32_t>(0x8),
	};
}

