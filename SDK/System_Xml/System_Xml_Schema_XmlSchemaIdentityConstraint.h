#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaAnnotated.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaXPath; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct CompiledIdentityConstraint; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaIdentityConstraint : System_Xml::System::Xml::Schema::XmlSchemaAnnotated
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		System_Xml::System::Xml::Schema::XmlSchemaXPath* selector;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* fields;
		System_Xml::System::Xml::XmlQualifiedName* qualifiedName;
		System_Xml::System::Xml::Schema::CompiledIdentityConstraint* compiledConstraint;
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaXPath* get_Selector();
		void set_Selector(System_Xml::System::Xml::Schema::XmlSchemaXPath* value);
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Fields();
		System_Xml::System::Xml::XmlQualifiedName* get_QualifiedName();
		void SetQualifiedName(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::Schema::CompiledIdentityConstraint* get_CompiledConstraint();
		void set_CompiledConstraint(System_Xml::System::Xml::Schema::CompiledIdentityConstraint* value);
		mscorlib::System::String* get_NameAttribute();
		void set_NameAttribute(mscorlib::System::String* value);
		void _ctor();
	};
}

