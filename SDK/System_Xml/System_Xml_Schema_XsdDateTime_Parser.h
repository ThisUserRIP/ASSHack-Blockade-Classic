#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XsdDateTime.h"
namespace System_Xml::System::Xml::Schema { struct XsdDateTime; };
#include "System_Xml_Schema_XsdDateTime_DateTimeTypeCode.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_Schema_XsdDateTime_XsdDateTimeKind.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_Schema_XsdDateTimeFlags.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XsdDateTime_Parser
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XsdDateTime_DateTimeTypeCode typeCode;
		int32_t year;
		int32_t month;
		int32_t day;
		int32_t hour;
		int32_t minute;
		int32_t second;
		int32_t fraction;
		System_Xml::System::Xml::Schema::XsdDateTime_XsdDateTimeKind kind;
		int32_t zoneHour;
		int32_t zoneMinute;
		mscorlib::System::String* text;
		int32_t length;
		bool Parse(mscorlib::System::String* text, System_Xml::System::Xml::Schema::XsdDateTimeFlags kinds);
		bool ParseDate(int32_t start);
		bool ParseTimeAndZoneAndWhitespace(int32_t start);
		bool ParseTimeAndWhitespace(int32_t start);
		bool ParseTime(int32_t& start);
		bool ParseZoneAndWhitespace(int32_t start);
		bool Parse4Dig(int32_t start, int32_t& num);
		bool Parse2Dig(int32_t start, int32_t& num);
		bool ParseChar(int32_t start, wchar_t ch);
		static bool Test(System_Xml::System::Xml::Schema::XsdDateTimeFlags left, System_Xml::System::Xml::Schema::XsdDateTimeFlags right);
		static void _cctor();
	};
}

