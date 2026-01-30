#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct XsdDuration_Parts : int32_t
	{
		HasNone = static_cast<int32_t>(0x0),
		HasYears = static_cast<int32_t>(0x1),
		HasMonths = static_cast<int32_t>(0x2),
		HasDays = static_cast<int32_t>(0x4),
		HasHours = static_cast<int32_t>(0x8),
		HasMinutes = static_cast<int32_t>(0x10),
		HasSeconds = static_cast<int32_t>(0x20),
	};
}

