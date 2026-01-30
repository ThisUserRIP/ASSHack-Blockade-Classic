#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaParticle.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaGroupBase; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaGroup; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaGroupRef : System_Xml::System::Xml::Schema::XmlSchemaParticle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* refName;
		System_Xml::System::Xml::Schema::XmlSchemaGroupBase* particle;
		System_Xml::System::Xml::Schema::XmlSchemaGroup* refined;
		System_Xml::System::Xml::XmlQualifiedName* get_RefName();
		void set_RefName(System_Xml::System::Xml::XmlQualifiedName* value);
		void SetParticle(System_Xml::System::Xml::Schema::XmlSchemaGroupBase* value);
		System_Xml::System::Xml::Schema::XmlSchemaGroup* get_Redefined();
		void set_Redefined(System_Xml::System::Xml::Schema::XmlSchemaGroup* value);
		void _ctor();
	};
}

