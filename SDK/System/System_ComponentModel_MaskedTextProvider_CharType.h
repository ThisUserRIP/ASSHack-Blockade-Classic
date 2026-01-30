#pragma once
namespace System::System::ComponentModel
{
	enum struct MaskedTextProvider_CharType : int32_t
	{
		EditOptional = static_cast<int32_t>(0x1),
		EditRequired = static_cast<int32_t>(0x2),
		Separator = static_cast<int32_t>(0x4),
		Literal = static_cast<int32_t>(0x8),
		Modifier = static_cast<int32_t>(0x10),
	};
}

