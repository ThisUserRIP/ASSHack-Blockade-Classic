#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct Calendar; };
namespace mscorlib::System::Globalization { struct EraInfo; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_DayOfWeek.h"

namespace mscorlib::System::Globalization
{
	struct GregorianCalendarHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_maxYear;
		int32_t m_minYear;
		mscorlib::System::Globalization::Calendar* m_Cal;
		IL2CPP::Array<mscorlib::System::Globalization::EraInfo*>* m_EraInfo;
		IL2CPP::Array<int32_t>* m_eras;
		mscorlib::System::DateTime m_minDate;
		struct StaticFields
		{
			IL2CPP::Array<int32_t>* DaysToMonth365;
			IL2CPP::Array<int32_t>* DaysToMonth366;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_MaxYear();
		void _ctor(mscorlib::System::Globalization::Calendar* cal, IL2CPP::Array<mscorlib::System::Globalization::EraInfo*>* eraInfo);
		int32_t GetGregorianYear(int32_t year, int32_t era);
		bool IsValidYear(int32_t year, int32_t era);
		int32_t GetDatePart(int64_t ticks, int32_t part);
		static int64_t GetAbsoluteDate(int32_t year, int32_t month, int32_t day);
		static int64_t DateToTicks(int32_t year, int32_t month, int32_t day);
		static int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second, int32_t millisecond);
		void CheckTicksRange(int64_t ticks);
		int32_t GetDayOfMonth(mscorlib::System::DateTime time);
		mscorlib::System::DayOfWeek GetDayOfWeek(mscorlib::System::DateTime time);
		int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);
		int32_t GetEra(mscorlib::System::DateTime time);
		IL2CPP::Array<int32_t>* get_Eras();
		int32_t GetMonth(mscorlib::System::DateTime time);
		int32_t GetMonthsInYear(int32_t year, int32_t era);
		int32_t GetYear(mscorlib::System::DateTime time);
		bool IsLeapYear(int32_t year, int32_t era);
		mscorlib::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);
		static void _cctor();
	};
}

