#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaExternal.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnnotation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaInclude : System_Xml::System::Xml::Schema::XmlSchemaExternal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation;
		void _ctor();
		void AddAnnotation(System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation);
	};
}

