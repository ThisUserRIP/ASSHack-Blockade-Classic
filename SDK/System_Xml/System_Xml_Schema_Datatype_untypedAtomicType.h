#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_Datatype_anyAtomicType.h"
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
#include "System_Xml_Schema_XmlSchemaWhiteSpace.h"
#include "System_Xml_Schema_XmlTypeCode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct Datatype_untypedAtomicType : System_Xml::System::Xml::Schema::Datatype_anyAtomicType
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlValueConverter* CreateValueConverter(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		void _ctor();
	};
}

