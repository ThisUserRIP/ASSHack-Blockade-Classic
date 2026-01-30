#pragma once
namespace mscorlib::System::Globalization
{
	enum struct UnicodeCategory : int32_t
	{
		UppercaseLetter = static_cast<int32_t>(0x0),
		LowercaseLetter = static_cast<int32_t>(0x1),
		TitlecaseLetter = static_cast<int32_t>(0x2),
		ModifierLetter = static_cast<int32_t>(0x3),
		OtherLetter = static_cast<int32_t>(0x4),
		NonSpacingMark = static_cast<int32_t>(0x5),
		SpacingCombiningMark = static_cast<int32_t>(0x6),
		EnclosingMark = static_cast<int32_t>(0x7),
		DecimalDigitNumber = static_cast<int32_t>(0x8),
		LetterNumber = static_cast<int32_t>(0x9),
		OtherNumber = static_cast<int32_t>(0xA),
		SpaceSeparator = static_cast<int32_t>(0xB),
		LineSeparator = static_cast<int32_t>(0xC),
		ParagraphSeparator = static_cast<int32_t>(0xD),
		Control = static_cast<int32_t>(0xE),
		Format = static_cast<int32_t>(0xF),
		Surrogate = static_cast<int32_t>(0x10),
		PrivateUse = static_cast<int32_t>(0x11),
		ConnectorPunctuation = static_cast<int32_t>(0x12),
		DashPunctuation = static_cast<int32_t>(0x13),
		OpenPunctuation = static_cast<int32_t>(0x14),
		ClosePunctuation = static_cast<int32_t>(0x15),
		InitialQuotePunctuation = static_cast<int32_t>(0x16),
		FinalQuotePunctuation = static_cast<int32_t>(0x17),
		OtherPunctuation = static_cast<int32_t>(0x18),
		MathSymbol = static_cast<int32_t>(0x19),
		CurrencySymbol = static_cast<int32_t>(0x1A),
		ModifierSymbol = static_cast<int32_t>(0x1B),
		OtherSymbol = static_cast<int32_t>(0x1C),
		OtherNotAssigned = static_cast<int32_t>(0x1D),
	};
}

