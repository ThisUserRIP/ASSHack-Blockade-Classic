#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct Calendar; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
#include "System_Globalization_DateTimeStyles.h"

namespace mscorlib::System
{
	struct DateTimeOffset
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::DateTime m_dateTime;
		int16_t m_offsetMinutes;
		void _ctor(int64_t ticks, mscorlib::System::TimeSpan offset);
		void _ctor(mscorlib::System::DateTime dateTime);
		void _ctor(mscorlib::System::DateTime dateTime, mscorlib::System::TimeSpan offset);
		void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, mscorlib::System::TimeSpan offset);
		void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, mscorlib::System::TimeSpan offset);
		void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, mscorlib::System::Globalization::Calendar* calendar, mscorlib::System::TimeSpan offset);
		mscorlib::System::DateTime get_DateTime();
		mscorlib::System::DateTime get_UtcDateTime();
		mscorlib::System::DateTime get_LocalDateTime();
		mscorlib::System::DateTime get_ClockDateTime();
		int32_t get_Day();
		int32_t get_Hour();
		int32_t get_Millisecond();
		int32_t get_Minute();
		int32_t get_Month();
		mscorlib::System::TimeSpan get_Offset();
		int32_t get_Second();
		int64_t get_Ticks();
		mscorlib::System::TimeSpan get_TimeOfDay();
		int32_t get_Year();
		int32_t System_IComparable_CompareTo(mscorlib::System::Object* obj);
		int32_t CompareTo(mscorlib::System::DateTimeOffset other);
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(mscorlib::System::DateTimeOffset other);
		static mscorlib::System::DateTimeOffset FromUnixTimeSeconds(int64_t seconds);
		void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		int32_t GetHashCode();
		static mscorlib::System::DateTimeOffset Parse(mscorlib::System::String* input, mscorlib::System::IFormatProvider* formatProvider);
		static mscorlib::System::DateTimeOffset Parse(mscorlib::System::String* input, mscorlib::System::IFormatProvider* formatProvider, mscorlib::System::Globalization::DateTimeStyles styles);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::IFormatProvider* formatProvider);
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		static int16_t ValidateOffset(mscorlib::System::TimeSpan offset);
		static mscorlib::System::DateTime ValidateDate(mscorlib::System::DateTime dateTime, mscorlib::System::TimeSpan offset);
		static mscorlib::System::Globalization::DateTimeStyles ValidateStyles(mscorlib::System::Globalization::DateTimeStyles style, mscorlib::System::String* parameterName);
		static mscorlib::System::DateTimeOffset op_Implicit(mscorlib::System::DateTime dateTime);
		static bool op_Equality(mscorlib::System::DateTimeOffset left, mscorlib::System::DateTimeOffset right);
		static void _cctor();
	};
	bool operator==(mscorlib::System::DateTimeOffset& left, mscorlib::System::DateTimeOffset& right);
}

