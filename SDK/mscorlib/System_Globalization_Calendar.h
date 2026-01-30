#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_DayOfWeek.h"

namespace mscorlib::System::Globalization
{
	struct Calendar : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_currentEraValue;
		bool m_isReadOnly;
		int32_t twoDigitYearMax;
		struct StaticFields
		{
			int64_t TicksPerMillisecond;
			int64_t TicksPerSecond;
			int64_t TicksPerMinute;
			int64_t TicksPerHour;
			int64_t TicksPerDay;
			int32_t MillisPerSecond;
			int32_t MillisPerMinute;
			int32_t MillisPerHour;
			int32_t MillisPerDay;
			int32_t DaysPerYear;
			int32_t DaysPer4Years;
			int32_t DaysPer100Years;
			int32_t DaysPer400Years;
			int32_t DaysTo10000;
			int64_t MaxMillis;
			int32_t CAL_GREGORIAN_;
			int32_t CAL_GREGORIAN_US_;
			int32_t CAL_JAPAN_;
			int32_t CAL_TAIWAN_;
			int32_t CAL_KOREA_;
			int32_t CAL_HIJRI_;
			int32_t CAL_THAI_;
			int32_t CAL_HEBREW_;
			int32_t CAL_GREGORIAN_ME_FRENCH_;
			int32_t CAL_GREGORIAN_ARABIC_;
			int32_t CAL_GREGORIAN_XLIT_ENGLISH_;
			int32_t CAL_GREGORIAN_XLIT_FRENCH_;
			int32_t CAL_JULIAN;
			int32_t CAL_JAPANESELUNISOLAR;
			int32_t CAL_CHINESELUNISOLAR;
			int32_t CAL_SAKA;
			int32_t CAL_LUNAR_ETO_CHN;
			int32_t CAL_LUNAR_ETO_KOR;
			int32_t CAL_LUNAR_ETO_ROKUYOU;
			int32_t CAL_KOREANLUNISOLAR;
			int32_t CAL_TAIWANLUNISOLAR;
			int32_t CAL_PERSIAN_;
			int32_t CAL_UMALQURA_;
			int32_t CurrentEra;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::DateTime get_MinSupportedDateTime();
		mscorlib::System::DateTime get_MaxSupportedDateTime();
		void _ctor();
		int32_t get_ID();
		int32_t get_BaseCalendarID();
		bool get_IsReadOnly();
		mscorlib::System::Object* Clone();
		static mscorlib::System::Globalization::Calendar* ReadOnly(mscorlib::System::Globalization::Calendar* calendar);
		void SetReadOnlyState(bool readOnly);
		int32_t get_CurrentEraValue();
		int32_t GetDayOfMonth(mscorlib::System::DateTime time);
		mscorlib::System::DayOfWeek GetDayOfWeek(mscorlib::System::DateTime time);
		int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);
		int32_t GetEra(mscorlib::System::DateTime time);
		IL2CPP::Array<int32_t>* get_Eras();
		int32_t GetMonth(mscorlib::System::DateTime time);
		int32_t GetMonthsInYear(int32_t year, int32_t era);
		int32_t GetYear(mscorlib::System::DateTime time);
		bool IsLeapYear(int32_t year);
		bool IsLeapYear(int32_t year, int32_t era);
		mscorlib::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond);
		mscorlib::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);
		bool TryToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, mscorlib::System::DateTime& result);
		bool IsValidYear(int32_t year, int32_t era);
		bool IsValidMonth(int32_t year, int32_t month, int32_t era);
		bool IsValidDay(int32_t year, int32_t month, int32_t day, int32_t era);
		int32_t get_TwoDigitYearMax();
		int32_t ToFourDigitYear(int32_t year);
		static int32_t GetSystemTwoDigitYearSetting(int32_t CalID, int32_t defaultYearValue);
	};
}

