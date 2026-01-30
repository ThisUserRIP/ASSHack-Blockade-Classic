#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };

namespace mscorlib::System
{
	struct TimeSpan
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t _ticks;
		void _ctor(int64_t ticks);
		void _ctor(int32_t hours, int32_t minutes, int32_t seconds);
		void _ctor(int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds);
		int64_t get_Ticks();
		int32_t get_Hours();
		int32_t get_Minutes();
		double get_TotalDays();
		double get_TotalHours();
		double get_TotalMilliseconds();
		double get_TotalMinutes();
		double get_TotalSeconds();
		mscorlib::System::TimeSpan Add(mscorlib::System::TimeSpan ts);
		static int32_t Compare(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
		int32_t CompareTo(mscorlib::System::Object* value);
		int32_t CompareTo(mscorlib::System::TimeSpan value);
		static mscorlib::System::TimeSpan FromDays(double value);
		mscorlib::System::TimeSpan Duration();
		bool Equals(mscorlib::System::Object* value);
		bool Equals(mscorlib::System::TimeSpan obj);
		int32_t GetHashCode();
		static mscorlib::System::TimeSpan FromHours(double value);
		static mscorlib::System::TimeSpan Interval(double value, int32_t scale);
		static mscorlib::System::TimeSpan FromMilliseconds(double value);
		static mscorlib::System::TimeSpan FromMinutes(double value);
		mscorlib::System::TimeSpan Negate();
		static mscorlib::System::TimeSpan FromSeconds(double value);
		mscorlib::System::TimeSpan Subtract(mscorlib::System::TimeSpan ts);
		static mscorlib::System::TimeSpan FromTicks(int64_t value);
		static int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second);
		static mscorlib::System::TimeSpan Parse(mscorlib::System::String* s);
		static mscorlib::System::TimeSpan Parse(mscorlib::System::String* input, mscorlib::System::IFormatProvider* formatProvider);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format);
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		static mscorlib::System::TimeSpan op_Subtraction(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
		static mscorlib::System::TimeSpan op_Addition(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
		static bool op_Equality(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
		static bool op_Inequality(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
		static bool op_LessThan(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
		static bool op_LessThanOrEqual(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
		static bool op_GreaterThan(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
		static bool op_GreaterThanOrEqual(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
		static bool GetLegacyFormatMode();
		static bool get_LegacyMode();
		static void _cctor();
	};
	mscorlib::System::TimeSpan operator-(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
	mscorlib::System::TimeSpan operator+(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
	bool operator==(mscorlib::System::TimeSpan& t1, mscorlib::System::TimeSpan& t2);
	bool operator!=(mscorlib::System::TimeSpan& t1, mscorlib::System::TimeSpan& t2);
	bool operator<(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
	bool operator<=(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
	bool operator>(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
	bool operator>=(mscorlib::System::TimeSpan t1, mscorlib::System::TimeSpan t2);
}

