#pragma once
namespace UnityEngine_UI::UnityEngine::UI
{
	enum struct InputField_CharacterValidation : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Integer = static_cast<int32_t>(0x1),
		Decimal = static_cast<int32_t>(0x2),
		Alphanumeric = static_cast<int32_t>(0x3),
		Name = static_cast<int32_t>(0x4),
		EmailAddress = static_cast<int32_t>(0x5),
	};
}

