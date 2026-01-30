#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Globalization_Calendar.h"
#include "System_Globalization_GregorianCalendarTypes.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct Calendar; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_DayOfWeek.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Globalization
{
	struct GregorianCalendar : mscorlib::System::Globalization::Calendar
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::GregorianCalendarTypes m_type;
		struct StaticFields
		{
			IL2CPP::Array<int32_t>* DaysToMonth365;
			IL2CPP::Array<int32_t>* DaysToMonth366;
			mscorlib::System::Globalization::Calendar* s_defaultInstance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void OnDeserialized(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		mscorlib::System::DateTime get_MinSupportedDateTime();
		mscorlib::System::DateTime get_MaxSupportedDateTime();
		static mscorlib::System::Globalization::Calendar* GetDefaultInstance();
		void _ctor();
		void _ctor(mscorlib::System::Globalization::GregorianCalendarTypes type);
		int32_t get_ID();
		int32_t GetDatePart(int64_t ticks, int32_t part);
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
		bool TryToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, mscorlib::System::DateTime& result);
		int32_t get_TwoDigitYearMax();
		int32_t ToFourDigitYear(int32_t year);
		static void _cctor();
	};
}

