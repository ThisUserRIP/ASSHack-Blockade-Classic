#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_Schema_XmlTypeCode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Xml_Schema_XsdDateTimeFlags.h"
#include "System_Xml_Schema_XsdDateTime_Parser.h"
namespace System_Xml::System::Xml::Schema { struct XsdDateTime_Parser; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_DateTimeOffset.h"
namespace mscorlib::System { struct DateTimeOffset; };
#include "System_Xml_Schema_XsdDateTime_DateTimeTypeCode.h"
#include "System_Xml_Schema_XsdDateTime_XsdDateTimeKind.h"
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };

namespace System_Xml::System::Xml::Schema
{
	struct XsdDateTime
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::DateTime dt;
		uint32_t extra;
		void _ctor(mscorlib::System::String* text, System_Xml::System::Xml::Schema::XsdDateTimeFlags kinds);
		void _ctor(System_Xml::System::Xml::Schema::XsdDateTime_Parser parser);
		void InitiateXsdDateTime(System_Xml::System::Xml::Schema::XsdDateTime_Parser parser);
		static bool TryParse(mscorlib::System::String* text, System_Xml::System::Xml::Schema::XsdDateTimeFlags kinds, System_Xml::System::Xml::Schema::XsdDateTime& result);
		void _ctor(mscorlib::System::DateTime dateTime, System_Xml::System::Xml::Schema::XsdDateTimeFlags kinds);
		void _ctor(mscorlib::System::DateTimeOffset dateTimeOffset, System_Xml::System::Xml::Schema::XsdDateTimeFlags kinds);
		System_Xml::System::Xml::Schema::XsdDateTime_DateTimeTypeCode get_InternalTypeCode();
		System_Xml::System::Xml::Schema::XsdDateTime_XsdDateTimeKind get_InternalKind();
		int32_t get_Year();
		int32_t get_Month();
		int32_t get_Day();
		int32_t get_Hour();
		int32_t get_Minute();
		int32_t get_Second();
		int32_t get_Fraction();
		int32_t get_ZoneHour();
		int32_t get_ZoneMinute();
		static mscorlib::System::DateTime op_Implicit(System_Xml::System::Xml::Schema::XsdDateTime xdt);
		static mscorlib::System::DateTimeOffset op_Implicit(System_Xml::System::Xml::Schema::XsdDateTime xdt);
		mscorlib::System::String* ToString();
		void PrintDate(mscorlib::System::Text::StringBuilder* sb);
		void PrintTime(mscorlib::System::Text::StringBuilder* sb);
		void PrintZone(mscorlib::System::Text::StringBuilder* sb);
		void IntToCharArray(IL2CPP::Array<wchar_t>* text, int32_t start, int32_t value, int32_t digits);
		void ShortToCharArray(IL2CPP::Array<wchar_t>* text, int32_t start, int32_t value);
		static void _cctor();
	};
}

