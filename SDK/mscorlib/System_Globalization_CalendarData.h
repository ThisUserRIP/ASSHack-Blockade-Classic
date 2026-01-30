#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Globalization
{
	struct CalendarData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* sNativeName;
		IL2CPP::Array<mscorlib::System::String*>* saShortDates;
		IL2CPP::Array<mscorlib::System::String*>* saYearMonths;
		IL2CPP::Array<mscorlib::System::String*>* saLongDates;
		mscorlib::System::String* sMonthDay;
		IL2CPP::Array<mscorlib::System::String*>* saEraNames;
		IL2CPP::Array<mscorlib::System::String*>* saAbbrevEraNames;
		IL2CPP::Array<mscorlib::System::String*>* saAbbrevEnglishEraNames;
		IL2CPP::Array<mscorlib::System::String*>* saDayNames;
		IL2CPP::Array<mscorlib::System::String*>* saAbbrevDayNames;
		IL2CPP::Array<mscorlib::System::String*>* saSuperShortDayNames;
		IL2CPP::Array<mscorlib::System::String*>* saMonthNames;
		IL2CPP::Array<mscorlib::System::String*>* saAbbrevMonthNames;
		IL2CPP::Array<mscorlib::System::String*>* saMonthGenitiveNames;
		IL2CPP::Array<mscorlib::System::String*>* saAbbrevMonthGenitiveNames;
		IL2CPP::Array<mscorlib::System::String*>* saLeapYearMonthNames;
		int32_t iTwoDigitYearMax;
		int32_t iCurrentEra;
		bool bUseUserOverrides;
		struct StaticFields
		{
			int32_t MAX_CALENDARS;
			mscorlib::System::Globalization::CalendarData* Invariant;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
		void _ctor(mscorlib::System::String* localeName, int32_t calendarId, bool bUseUserOverrides);
		void InitializeEraNames(mscorlib::System::String* localeName, int32_t calendarId);
		void InitializeAbbreviatedEraNames(mscorlib::System::String* localeName, int32_t calendarId);
		static mscorlib::System::Globalization::CalendarData* GetCalendarData(int32_t calendarId);
		static mscorlib::System::String* CalendarIdToCultureName(int32_t calendarId);
		static int32_t nativeGetTwoDigitYearMax(int32_t calID);
		static bool nativeGetCalendarData(mscorlib::System::Globalization::CalendarData* data, mscorlib::System::String* localeName, int32_t calendarId);
		bool fill_calendar_data(mscorlib::System::String* localeName, int32_t datetimeIndex);
	};
}

