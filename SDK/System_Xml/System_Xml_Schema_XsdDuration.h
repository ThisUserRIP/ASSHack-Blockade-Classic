#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_Xml_Schema_XsdDuration_DurationType.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Exception; };

namespace System_Xml::System::Xml::Schema
{
	struct XsdDuration
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t years;
		int32_t months;
		int32_t days;
		int32_t hours;
		int32_t minutes;
		int32_t seconds;
		uint32_t nanoseconds;
		void _ctor(bool isNegative, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t nanoseconds);
		void _ctor(mscorlib::System::TimeSpan timeSpan, System_Xml::System::Xml::Schema::XsdDuration_DurationType durationType);
		void _ctor(mscorlib::System::String* s, System_Xml::System::Xml::Schema::XsdDuration_DurationType durationType);
		bool get_IsNegative();
		int32_t get_Years();
		int32_t get_Months();
		int32_t get_Days();
		int32_t get_Hours();
		int32_t get_Minutes();
		int32_t get_Seconds();
		int32_t get_Nanoseconds();
		mscorlib::System::TimeSpan ToTimeSpan(System_Xml::System::Xml::Schema::XsdDuration_DurationType durationType);
		mscorlib::System::Exception* TryToTimeSpan(mscorlib::System::TimeSpan& result);
		mscorlib::System::Exception* TryToTimeSpan(System_Xml::System::Xml::Schema::XsdDuration_DurationType durationType, mscorlib::System::TimeSpan& result);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(System_Xml::System::Xml::Schema::XsdDuration_DurationType durationType);
		static mscorlib::System::Exception* TryParse(mscorlib::System::String* s, System_Xml::System::Xml::Schema::XsdDuration& result);
		static mscorlib::System::Exception* TryParse(mscorlib::System::String* s, System_Xml::System::Xml::Schema::XsdDuration_DurationType durationType, System_Xml::System::Xml::Schema::XsdDuration& result);
		static mscorlib::System::String* TryParseDigits(mscorlib::System::String* s, int32_t& offset, bool eatDigits, int32_t& result, int32_t& numDigits);
	};
}

