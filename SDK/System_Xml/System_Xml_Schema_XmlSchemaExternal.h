#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaObject.h"
namespace mscorlib::System { struct String; };
namespace System::System { struct Uri; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
namespace System_Xml::System::Xml { struct XmlAttribute; };
#include "System_Xml_Schema_Compositor.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaExternal : System_Xml::System::Xml::Schema::XmlSchemaObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* location;
		System::System::Uri* baseUri;
		System_Xml::System::Xml::Schema::XmlSchema* schema;
		mscorlib::System::String* id;
		IL2CPP::Array<System_Xml::System::Xml::XmlAttribute*>* moreAttributes;
		System_Xml::System::Xml::Schema::Compositor compositor;
		mscorlib::System::String* get_SchemaLocation();
		void set_SchemaLocation(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchema* get_Schema();
		void set_Schema(System_Xml::System::Xml::Schema::XmlSchema* value);
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		System::System::Uri* get_BaseUri();
		void set_BaseUri(System::System::Uri* value);
		mscorlib::System::String* get_IdAttribute();
		void set_IdAttribute(mscorlib::System::String* value);
		void SetUnhandledAttributes(IL2CPP::Array<System_Xml::System::Xml::XmlAttribute*>* moreAttributes);
		System_Xml::System::Xml::Schema::Compositor get_Compositor();
		void set_Compositor(System_Xml::System::Xml::Schema::Compositor value);
		void _ctor();
	};
}

