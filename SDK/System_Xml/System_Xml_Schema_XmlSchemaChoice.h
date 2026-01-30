#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaGroupBase.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaChoice : System_Xml::System::Xml::Schema::XmlSchemaGroupBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* items;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();
		bool get_IsEmpty();
		void SetItems(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* newItems);
		void _ctor();
	};
}

