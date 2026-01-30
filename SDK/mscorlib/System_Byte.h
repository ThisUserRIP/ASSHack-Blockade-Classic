#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
#include "System_Globalization_NumberStyles.h"
namespace mscorlib::System::Globalization { struct NumberFormatInfo; };
#include "System_TypeCode.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
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

namespace mscorlib::System
{
	struct Byte
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t m_value;
		int32_t CompareTo(mscorlib::System::Object* value);
		int32_t CompareTo(uint8_t value);
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(uint8_t obj);
		int32_t GetHashCode();
		static uint8_t Parse(mscorlib::System::String* s);
		static uint8_t Parse(mscorlib::System::String* s, mscorlib::System::IFormatProvider* provider);
		static uint8_t Parse(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::IFormatProvider* provider);
		static uint8_t Parse(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info);
		static bool TryParse(mscorlib::System::String* s, uint8_t& result);
		static bool TryParse(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::IFormatProvider* provider, uint8_t& result);
		static bool TryParse(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info, uint8_t& result);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format);
		mscorlib::System::String* ToString(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* provider);
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
	};
}

