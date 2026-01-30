#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_DateTimeKind.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Globalization { struct Calendar; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System { struct Object; };
#include "System_DayOfWeek.h"
namespace mscorlib::System { struct IFormatProvider; };
#include "System_Globalization_DateTimeStyles.h"
#include "System_TypeCode.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Decimal.h"
namespace mscorlib::System { struct Decimal; };

namespace mscorlib::System
{
	struct DateTime
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t dateData;
		void _ctor(int64_t ticks);
		void _ctor(uint64_t dateData);
		void _ctor(int64_t ticks, mscorlib::System::DateTimeKind kind);
		void _ctor(int64_t ticks, mscorlib::System::DateTimeKind kind, bool isAmbiguousDst);
		void _ctor(int32_t year, int32_t month, int32_t day);
		void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
		void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, mscorlib::System::DateTimeKind kind);
		void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond);
		void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, mscorlib::System::Globalization::Calendar* calendar);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		int64_t get_InternalTicks();
		uint64_t get_InternalKind();
		mscorlib::System::DateTime Add(mscorlib::System::TimeSpan value);
		mscorlib::System::DateTime Add(double value, int32_t scale);
		mscorlib::System::DateTime AddDays(double value);
		mscorlib::System::DateTime AddMilliseconds(double value);
		mscorlib::System::DateTime AddMonths(int32_t months);
		mscorlib::System::DateTime AddSeconds(double value);
		mscorlib::System::DateTime AddTicks(int64_t value);
		mscorlib::System::DateTime AddYears(int32_t value);
		int32_t CompareTo(mscorlib::System::Object* value);
		int32_t CompareTo(mscorlib::System::DateTime value);
		static int64_t DateToTicks(int32_t year, int32_t month, int32_t day);
		static int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second);
		static int32_t DaysInMonth(int32_t year, int32_t month);
		bool Equals(mscorlib::System::Object* value);
		bool Equals(mscorlib::System::DateTime value);
		static mscorlib::System::DateTime FromBinary(int64_t dateData);
		static mscorlib::System::DateTime FromBinaryRaw(int64_t dateData);
		static mscorlib::System::DateTime FromFileTime(int64_t fileTime);
		static mscorlib::System::DateTime FromFileTimeUtc(int64_t fileTime);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static mscorlib::System::DateTime SpecifyKind(mscorlib::System::DateTime value, mscorlib::System::DateTimeKind kind);
		int64_t ToBinary();
		int64_t ToBinaryRaw();
		mscorlib::System::DateTime get_Date();
		int32_t GetDatePart(int32_t part);
		int32_t get_Day();
		mscorlib::System::DayOfWeek get_DayOfWeek();
		int32_t GetHashCode();
		int32_t get_Hour();
		bool IsAmbiguousDaylightSavingTime();
		mscorlib::System::DateTimeKind get_Kind();
		int32_t get_Millisecond();
		int32_t get_Minute();
		int32_t get_Month();
		static mscorlib::System::DateTime get_Now();
		static mscorlib::System::DateTime get_UtcNow();
		static int64_t GetSystemTimeAsFileTime();
		int32_t get_Second();
		int64_t get_Ticks();
		mscorlib::System::TimeSpan get_TimeOfDay();
		static mscorlib::System::DateTime get_Today();
		int32_t get_Year();
		static bool IsLeapYear(int32_t year);
		static mscorlib::System::DateTime Parse(mscorlib::System::String* s);
		static mscorlib::System::DateTime Parse(mscorlib::System::String* s, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::DateTime ParseExact(mscorlib::System::String* s, mscorlib::System::String* format, mscorlib::System::IFormatProvider* provider);
		static mscorlib::System::DateTime ParseExact(mscorlib::System::String* s, mscorlib::System::String* format, mscorlib::System::IFormatProvider* provider, mscorlib::System::Globalization::DateTimeStyles style);
		static mscorlib::System::DateTime ParseExact(mscorlib::System::String* s, IL2CPP::Array<mscorlib::System::String*>* formats, mscorlib::System::IFormatProvider* provider, mscorlib::System::Globalization::DateTimeStyles style);
		mscorlib::System::TimeSpan Subtract(mscorlib::System::DateTime value);
		int64_t ToFileTimeUtc();
		mscorlib::System::DateTime ToLocalTime();
		mscorlib::System::DateTime ToLocalTime(bool throwOnOverflow);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format);
		mscorlib::System::String* ToString(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* provider);
		mscorlib::System::DateTime ToUniversalTime();
		static bool TryParse(mscorlib::System::String* s, mscorlib::System::DateTime& result);
		static bool TryParse(mscorlib::System::String* s, mscorlib::System::IFormatProvider* provider, mscorlib::System::Globalization::DateTimeStyles styles, mscorlib::System::DateTime& result);
		static mscorlib::System::DateTime op_Addition(mscorlib::System::DateTime d, mscorlib::System::TimeSpan t);
		static mscorlib::System::DateTime op_Subtraction(mscorlib::System::DateTime d, mscorlib::System::TimeSpan t);
		static mscorlib::System::TimeSpan op_Subtraction(mscorlib::System::DateTime d1, mscorlib::System::DateTime d2);
		static bool op_Equality(mscorlib::System::DateTime d1, mscorlib::System::DateTime d2);
		static bool op_Inequality(mscorlib::System::DateTime d1, mscorlib::System::DateTime d2);
		static bool op_LessThan(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2);
		static bool op_LessThanOrEqual(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2);
		static bool op_GreaterThan(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2);
		static bool op_GreaterThanOrEqual(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2);
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
		static bool TryCreate(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, mscorlib::System::DateTime& result);
		static void _cctor();
	};
	mscorlib::System::DateTime operator+(mscorlib::System::DateTime d, mscorlib::System::TimeSpan t);
	mscorlib::System::DateTime operator-(mscorlib::System::DateTime d, mscorlib::System::TimeSpan t);
	mscorlib::System::TimeSpan operator-(mscorlib::System::DateTime d1, mscorlib::System::DateTime d2);
	bool operator==(mscorlib::System::DateTime& d1, mscorlib::System::DateTime& d2);
	bool operator!=(mscorlib::System::DateTime& d1, mscorlib::System::DateTime& d2);
	bool operator<(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2);
	bool operator<=(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2);
	bool operator>(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2);
	bool operator>=(mscorlib::System::DateTime t1, mscorlib::System::DateTime t2);
}

