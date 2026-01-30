#pragma once
namespace System::System::ComponentModel
{
	enum struct MaskedTextResultHint : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		CharacterEscaped = static_cast<int32_t>(0x1),
		NoEffect = static_cast<int32_t>(0x2),
		SideEffect = static_cast<int32_t>(0x3),
		Success = static_cast<int32_t>(0x4),
		AsciiCharacterExpected = static_cast<int32_t>(0xFFFFFFFF),
		AlphanumericCharacterExpected = static_cast<int32_t>(0xFFFFFFFE),
		DigitExpected = static_cast<int32_t>(0xFFFFFFFD),
		LetterExpected = static_cast<int32_t>(0xFFFFFFFC),
		SignedDigitExpected = static_cast<int32_t>(0xFFFFFFFB),
		InvalidInput = static_cast<int32_t>(0xFFFFFFCD),
		PromptCharNotAllowed = static_cast<int32_t>(0xFFFFFFCC),
		UnavailableEditPosition = static_cast<int32_t>(0xFFFFFFCB),
		NonEditPosition = static_cast<int32_t>(0xFFFFFFCA),
		PositionOutOfRange = static_cast<int32_t>(0xFFFFFFC9),
	};
}

