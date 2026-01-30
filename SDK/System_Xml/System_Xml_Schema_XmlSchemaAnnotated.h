#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaObject.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnnotation; };
namespace System_Xml::System::Xml { struct XmlAttribute; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaAnnotated : System_Xml::System::Xml::Schema::XmlSchemaObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* id;
		System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation;
		IL2CPP::Array<System_Xml::System::Xml::XmlAttribute*>* moreAttributes;
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaAnnotation* get_Annotation();
		void set_Annotation(System_Xml::System::Xml::Schema::XmlSchemaAnnotation* value);
		IL2CPP::Array<System_Xml::System::Xml::XmlAttribute*>* get_UnhandledAttributes();
		mscorlib::System::String* get_IdAttribute();
		void set_IdAttribute(mscorlib::System::String* value);
		void SetUnhandledAttributes(IL2CPP::Array<System_Xml::System::Xml::XmlAttribute*>* moreAttributes);
		void AddAnnotation(System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation);
		void _ctor();
	};
}

