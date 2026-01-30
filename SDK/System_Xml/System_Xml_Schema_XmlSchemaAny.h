#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaParticle.h"
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
	struct XmlSchemaAny : System_Xml::System::Xml::Schema::XmlSchemaParticle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* ns;
		System_Xml::System::Xml::Schema::XmlSchemaContentProcessing processContents;
		System_Xml::System::Xml::Schema::NamespaceList* namespaceList;
		mscorlib::System::String* get_Namespace();
		void set_Namespace(mscorlib::System::String* value);
		void set_ProcessContents(System_Xml::System::Xml::Schema::XmlSchemaContentProcessing value);
		System_Xml::System::Xml::Schema::NamespaceList* get_NamespaceList();
		mscorlib::System::String* get_ResolvedNamespace();
		System_Xml::System::Xml::Schema::XmlSchemaContentProcessing get_ProcessContentsCorrect();
		mscorlib::System::String* get_NameString();
		void BuildNamespaceList(mscorlib::System::String* targetNamespace);
		void BuildNamespaceListV1Compat(mscorlib::System::String* targetNamespace);
		bool Allows(System_Xml::System::Xml::XmlQualifiedName* qname);
		void _ctor();
	};
}

