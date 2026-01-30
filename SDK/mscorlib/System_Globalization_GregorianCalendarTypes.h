#pragma once
namespace mscorlib::System::Globalization
{
	enum struct GregorianCalendarTypes : int32_t
	{
		Localized = static_cast<int32_t>(0x1),
		USEnglish = static_cast<int32_t>(0x2),
		MiddleEastFrench = static_cast<int32_t>(0x9),
		Arabic = static_cast<int32_t>(0xA),
		TransliteratedEnglish = static_cast<int32_t>(0xB),
		TransliteratedFrench = static_cast<int32_t>(0xC),
	};
}

