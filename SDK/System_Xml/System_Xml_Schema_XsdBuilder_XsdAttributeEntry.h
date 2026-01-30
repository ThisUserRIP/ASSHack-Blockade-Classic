#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XsdBuilder.h"
namespace System_Xml::System::Xml::Schema { struct XsdBuilder; };
#include "System_Xml_Schema_SchemaNames_Token.h"
namespace System_Xml::System::Xml::Schema { struct XsdBuilder_XsdBuildFunction; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XsdBuilder_XsdAttributeEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SchemaNames_Token Attribute;
		System_Xml::System::Xml::Schema::XsdBuilder_XsdBuildFunction* BuildFunc;
		void _ctor(System_Xml::System::Xml::Schema::SchemaNames_Token a, System_Xml::System::Xml::Schema::XsdBuilder_XsdBuildFunction* build);
	};
}

