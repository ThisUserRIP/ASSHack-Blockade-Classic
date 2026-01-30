#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaAnnotated.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaNotation : System_Xml::System::Xml::Schema::XmlSchemaAnnotated
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::String* publicId;
		mscorlib::System::String* systemId;
		System_Xml::System::Xml::XmlQualifiedName* qname;
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		mscorlib::System::String* get_Public();
		void set_Public(mscorlib::System::String* value);
		mscorlib::System::String* get_System();
		void set_System(mscorlib::System::String* value);
		System_Xml::System::Xml::XmlQualifiedName* get_QualifiedName();
		void set_QualifiedName(System_Xml::System::Xml::XmlQualifiedName* value);
		mscorlib::System::String* get_NameAttribute();
		void set_NameAttribute(mscorlib::System::String* value);
		void _ctor();
	};
}

