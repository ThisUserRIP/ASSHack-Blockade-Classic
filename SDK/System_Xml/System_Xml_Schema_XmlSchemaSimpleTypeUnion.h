#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaSimpleTypeContent.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaSimpleTypeUnion : System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeContent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* baseTypes;
		IL2CPP::Array<System_Xml::System::Xml::XmlQualifiedName*>* memberTypes;
		IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* baseMemberTypes;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_BaseTypes();
		IL2CPP::Array<System_Xml::System::Xml::XmlQualifiedName*>* get_MemberTypes();
		void set_MemberTypes(IL2CPP::Array<System_Xml::System::Xml::XmlQualifiedName*>* value);
		IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* get_BaseMemberTypes();
		void SetBaseMemberTypes(IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* baseMemberTypes);
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone();
		void _ctor();
	};
}

