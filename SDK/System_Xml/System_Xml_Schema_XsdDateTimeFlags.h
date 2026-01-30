#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XsdDateTimeFlags : int32_t
	{
		DateTime = static_cast<int32_t>(0x1),
		Time = static_cast<int32_t>(0x2),
		Date = static_cast<int32_t>(0x4),
		GYearMonth = static_cast<int32_t>(0x8),
		GYear = static_cast<int32_t>(0x10),
		GMonthDay = static_cast<int32_t>(0x20),
		GDay = static_cast<int32_t>(0x40),
		GMonth = static_cast<int32_t>(0x80),
		XdrDateTimeNoTz = static_cast<int32_t>(0x100),
		XdrDateTime = static_cast<int32_t>(0x200),
		XdrTimeNoTz = static_cast<int32_t>(0x400),
		AllXsd = static_cast<int32_t>(0xFF),
	};
}

