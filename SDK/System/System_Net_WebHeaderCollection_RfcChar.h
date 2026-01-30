#pragma once
namespace System::System::Net
{
	enum struct WebHeaderCollection_RfcChar : uint8_t
	{
		High = static_cast<uint8_t>(0x0),
		Reg = static_cast<uint8_t>(0x1),
		Ctl = static_cast<uint8_t>(0x2),
		CR = static_cast<uint8_t>(0x3),
		LF = static_cast<uint8_t>(0x4),
		WS = static_cast<uint8_t>(0x5),
		Colon = static_cast<uint8_t>(0x6),
		Delim = static_cast<uint8_t>(0x7),
	};
}

