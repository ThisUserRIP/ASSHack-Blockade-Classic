#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaContentModel.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaContent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaSimpleContent : System_Xml::System::Xml::Schema::XmlSchemaContentModel
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaContent* content;
		System_Xml::System::Xml::Schema::XmlSchemaContent* get_Content();
		void set_Content(System_Xml::System::Xml::Schema::XmlSchemaContent* value);
		void _ctor();
	};
}

