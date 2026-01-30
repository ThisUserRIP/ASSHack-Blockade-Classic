#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Globalization { struct DateTimeFormatInfo; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };

namespace mscorlib::System
{
	struct DateTimeFormat : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::TimeSpan NullOffset;
			IL2CPP::Array<wchar_t>* allStandardFormats;
			IL2CPP::Array<mscorlib::System::String*>* fixedNumberFormats;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void FormatDigits(mscorlib::System::Text::StringBuilder* outputBuffer, int32_t value, int32_t len);
		static void FormatDigits(mscorlib::System::Text::StringBuilder* outputBuffer, int32_t value, int32_t len, bool overrideLengthLimit);
		static void HebrewFormatDigits(mscorlib::System::Text::StringBuilder* outputBuffer, int32_t digits);
		static int32_t ParseRepeatPattern(mscorlib::System::String* format, int32_t pos, wchar_t patternChar);
		static mscorlib::System::String* FormatDayOfWeek(int32_t dayOfWeek, int32_t repeat, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static mscorlib::System::String* FormatMonth(int32_t month, int32_t repeatCount, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static mscorlib::System::String* FormatHebrewMonthName(mscorlib::System::DateTime time, int32_t month, int32_t repeatCount, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static int32_t ParseQuoteString(mscorlib::System::String* format, int32_t pos, mscorlib::System::Text::StringBuilder* result);
		static int32_t ParseNextChar(mscorlib::System::String* format, int32_t pos);
		static bool IsUseGenitiveForm(mscorlib::System::String* format, int32_t index, int32_t tokenLen, wchar_t patternToMatch);
		static mscorlib::System::String* FormatCustomized(mscorlib::System::DateTime dateTime, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::TimeSpan offset);
		static void FormatCustomizedTimeZone(mscorlib::System::DateTime dateTime, mscorlib::System::TimeSpan offset, mscorlib::System::String* format, int32_t tokenLen, bool timeOnly, mscorlib::System::Text::StringBuilder* result);
		static void FormatCustomizedRoundripTimeZone(mscorlib::System::DateTime dateTime, mscorlib::System::TimeSpan offset, mscorlib::System::Text::StringBuilder* result);
		static mscorlib::System::String* GetRealFormat(mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static mscorlib::System::String* ExpandPredefinedFormat(mscorlib::System::String* format, mscorlib::System::DateTime& dateTime, mscorlib::System::Globalization::DateTimeFormatInfo& dtfi, mscorlib::System::TimeSpan& offset);
		static mscorlib::System::String* Format(mscorlib::System::DateTime dateTime, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi);
		static mscorlib::System::String* Format(mscorlib::System::DateTime dateTime, mscorlib::System::String* format, mscorlib::System::Globalization::DateTimeFormatInfo* dtfi, mscorlib::System::TimeSpan offset);
		static void InvalidFormatForLocal(mscorlib::System::String* format, mscorlib::System::DateTime dateTime);
		static void InvalidFormatForUtc(mscorlib::System::String* format, mscorlib::System::DateTime dateTime);
		static void _cctor();
	};
}

