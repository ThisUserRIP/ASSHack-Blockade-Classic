#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Globalization_UnicodeCategory.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_TypeCode.h"
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Char
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t m_value;
		static bool IsLatin1(wchar_t ch);
		static bool IsAscii(wchar_t ch);
		static mscorlib::System::Globalization::UnicodeCategory GetLatin1UnicodeCategory(wchar_t ch);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(wchar_t obj);
		int32_t CompareTo(mscorlib::System::Object* value);
		int32_t CompareTo(wchar_t value);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::String* ToString(wchar_t c);
		static wchar_t Parse(mscorlib::System::String* s);
		static bool TryParse(mscorlib::System::String* s, wchar_t& result);
		static bool IsDigit(wchar_t c);
		static bool CheckLetter(mscorlib::System::Globalization::UnicodeCategory uc);
		static bool IsLetter(wchar_t c);
		static bool IsWhiteSpaceLatin1(wchar_t c);
		static bool IsWhiteSpace(wchar_t c);
		static bool IsUpper(wchar_t c);
		static bool IsLower(wchar_t c);
		static bool CheckPunctuation(mscorlib::System::Globalization::UnicodeCategory uc);
		static bool IsPunctuation(wchar_t c);
		static bool CheckLetterOrDigit(mscorlib::System::Globalization::UnicodeCategory uc);
		static bool IsLetterOrDigit(wchar_t c);
		static wchar_t ToUpper(wchar_t c, mscorlib::System::Globalization::CultureInfo* culture);
		static wchar_t ToUpper(wchar_t c);
		static wchar_t ToUpperInvariant(wchar_t c);
		static wchar_t ToLower(wchar_t c, mscorlib::System::Globalization::CultureInfo* culture);
		static wchar_t ToLower(wchar_t c);
		static wchar_t ToLowerInvariant(wchar_t c);
		mscorlib::System::TypeCode GetTypeCode();
		bool System_IConvertible_ToBoolean(mscorlib::System::IFormatProvider* provider);
		wchar_t System_IConvertible_ToChar(mscorlib::System::IFormatProvider* provider);
		int8_t System_IConvertible_ToSByte(mscorlib::System::IFormatProvider* provider);
		uint8_t System_IConvertible_ToByte(mscorlib::System::IFormatProvider* provider);
		int16_t System_IConvertible_ToInt16(mscorlib::System::IFormatProvider* provider);
		uint16_t System_IConvertible_ToUInt16(mscorlib::System::IFormatProvider* provider);
		int32_t System_IConvertible_ToInt32(mscorlib::System::IFormatProvider* provider);
		uint32_t System_IConvertible_ToUInt32(mscorlib::System::IFormatProvider* provider);
		int64_t System_IConvertible_ToInt64(mscorlib::System::IFormatProvider* provider);
		uint64_t System_IConvertible_ToUInt64(mscorlib::System::IFormatProvider* provider);
		float System_IConvertible_ToSingle(mscorlib::System::IFormatProvider* provider);
		double System_IConvertible_ToDouble(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Decimal System_IConvertible_ToDecimal(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::DateTime System_IConvertible_ToDateTime(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Object* System_IConvertible_ToType(mscorlib::System::Type* type, mscorlib::System::IFormatProvider* provider);
		static bool IsControl(wchar_t c);
		static bool IsLetterOrDigit(mscorlib::System::String* s, int32_t index);
		static bool CheckNumber(mscorlib::System::Globalization::UnicodeCategory uc);
		static bool IsNumber(wchar_t c);
		static bool IsNumber(mscorlib::System::String* s, int32_t index);
		static bool CheckSeparator(mscorlib::System::Globalization::UnicodeCategory uc);
		static bool IsSeparatorLatin1(wchar_t c);
		static bool IsSeparator(wchar_t c);
		static bool IsSurrogate(wchar_t c);
		static bool IsSurrogate(mscorlib::System::String* s, int32_t index);
		static bool CheckSymbol(mscorlib::System::Globalization::UnicodeCategory uc);
		static bool IsSymbol(wchar_t c);
		static bool IsWhiteSpace(mscorlib::System::String* s, int32_t index);
		static mscorlib::System::Globalization::UnicodeCategory GetUnicodeCategory(wchar_t c);
		static mscorlib::System::Globalization::UnicodeCategory GetUnicodeCategory(mscorlib::System::String* s, int32_t index);
		static double GetNumericValue(wchar_t c);
		static bool IsHighSurrogate(wchar_t c);
		static bool IsHighSurrogate(mscorlib::System::String* s, int32_t index);
		static bool IsLowSurrogate(wchar_t c);
		static bool IsSurrogatePair(wchar_t highSurrogate, wchar_t lowSurrogate);
		static mscorlib::System::String* ConvertFromUtf32(int32_t utf32);
		static int32_t ConvertToUtf32(wchar_t highSurrogate, wchar_t lowSurrogate);
		static void _cctor();
	};
}

