#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaSubstitutionGroup.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaChoice; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaSubstitutionGroupV1Compat : System_Xml::System::Xml::Schema::XmlSchemaSubstitutionGroup
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaChoice* choice;
		System_Xml::System::Xml::Schema::XmlSchemaChoice* get_Choice();
		void _ctor();
	};
}

