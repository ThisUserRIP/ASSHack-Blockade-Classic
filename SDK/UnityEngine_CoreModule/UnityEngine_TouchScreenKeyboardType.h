#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct TouchScreenKeyboardType : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		ASCIICapable = static_cast<int32_t>(0x1),
		NumbersAndPunctuation = static_cast<int32_t>(0x2),
		URL = static_cast<int32_t>(0x3),
		NumberPad = static_cast<int32_t>(0x4),
		PhonePad = static_cast<int32_t>(0x5),
		NamePhonePad = static_cast<int32_t>(0x6),
		EmailAddress = static_cast<int32_t>(0x7),
		NintendoNetworkAccount = static_cast<int32_t>(0x8),
		Social = static_cast<int32_t>(0x9),
		Search = static_cast<int32_t>(0xA),
		DecimalPad = static_cast<int32_t>(0xB),
		OneTimeCode = static_cast<int32_t>(0xC),
	};
}

