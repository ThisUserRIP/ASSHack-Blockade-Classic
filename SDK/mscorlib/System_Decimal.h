#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
#include "System_Globalization_NumberStyles.h"
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_TypeCode.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };

namespace mscorlib::System
{
	struct Decimal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t flags;
		int32_t hi;
		int32_t lo;
		int32_t mid;
		void _ctor(int32_t value);
		void _ctor(uint32_t value);
		void _ctor(int64_t value);
		void _ctor(uint64_t value);
		void _ctor(float value);
		void _ctor(double value);
		void _ctor(IL2CPP::Array<int32_t>* bits);
		void SetBits(IL2CPP::Array<int32_t>* bits);
		void _ctor(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale);
		void OnSerializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender);
		void _ctor(int32_t lo, int32_t mid, int32_t hi, int32_t flags);
		static mscorlib::System::Decimal Add(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
		static void FCallAddSub(mscorlib::System::Decimal& d1, mscorlib::System::Decimal& d2, uint8_t bSign);
		static int32_t FCallCompare(mscorlib::System::Decimal& d1, mscorlib::System::Decimal& d2);
		int32_t CompareTo(mscorlib::System::Object* value);
		int32_t CompareTo(mscorlib::System::Decimal value);
		bool Equals(mscorlib::System::Object* value);
		bool Equals(mscorlib::System::Decimal value);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::Decimal Parse(mscorlib::System::String* s, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::Decimal Parse(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::IFormatProvider* provider);
		static bool TryParse(mscorlib::System::String* s, mscorlib::System::Decimal& result);
		static bool TryParse(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::IFormatProvider* provider, mscorlib::System::Decimal& result);
		static IL2CPP::Array<int32_t>* GetBits(mscorlib::System::Decimal d);
		static mscorlib::System::Decimal ToDecimal(IL2CPP::Array<uint8_t>* buffer);
		static void FCallMultiply(mscorlib::System::Decimal& d1, mscorlib::System::Decimal& d2);
		static mscorlib::System::Decimal Negate(mscorlib::System::Decimal d);
		static mscorlib::System::Decimal Round(mscorlib::System::Decimal d, int32_t decimals);
		static void FCallRound(mscorlib::System::Decimal& d, int32_t decimals);
		static uint8_t ToByte(mscorlib::System::Decimal value);
		static int8_t ToSByte(mscorlib::System::Decimal value);
		static int16_t ToInt16(mscorlib::System::Decimal value);
		static double ToDouble(mscorlib::System::Decimal d);
		static int32_t FCallToInt32(mscorlib::System::Decimal d);
		static int32_t ToInt32(mscorlib::System::Decimal d);
		static int64_t ToInt64(mscorlib::System::Decimal d);
		static uint16_t ToUInt16(mscorlib::System::Decimal value);
		static uint32_t ToUInt32(mscorlib::System::Decimal d);
		static uint64_t ToUInt64(mscorlib::System::Decimal d);
		static float ToSingle(mscorlib::System::Decimal d);
		static mscorlib::System::Decimal Truncate(mscorlib::System::Decimal d);
		static void FCallTruncate(mscorlib::System::Decimal& d);
		static mscorlib::System::Decimal op_Implicit(uint8_t value);
		static mscorlib::System::Decimal op_Implicit(int8_t value);
		static mscorlib::System::Decimal op_Implicit(int16_t value);
		static mscorlib::System::Decimal op_Implicit(uint16_t value);
		static mscorlib::System::Decimal op_Implicit(int32_t value);
		static mscorlib::System::Decimal op_Implicit(uint32_t value);
		static mscorlib::System::Decimal op_Implicit(int64_t value);
		static mscorlib::System::Decimal op_Implicit(uint64_t value);
		static mscorlib::System::Decimal op_Increment(mscorlib::System::Decimal d);
		static mscorlib::System::Decimal op_Addition(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
		static mscorlib::System::Decimal op_Subtraction(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
		static mscorlib::System::Decimal op_Multiply(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
		static bool op_Equality(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
		static bool op_Inequality(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
		static bool op_LessThan(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
		static bool op_LessThanOrEqual(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
		static bool op_GreaterThan(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
		static bool op_GreaterThanOrEqual(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
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
		static void _cctor();
	};
	mscorlib::System::Decimal operator+(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
	mscorlib::System::Decimal operator-(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
	mscorlib::System::Decimal operator*(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
	bool operator==(mscorlib::System::Decimal& d1, mscorlib::System::Decimal& d2);
	bool operator!=(mscorlib::System::Decimal& d1, mscorlib::System::Decimal& d2);
	bool operator<(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
	bool operator<=(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
	bool operator>(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
	bool operator>=(mscorlib::System::Decimal d1, mscorlib::System::Decimal d2);
}

