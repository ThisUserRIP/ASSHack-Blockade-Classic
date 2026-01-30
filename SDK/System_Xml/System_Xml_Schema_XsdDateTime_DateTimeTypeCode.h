#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XsdDateTime_DateTimeTypeCode : int32_t
	{
		DateTime = static_cast<int32_t>(0x0),
		Time = static_cast<int32_t>(0x1),
		Date = static_cast<int32_t>(0x2),
		GYearMonth = static_cast<int32_t>(0x3),
		GYear = static_cast<int32_t>(0x4),
		GMonthDay = static_cast<int32_t>(0x5),
		GDay = static_cast<int32_t>(0x6),
		GMonth = static_cast<int32_t>(0x7),
		XdrDateTime = static_cast<int32_t>(0x8),
	};
}

