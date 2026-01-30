#pragma once
namespace mscorlib::System::Globalization
{
	enum struct CalendarId : uint16_t
	{
		GREGORIAN = static_cast<uint16_t>(0x1),
		GREGORIAN_US = static_cast<uint16_t>(0x2),
		JAPAN = static_cast<uint16_t>(0x3),
		TAIWAN = static_cast<uint16_t>(0x4),
		KOREA = static_cast<uint16_t>(0x5),
		HIJRI = static_cast<uint16_t>(0x6),
		THAI = static_cast<uint16_t>(0x7),
		HEBREW = static_cast<uint16_t>(0x8),
		GREGORIAN_ME_FRENCH = static_cast<uint16_t>(0x9),
		GREGORIAN_ARABIC = static_cast<uint16_t>(0xA),
		GREGORIAN_XLIT_ENGLISH = static_cast<uint16_t>(0xB),
		GREGORIAN_XLIT_FRENCH = static_cast<uint16_t>(0xC),
		JULIAN = static_cast<uint16_t>(0xD),
		JAPANESELUNISOLAR = static_cast<uint16_t>(0xE),
		CHINESELUNISOLAR = static_cast<uint16_t>(0xF),
		SAKA = static_cast<uint16_t>(0x10),
		LUNAR_ETO_CHN = static_cast<uint16_t>(0x11),
		LUNAR_ETO_KOR = static_cast<uint16_t>(0x12),
		LUNAR_ETO_ROKUYOU = static_cast<uint16_t>(0x13),
		KOREANLUNISOLAR = static_cast<uint16_t>(0x14),
		TAIWANLUNISOLAR = static_cast<uint16_t>(0x15),
		PERSIAN = static_cast<uint16_t>(0x16),
		UMALQURA = static_cast<uint16_t>(0x17),
		LAST_CALENDAR = static_cast<uint16_t>(0x17),
	};
}

