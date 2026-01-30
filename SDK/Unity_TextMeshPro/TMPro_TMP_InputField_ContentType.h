#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct TMP_InputField_ContentType : int32_t
	{
		Standard = static_cast<int32_t>(0x0),
		Autocorrected = static_cast<int32_t>(0x1),
		IntegerNumber = static_cast<int32_t>(0x2),
		DecimalNumber = static_cast<int32_t>(0x3),
		Alphanumeric = static_cast<int32_t>(0x4),
		Name = static_cast<int32_t>(0x5),
		EmailAddress = static_cast<int32_t>(0x6),
		Password = static_cast<int32_t>(0x7),
		Pin = static_cast<int32_t>(0x8),
		Custom = static_cast<int32_t>(0x9),
	};
}

