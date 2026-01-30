#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaRedefine; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct RedefineEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaRedefine* redefine;
		System_Xml::System::Xml::Schema::XmlSchema* schemaToUpdate;
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaRedefine* external, System_Xml::System::Xml::Schema::XmlSchema* schema);
	};
}

