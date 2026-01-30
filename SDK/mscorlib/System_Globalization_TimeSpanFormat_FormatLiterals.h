#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Globalization_TimeSpanFormat.h"
namespace mscorlib::System::Globalization { struct TimeSpanFormat; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Globalization
{
	struct TimeSpanFormat_FormatLiterals
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* AppCompatLiteral;
		int32_t dd;
		int32_t hh;
		int32_t mm;
		int32_t ss;
		int32_t ff;
		IL2CPP::Array<mscorlib::System::String*>* literals;
		mscorlib::System::String* get_Start();
		mscorlib::System::String* get_DayHourSep();
		mscorlib::System::String* get_HourMinuteSep();
		mscorlib::System::String* get_MinuteSecondSep();
		mscorlib::System::String* get_SecondFractionSep();
		mscorlib::System::String* get_End();
		static mscorlib::System::Globalization::TimeSpanFormat_FormatLiterals InitInvariant(bool isNegative);
		void Init(mscorlib::System::String* format, bool useInvariantFieldLengths);
	};
}

