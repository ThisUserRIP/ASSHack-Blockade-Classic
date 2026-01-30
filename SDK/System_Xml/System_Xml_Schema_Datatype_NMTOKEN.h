#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_Datatype_token.h"
#include "System_Xml_Schema_XmlTypeCode.h"
#include "System_Xml_XmlTokenizedType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct Datatype_NMTOKEN : System_Xml::System::Xml::Schema::Datatype_token
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		System_Xml::System::Xml::XmlTokenizedType get_TokenizedType();
		void _ctor();
	};
}

