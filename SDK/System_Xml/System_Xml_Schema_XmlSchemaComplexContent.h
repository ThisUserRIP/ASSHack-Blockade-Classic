#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaContentModel.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaContent; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaComplexContent : System_Xml::System::Xml::Schema::XmlSchemaContentModel
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaContent* content;
		bool isMixed;
		bool hasMixedAttribute;
		bool get_IsMixed();
		void set_IsMixed(bool value);
		System_Xml::System::Xml::Schema::XmlSchemaContent* get_Content();
		void set_Content(System_Xml::System::Xml::Schema::XmlSchemaContent* value);
		bool get_HasMixedAttribute();
		void _ctor();
	};
}

