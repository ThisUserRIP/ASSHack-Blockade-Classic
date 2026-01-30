#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct DateTimeParse_MatchNumberDelegate; };
#include "System_DateTimeParse_DS.h"
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Globalization { struct DateTimeFormatInfo; };
#include "System_Globalization_DateTimeStyles.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct DateTimeResult; };
namespace mscorlib::System { struct DateTimeResult; };
namespace mscorlib::System { struct __DTString; };
namespace mscorlib::System { struct __DTString; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System { struct DateTimeToken; };
namespace mscorlib::System { struct DateTimeToken; };
namespace mscorlib::System { struct DateTimeRawInfo; };
namespace mscorlib::System { struct DateTimeRawInfo; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "System_Int32.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_DateTimeParse_TM.h"
namespace mscorlib::System::Globalization { struct Calendar; };
namespace mscorlib::System { struct ParsingInfo; };
namespace mscorlib::System { struct ParsingInfo; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct Exception; };

namespace mscorlib::System
{
	struct DateTimeParse : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::DateTimeParse_MatchNumberDelegate* m_hebrewNumberParser;
			IL2CPP::Array<IL2CPP::Array<mscorlib::System::DateTimeParse_DS>*>* dateParsingStates;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::DateTime ParseExact(mscorlib::System::String* s, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles style);
		static bool TryParseExact(mscorlib::System::String* s, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles style, mscorlib::System::DateTimeResult& result);
		static mscorlib::System::DateTime ParseExactMultiple(mscorlib::System::String* s, IL2CPP::Array<mscorlib::System::String*>* formats, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles style);
		static bool TryParseExactMultiple(mscorlib::System::String* s, IL2CPP::Array<mscorlib::System::String*>* formats, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles style, mscorlib::System::DateTimeResult& result);
		static bool MatchWord(mscorlib::System::__DTString& str, mscorlib::System::String* target);
		static bool GetTimeZoneName(mscorlib::System::__DTString& str);
		static bool IsDigit(wchar_t ch);
		static bool ParseFraction(mscorlib::System::__DTString& str, double& result);
		static bool ParseTimeZone(mscorlib::System::__DTString& str, mscorlib::System::TimeSpan& result);
		static bool HandleTimeZone(mscorlib::System::__DTString& str, mscorlib::System::DateTimeResult& result);
		static bool Lex(mscorlib::System::DateTimeParse_DS dps, mscorlib::System::__DTString& str, mscorlib::System::DateTimeToken& dtok, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeFormatInfo& dtfi, mscorlib::System::Globalization::DateTimeStyles styles);
		static bool VerifyValidPunctuation(mscorlib::System::__DTString& str);
		static bool GetYearMonthDayOrder(mscorlib::System::String* datePattern, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& order);
		static bool GetYearMonthOrder(mscorlib::System::String* pattern, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& order);
		static bool GetMonthDayOrder(mscorlib::System::String* pattern, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& order);
		static bool TryAdjustYear(mscorlib::System::DateTimeResult& result, int32_t year, int32_t& adjustedYear);
		static bool SetDateYMD(mscorlib::System::DateTimeResult& result, int32_t year, int32_t month, int32_t day);
		static bool SetDateMDY(mscorlib::System::DateTimeResult& result, int32_t month, int32_t day, int32_t year);
		static bool SetDateDMY(mscorlib::System::DateTimeResult& result, int32_t day, int32_t month, int32_t year);
		static bool SetDateYDM(mscorlib::System::DateTimeResult& result, int32_t year, int32_t day, int32_t month);
		static void GetDefaultYear(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles);
		static bool GetDayOfNN(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool GetDayOfNNN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool GetDayOfMN(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool GetHebrewDayOfNM(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool GetDayOfNM(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool GetDayOfMNN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool GetDayOfYNN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool GetDayOfNNY(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool GetDayOfYMN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool GetDayOfYN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool GetDayOfYM(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static void AdjustTimeMark(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeRawInfo& raw);
		static bool AdjustHour(int32_t& hour, mscorlib::System::DateTimeParse_TM timeMark);
		static bool GetTimeOfN(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw);
		static bool GetTimeOfNN(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw);
		static bool GetTimeOfNNN(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw);
		static bool GetDateOfDSN(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw);
		static bool GetDateOfNDS(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw);
		static bool GetDateOfNNDS(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool ProcessDateTimeSuffix(mscorlib::System::DateTimeResult& result, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::DateTimeToken& dtok);
		static bool ProcessHebrewTerminalState(mscorlib::System::DateTimeParse_DS dps, mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static bool ProcessTerminaltState(mscorlib::System::DateTimeParse_DS dps, mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles, mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static mscorlib::System::DateTime Parse(mscorlib::System::String* s, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles styles);
		static mscorlib::System::DateTime Parse(mscorlib::System::String* s, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::TimeSpan& offset);
		static bool TryParse(mscorlib::System::String* s, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::DateTime& result);
		static bool TryParse(mscorlib::System::String* s, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::DateTimeResult& result);
		static bool DetermineTimeZoneAdjustments(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles styles, bool bTimeOnly);
		static bool DateTimeOffsetTimeZonePostProcessing(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles styles);
		static bool AdjustTimeZoneToUniversal(mscorlib::System::DateTimeResult& result);
		static bool AdjustTimeZoneToLocal(mscorlib::System::DateTimeResult& result, bool bTimeOnly);
		static bool ParseISO8601(mscorlib::System::DateTimeRawInfo& raw, mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::DateTimeResult& result);
		static bool MatchHebrewDigits(mscorlib::System::__DTString& str, int32_t digitLen, int32_t& number);
		static bool ParseDigits(mscorlib::System::__DTString& str, int32_t digitLen, int32_t& result);
		static bool ParseDigits(mscorlib::System::__DTString& str, int32_t minDigitLen, int32_t maxDigitLen, int32_t& result);
		static bool ParseFractionExact(mscorlib::System::__DTString& str, int32_t maxDigitLen, double& result);
		static bool ParseSign(mscorlib::System::__DTString& str, bool& result);
		static bool ParseTimeZoneOffset(mscorlib::System::__DTString& str, int32_t len, mscorlib::System::TimeSpan& result);
		static bool MatchAbbreviatedMonthName(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& result);
		static bool MatchMonthName(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& result);
		static bool MatchAbbreviatedDayName(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& result);
		static bool MatchDayName(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& result);
		static bool MatchEraName(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, int32_t& result);
		static bool MatchTimeMark(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeParse_TM& result);
		static bool MatchAbbreviatedTimeMark(mscorlib::System::__DTString& str, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeParse_TM& result);
		static bool CheckNewValue(int32_t& currentValue, int32_t newValue, wchar_t patternChar, mscorlib::System::DateTimeResult& result);
		static mscorlib::System::DateTime GetDateTimeNow(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::DateTimeStyles& styles);
		static bool CheckDefaultDateTime(mscorlib::System::DateTimeResult& result, mscorlib::System::Globalization::Calendar& cal, mscorlib::System::Globalization::DateTimeStyles styles);
		static mscorlib::System::String* ExpandPredefinedFormat(mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo& dtfi, mscorlib::System::ParsingInfo& parseInfo, mscorlib::System::DateTimeResult& result);
		static bool ParseByFormat(mscorlib::System::__DTString& str, mscorlib::System::__DTString& format, mscorlib::System::ParsingInfo& parseInfo, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeResult& result);
		static bool TryParseQuoteString(mscorlib::System::String* format, int32_t pos, mscorlib::System::Text::StringBuilder* result, int32_t& returnValue);
		static bool DoStrictParse(mscorlib::System::String* s, mscorlib::System::String* formatParam, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::DateTimeResult& result);
		static mscorlib::System::Exception* GetDateTimeParseException(mscorlib::System::DateTimeResult& result);
		static void _cctor();
	};
}

