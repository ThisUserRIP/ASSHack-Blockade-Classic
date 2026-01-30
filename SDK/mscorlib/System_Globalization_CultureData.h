#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct CalendarData; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Globalization { struct NumberFormatInfo; };

namespace mscorlib::System::Globalization
{
	struct CultureData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* sAM1159;
		mscorlib::System::String* sPM2359;
		mscorlib::System::String* sTimeSeparator;
		IL2CPP::Array<mscorlib::System::String*>* saLongTimes;
		IL2CPP::Array<mscorlib::System::String*>* saShortTimes;
		int32_t iFirstDayOfWeek;
		int32_t iFirstWeekOfYear;
		IL2CPP::Array<int32_t>* waCalendars;
		IL2CPP::Array<mscorlib::System::Globalization::CalendarData*>* calendars;
		mscorlib::System::String* sISO639Language;
		mscorlib::System::String* sRealName;
		bool bUseOverrides;
		int32_t calendarId;
		int32_t numberIndex;
		int32_t iDefaultAnsiCodePage;
		int32_t iDefaultOemCodePage;
		int32_t iDefaultMacCodePage;
		int32_t iDefaultEbcdicCodePage;
		bool isRightToLeft;
		mscorlib::System::String* sListSeparator;
		struct StaticFields
		{
			mscorlib::System::Globalization::CultureData* s_Invariant;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* name);
		static mscorlib::System::Globalization::CultureData* get_Invariant();
		static mscorlib::System::Globalization::CultureData* GetCultureData(mscorlib::System::String* cultureName, bool useUserOverride);
		static mscorlib::System::Globalization::CultureData* GetCultureData(mscorlib::System::String* cultureName, bool useUserOverride, int32_t datetimeIndex, int32_t calendarId, int32_t numberIndex, mscorlib::System::String* iso2lang, int32_t ansiCodePage, int32_t oemCodePage, int32_t macCodePage, int32_t ebcdicCodePage, bool rightToLeft, mscorlib::System::String* listSeparator);
		static mscorlib::System::Globalization::CultureData* GetCultureData(int32_t culture, bool bUseUserOverride);
		void fill_culture_data(int32_t datetimeIndex);
		mscorlib::System::Globalization::CalendarData* GetCalendar(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* get_LongTimes();
		IL2CPP::Array<mscorlib::System::String*>* get_ShortTimes();
		mscorlib::System::String* get_SISO639LANGNAME();
		int32_t get_IFIRSTDAYOFWEEK();
		int32_t get_IFIRSTWEEKOFYEAR();
		mscorlib::System::String* get_SAM1159();
		mscorlib::System::String* get_SPM2359();
		mscorlib::System::String* get_TimeSeparator();
		IL2CPP::Array<int32_t>* get_CalendarIds();
		bool get_IsInvariantCulture();
		mscorlib::System::String* get_CultureName();
		mscorlib::System::String* get_SCOMPAREINFO();
		mscorlib::System::String* get_STEXTINFO();
		int32_t get_ILANGUAGE();
		bool get_UseUserOverride();
		IL2CPP::Array<mscorlib::System::String*>* EraNames(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* AbbrevEraNames(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* AbbreviatedEnglishEraNames(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* ShortDates(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* LongDates(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* YearMonths(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* DayNames(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* AbbreviatedDayNames(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* MonthNames(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* GenitiveMonthNames(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* AbbreviatedMonthNames(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* AbbreviatedGenitiveMonthNames(int32_t calendarId);
		IL2CPP::Array<mscorlib::System::String*>* LeapYearMonthNames(int32_t calendarId);
		mscorlib::System::String* MonthDay(int32_t calendarId);
		mscorlib::System::String* DateSeparator(int32_t calendarId);
		static mscorlib::System::String* GetDateSeparator(mscorlib::System::String* format);
		static mscorlib::System::String* GetSeparator(mscorlib::System::String* format, mscorlib::System::String* timeParts);
		static int32_t IndexOfTimePart(mscorlib::System::String* format, int32_t startIndex, mscorlib::System::String* timeParts);
		static mscorlib::System::String* UnescapeNlsString(mscorlib::System::String* str, int32_t start, int32_t end);
		static IL2CPP::Array<mscorlib::System::String*>* ReescapeWin32Strings(IL2CPP::Array<mscorlib::System::String*>* array);
		static mscorlib::System::String* ReescapeWin32String(mscorlib::System::String* str);
		void GetNFIValues(mscorlib::System::Globalization::NumberFormatInfo* nfi);
		static void fill_number_data(mscorlib::System::Globalization::NumberFormatInfo* nfi, int32_t numberIndex);
	};
}

