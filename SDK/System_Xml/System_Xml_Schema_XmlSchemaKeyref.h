#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaIdentityConstraint.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaKeyref : System_Xml::System::Xml::Schema::XmlSchemaIdentityConstraint
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* refer;
		System_Xml::System::Xml::XmlQualifiedName* get_Refer();
		void set_Refer(System_Xml::System::Xml::XmlQualifiedName* value);
		void _ctor();
	};
}

