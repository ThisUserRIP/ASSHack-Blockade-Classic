#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaObject.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml { struct XmlAttribute; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaAnnotation : System_Xml::System::Xml::Schema::XmlSchemaObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* id;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* items;
		IL2CPP::Array<System_Xml::System::Xml::XmlAttribute*>* moreAttributes;
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();
		mscorlib::System::String* get_IdAttribute();
		void set_IdAttribute(mscorlib::System::String* value);
		void SetUnhandledAttributes(IL2CPP::Array<System_Xml::System::Xml::XmlAttribute*>* moreAttributes);
		void _ctor();
	};
}

