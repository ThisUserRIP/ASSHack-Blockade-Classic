#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Decimal; };
namespace mscorlib::System { struct Decimal; };
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct Double; };
namespace mscorlib::System { struct String; };
#include "System_Decimal.h"
namespace mscorlib::System::Globalization { struct NumberFormatInfo; };
#include "System_Double.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct Number_NumberBuffer; };
namespace mscorlib::System { struct Number_NumberBuffer; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Globalization_NumberStyles.h"
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct Number : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool NumberBufferToDecimal(uint8_t* number, mscorlib::System::Decimal& value);
		static bool NumberBufferToDouble(uint8_t* number, double& value);
		static mscorlib::System::String* FormatDecimal(mscorlib::System::Decimal value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info);
		static mscorlib::System::String* FormatDouble(double value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info);
		static mscorlib::System::String* FormatInt32(int32_t value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info);
		static mscorlib::System::String* FormatUInt32(uint32_t value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info);
		static mscorlib::System::String* FormatInt64(int64_t value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info);
		static mscorlib::System::String* FormatUInt64(uint64_t value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info);
		static mscorlib::System::String* FormatSingle(float value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info);
		static bool HexNumberToInt32(mscorlib::System::Number_NumberBuffer& number, int32_t& value);
		static bool HexNumberToInt64(mscorlib::System::Number_NumberBuffer& number, int64_t& value);
		static bool HexNumberToUInt32(mscorlib::System::Number_NumberBuffer& number, uint32_t& value);
		static bool HexNumberToUInt64(mscorlib::System::Number_NumberBuffer& number, uint64_t& value);
		static bool IsWhite(wchar_t ch);
		static bool NumberToInt32(mscorlib::System::Number_NumberBuffer& number, int32_t& value);
		static bool NumberToInt64(mscorlib::System::Number_NumberBuffer& number, int64_t& value);
		static bool NumberToUInt32(mscorlib::System::Number_NumberBuffer& number, uint32_t& value);
		static bool NumberToUInt64(mscorlib::System::Number_NumberBuffer& number, uint64_t& value);
		static wchar_t* MatchChars(wchar_t* p, mscorlib::System::String* str);
		static wchar_t* MatchChars(wchar_t* p, wchar_t* str);
		static mscorlib::System::Decimal ParseDecimal(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt);
		static double ParseDouble(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt);
		static int32_t ParseInt32(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info);
		static int64_t ParseInt64(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt);
		static bool ParseNumber(wchar_t& str, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Number_NumberBuffer& number, mscorlib::System::Text::StringBuilder* sb, mscorlib::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal);
		static float ParseSingle(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt);
		static uint32_t ParseUInt32(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt);
		static uint64_t ParseUInt64(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt);
		static void StringToNumber(mscorlib::System::String* str, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Number_NumberBuffer& number, mscorlib::System::Globalization::NumberFormatInfo* info, bool parseDecimal);
		static bool TrailingZeros(mscorlib::System::String* s, int32_t index);
		static bool TryParseDecimal(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt, mscorlib::System::Decimal& result);
		static bool TryParseDouble(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt, double& result);
		static bool TryParseInt32(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info, int32_t& result);
		static bool TryParseInt64(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info, int64_t& result);
		static bool TryParseSingle(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt, float& result);
		static bool TryParseUInt32(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info, uint32_t& result);
		static bool TryParseUInt64(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info, uint64_t& result);
		static bool TryStringToNumber(mscorlib::System::String* str, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Number_NumberBuffer& number, mscorlib::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal);
		static bool TryStringToNumber(mscorlib::System::String* str, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Number_NumberBuffer& number, mscorlib::System::Text::StringBuilder* sb, mscorlib::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal);
	};
}

