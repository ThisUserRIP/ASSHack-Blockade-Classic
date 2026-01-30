#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlEventCache.h"
namespace System_Xml::System::Xml { struct XmlEventCache; };
#include "System_Xml_XmlEventCache_XmlEventType.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct XmlEventCache_XmlEvent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlEventCache_XmlEventType eventType;
		mscorlib::System::String* s1;
		mscorlib::System::String* s2;
		mscorlib::System::String* s3;
		mscorlib::System::Object* o;
		void InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType);
		void InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1);
		void InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1, mscorlib::System::String* s2);
		void InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1, mscorlib::System::String* s2, mscorlib::System::String* s3);
		void InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::String* s1, mscorlib::System::String* s2, mscorlib::System::String* s3, mscorlib::System::Object* o);
		void InitEvent(System_Xml::System::Xml::XmlEventCache_XmlEventType eventType, mscorlib::System::Object* o);
		System_Xml::System::Xml::XmlEventCache_XmlEventType get_EventType();
		mscorlib::System::String* get_String1();
		mscorlib::System::String* get_String2();
		mscorlib::System::String* get_String3();
		mscorlib::System::Object* get_Object();
	};
}

