#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaAnnotated.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_Schema_XmlSchemaContentProcessing.h"
namespace System_Xml::System::Xml::Schema { struct NamespaceList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaAnyAttribute : System_Xml::System::Xml::Schema::XmlSchemaAnnotated
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* ns;
		System_Xml::System::Xml::Schema::XmlSchemaContentProcessing processContents;
		System_Xml::System::Xml::Schema::NamespaceList* namespaceList;
		void set_Namespace(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaContentProcessing get_ProcessContents();
		void set_ProcessContents(System_Xml::System::Xml::Schema::XmlSchemaContentProcessing value);
		System_Xml::System::Xml::Schema::NamespaceList* get_NamespaceList();
		System_Xml::System::Xml::Schema::XmlSchemaContentProcessing get_ProcessContentsCorrect();
		void BuildNamespaceList(mscorlib::System::String* targetNamespace);
		void BuildNamespaceListV1Compat(mscorlib::System::String* targetNamespace);
		bool Allows(System_Xml::System::Xml::XmlQualifiedName* qname);
		static bool IsSubset(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* sub, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* super);
		static System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* Intersection(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* o1, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* o2, bool v1Compat);
		static System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* Union(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* o1, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* o2, bool v1Compat);
		void _ctor();
	};
}

