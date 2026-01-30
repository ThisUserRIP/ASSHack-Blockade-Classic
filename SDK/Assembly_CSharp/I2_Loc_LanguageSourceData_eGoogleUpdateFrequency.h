#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct LanguageSourceData_eGoogleUpdateFrequency : int32_t
	{
		Always = static_cast<int32_t>(0x0),
		Never = static_cast<int32_t>(0x1),
		Daily = static_cast<int32_t>(0x2),
		Weekly = static_cast<int32_t>(0x3),
		Monthly = static_cast<int32_t>(0x4),
		OnlyOnce = static_cast<int32_t>(0x5),
		EveryOtherDay = static_cast<int32_t>(0x6),
	};
}

