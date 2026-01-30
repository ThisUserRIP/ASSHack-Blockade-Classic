#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Globalization { struct CultureData; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Globalization { struct CompareInfo; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Globalization { struct Calendar; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Globalization_DateTimeFormatFlags.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Globalization_DateTimeStyles.h"
namespace mscorlib::System::Globalization { struct TokenHashValue; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct IFormatProvider; };
namespace mscorlib::System { struct Object; };
#include "System_Globalization_MonthNameStyles.h"
#include "System_DayOfWeek.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct __DTString; };
namespace mscorlib::System { struct __DTString; };
#include "System_TokenType.h"

namespace mscorlib::System::Globalization
{
	struct DateTimeFormatInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::CultureData* m_cultureData;
		mscorlib::System::String* m_name;
		mscorlib::System::String* m_langName;
		mscorlib::System::Globalization::CompareInfo* m_compareInfo;
		mscorlib::System::Globalization::CultureInfo* m_cultureInfo;
		mscorlib::System::String* amDesignator;
		mscorlib::System::String* pmDesignator;
		mscorlib::System::String* dateSeparator;
		mscorlib::System::String* generalShortTimePattern;
		mscorlib::System::String* generalLongTimePattern;
		mscorlib::System::String* timeSeparator;
		mscorlib::System::String* monthDayPattern;
		mscorlib::System::String* dateTimeOffsetPattern;
		mscorlib::System::Globalization::Calendar* calendar;
		int32_t firstDayOfWeek;
		int32_t calendarWeekRule;
		mscorlib::System::String* fullDateTimePattern;
		IL2CPP::Array<mscorlib::System::String*>* abbreviatedDayNames;
		IL2CPP::Array<mscorlib::System::String*>* m_superShortDayNames;
		IL2CPP::Array<mscorlib::System::String*>* dayNames;
		IL2CPP::Array<mscorlib::System::String*>* abbreviatedMonthNames;
		IL2CPP::Array<mscorlib::System::String*>* monthNames;
		IL2CPP::Array<mscorlib::System::String*>* genitiveMonthNames;
		IL2CPP::Array<mscorlib::System::String*>* m_genitiveAbbreviatedMonthNames;
		IL2CPP::Array<mscorlib::System::String*>* leapYearMonthNames;
		mscorlib::System::String* longDatePattern;
		mscorlib::System::String* shortDatePattern;
		mscorlib::System::String* yearMonthPattern;
		mscorlib::System::String* longTimePattern;
		mscorlib::System::String* shortTimePattern;
		IL2CPP::Array<mscorlib::System::String*>* allYearMonthPatterns;
		IL2CPP::Array<mscorlib::System::String*>* allShortDatePatterns;
		IL2CPP::Array<mscorlib::System::String*>* allLongDatePatterns;
		IL2CPP::Array<mscorlib::System::String*>* allShortTimePatterns;
		IL2CPP::Array<mscorlib::System::String*>* allLongTimePatterns;
		IL2CPP::Array<mscorlib::System::String*>* m_eraNames;
		IL2CPP::Array<mscorlib::System::String*>* m_abbrevEraNames;
		IL2CPP::Array<mscorlib::System::String*>* m_abbrevEnglishEraNames;
		IL2CPP::Array<int32_t>* optionalCalendars;
		bool m_isReadOnly;
		mscorlib::System::Globalization::DateTimeFormatFlags formatFlags;
		int32_t CultureID;
		bool m_useUserOverride;
		bool bUseCalendarInfo;
		int32_t nDataItem;
		bool m_isDefaultCalendar;
		IL2CPP::Array<mscorlib::System::String*>* m_dateWords;
		mscorlib::System::String* m_fullTimeSpanPositivePattern;
		mscorlib::System::String* m_fullTimeSpanNegativePattern;
		IL2CPP::Array<mscorlib::System::Globalization::TokenHashValue*>* m_dtfiTokenHash;
		struct StaticFields
		{
			mscorlib::System::Globalization::DateTimeFormatInfo* invariantInfo;
			mscorlib::System::String* rfc1123Pattern;
			mscorlib::System::String* sortableDateTimePattern;
			mscorlib::System::String* universalSortableDateTimePattern;
			int32_t DEFAULT_ALL_DATETIMES_SIZE;
			bool preferExistingTokens;
			mscorlib::System::Collections::Hashtable* s_calendarNativeNames;
			mscorlib::System::Globalization::DateTimeStyles InvalidDateTimeStyles;
			int32_t TOKEN_HASH_SIZE;
			int32_t SECOND_PRIME;
			mscorlib::System::String* dateSeparatorOrTimeZoneOffset;
			mscorlib::System::String* invariantDateSeparator;
			mscorlib::System::String* invariantTimeSeparator;
			mscorlib::System::String* IgnorablePeriod;
			mscorlib::System::String* IgnorableComma;
			mscorlib::System::String* CJKYearSuff;
			mscorlib::System::String* CJKMonthSuff;
			mscorlib::System::String* CJKDaySuff;
			mscorlib::System::String* KoreanYearSuff;
			mscorlib::System::String* KoreanMonthSuff;
			mscorlib::System::String* KoreanDaySuff;
			mscorlib::System::String* KoreanHourSuff;
			mscorlib::System::String* KoreanMinuteSuff;
			mscorlib::System::String* KoreanSecondSuff;
			mscorlib::System::String* CJKHourSuff;
			mscorlib::System::String* ChineseHourSuff;
			mscorlib::System::String* CJKMinuteSuff;
			mscorlib::System::String* CJKSecondSuff;
			mscorlib::System::String* LocalTimeMark;
			mscorlib::System::String* KoreanLangName;
			mscorlib::System::String* JapaneseLangName;
			mscorlib::System::String* EnglishLangName;
			mscorlib::System::Globalization::DateTimeFormatInfo* s_jajpDTFI;
			mscorlib::System::Globalization::DateTimeFormatInfo* s_zhtwDTFI;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool InitPreferExistingTokens();
		mscorlib::System::String* get_CultureName();
		mscorlib::System::Globalization::CultureInfo* get_Culture();
		mscorlib::System::String* get_LanguageName();
		IL2CPP::Array<mscorlib::System::String*>* internalGetAbbreviatedDayOfWeekNames();
		IL2CPP::Array<mscorlib::System::String*>* internalGetDayOfWeekNames();
		IL2CPP::Array<mscorlib::System::String*>* internalGetAbbreviatedMonthNames();
		IL2CPP::Array<mscorlib::System::String*>* internalGetMonthNames();
		void _ctor();
		void _ctor(mscorlib::System::Globalization::CultureData* cultureData, mscorlib::System::Globalization::Calendar* cal);
		void InitializeOverridableProperties(mscorlib::System::Globalization::CultureData* cultureData, int32_t calendarID);
		void OnDeserialized(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnSerializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		static mscorlib::System::Globalization::DateTimeFormatInfo* get_InvariantInfo();
		static mscorlib::System::Globalization::DateTimeFormatInfo* get_CurrentInfo();
		static mscorlib::System::Globalization::DateTimeFormatInfo* GetInstance(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Object* GetFormat(mscorlib::System::Type* formatType);
		mscorlib::System::Object* Clone();
		mscorlib::System::String* get_AMDesignator();
		mscorlib::System::Globalization::Calendar* get_Calendar();
		void set_Calendar(mscorlib::System::Globalization::Calendar* value);
		IL2CPP::Array<int32_t>* get_OptionalCalendars();
		IL2CPP::Array<mscorlib::System::String*>* get_EraNames();
		mscorlib::System::String* GetEraName(int32_t era);
		IL2CPP::Array<mscorlib::System::String*>* get_AbbreviatedEraNames();
		mscorlib::System::String* GetAbbreviatedEraName(int32_t era);
		IL2CPP::Array<mscorlib::System::String*>* get_AbbreviatedEnglishEraNames();
		mscorlib::System::String* get_DateSeparator();
		mscorlib::System::String* get_FullDateTimePattern();
		mscorlib::System::String* get_LongDatePattern();
		void set_LongDatePattern(mscorlib::System::String* value);
		mscorlib::System::String* get_LongTimePattern();
		void set_LongTimePattern(mscorlib::System::String* value);
		mscorlib::System::String* get_MonthDayPattern();
		mscorlib::System::String* get_PMDesignator();
		mscorlib::System::String* get_RFC1123Pattern();
		mscorlib::System::String* get_ShortDatePattern();
		void set_ShortDatePattern(mscorlib::System::String* value);
		mscorlib::System::String* get_ShortTimePattern();
		void set_ShortTimePattern(mscorlib::System::String* value);
		mscorlib::System::String* get_SortableDateTimePattern();
		mscorlib::System::String* get_GeneralShortTimePattern();
		mscorlib::System::String* get_GeneralLongTimePattern();
		mscorlib::System::String* get_DateTimeOffsetPattern();
		mscorlib::System::String* get_TimeSeparator();
		mscorlib::System::String* get_UniversalSortableDateTimePattern();
		mscorlib::System::String* get_YearMonthPattern();
		void set_YearMonthPattern(mscorlib::System::String* value);
		IL2CPP::Array<mscorlib::System::String*>* get_AbbreviatedDayNames();
		IL2CPP::Array<mscorlib::System::String*>* get_DayNames();
		IL2CPP::Array<mscorlib::System::String*>* get_AbbreviatedMonthNames();
		IL2CPP::Array<mscorlib::System::String*>* get_MonthNames();
		bool get_HasSpacesInMonthNames();
		bool get_HasSpacesInDayNames();
		mscorlib::System::String* internalGetMonthName(int32_t month, mscorlib::System::Globalization::MonthNameStyles style, bool abbreviated);
		IL2CPP::Array<mscorlib::System::String*>* internalGetGenitiveMonthNames(bool abbreviated);
		IL2CPP::Array<mscorlib::System::String*>* internalGetLeapYearMonthNames();
		mscorlib::System::String* GetAbbreviatedDayName(mscorlib::System::DayOfWeek dayofweek);
		static IL2CPP::Array<mscorlib::System::String*>* GetCombinedPatterns(IL2CPP::Array<mscorlib::System::String*>* patterns1, IL2CPP::Array<mscorlib::System::String*>* patterns2, mscorlib::System::String* connectString);
		IL2CPP::Array<mscorlib::System::String*>* GetAllDateTimePatterns(wchar_t format);
		mscorlib::System::String* GetDayName(mscorlib::System::DayOfWeek dayofweek);
		mscorlib::System::String* GetAbbreviatedMonthName(int32_t month);
		mscorlib::System::String* GetMonthName(int32_t month);
		static IL2CPP::Array<mscorlib::System::String*>* GetMergedPatterns(IL2CPP::Array<mscorlib::System::String*>* patterns, mscorlib::System::String* defaultPattern);
		IL2CPP::Array<mscorlib::System::String*>* get_AllYearMonthPatterns();
		IL2CPP::Array<mscorlib::System::String*>* get_AllShortDatePatterns();
		IL2CPP::Array<mscorlib::System::String*>* get_AllShortTimePatterns();
		IL2CPP::Array<mscorlib::System::String*>* get_AllLongDatePatterns();
		IL2CPP::Array<mscorlib::System::String*>* get_AllLongTimePatterns();
		IL2CPP::Array<mscorlib::System::String*>* get_UnclonedYearMonthPatterns();
		IL2CPP::Array<mscorlib::System::String*>* get_UnclonedShortDatePatterns();
		IL2CPP::Array<mscorlib::System::String*>* get_UnclonedLongDatePatterns();
		IL2CPP::Array<mscorlib::System::String*>* get_UnclonedShortTimePatterns();
		IL2CPP::Array<mscorlib::System::String*>* get_UnclonedLongTimePatterns();
		static mscorlib::System::Globalization::DateTimeFormatInfo* ReadOnly(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		bool get_IsReadOnly();
		IL2CPP::Array<mscorlib::System::String*>* get_MonthGenitiveNames();
		mscorlib::System::String* get_FullTimeSpanPositivePattern();
		mscorlib::System::String* get_FullTimeSpanNegativePattern();
		mscorlib::System::Globalization::CompareInfo* get_CompareInfo();
		static void ValidateStyles(mscorlib::System::Globalization::DateTimeStyles style, mscorlib::System::String* parameterName);
		mscorlib::System::Globalization::DateTimeFormatFlags get_FormatFlags();
		bool get_HasForceTwoDigitYears();
		bool get_HasYearMonthAdjustment();
		bool YearMonthAdjustment(int32_t& year, int32_t& month, bool parsedMonthName);
		static mscorlib::System::Globalization::DateTimeFormatInfo* GetJapaneseCalendarDTFI();
		static mscorlib::System::Globalization::DateTimeFormatInfo* GetTaiwanCalendarDTFI();
		void ClearTokenHashTable();
		IL2CPP::Array<mscorlib::System::Globalization::TokenHashValue*>* CreateTokenHashTable();
		void AddMonthNames(IL2CPP::Array<mscorlib::System::Globalization::TokenHashValue*>* temp, mscorlib::System::String* monthPostfix);
		static bool TryParseHebrewNumber(mscorlib::System::__DTString& str, bool& badFormat, int32_t& number);
		static bool IsHebrewChar(wchar_t ch);
		bool Tokenize(mscorlib::System::TokenType TokenMask, mscorlib::System::TokenType& tokenType, int32_t& tokenValue, mscorlib::System::__DTString& str);
		void InsertAtCurrentHashNode(IL2CPP::Array<mscorlib::System::Globalization::TokenHashValue*>* hashTable, mscorlib::System::String* str, wchar_t ch, mscorlib::System::TokenType tokenType, int32_t tokenValue, int32_t pos, int32_t hashcode, int32_t hashProbe);
		void InsertHash(IL2CPP::Array<mscorlib::System::Globalization::TokenHashValue*>* hashTable, mscorlib::System::String* str, mscorlib::System::TokenType tokenType, int32_t tokenValue);
		static void _cctor();
	};
}

