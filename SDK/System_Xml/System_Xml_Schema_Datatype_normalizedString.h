#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_Datatype_string.h"
#include "System_Xml_Schema_XmlTypeCode.h"
#include "System_Xml_Schema_XmlSchemaWhiteSpace.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct Datatype_normalizedString : System_Xml::System::Xml::Schema::Datatype_string
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();
		bool get_HasValueFacets();
		void _ctor();
	};
}

