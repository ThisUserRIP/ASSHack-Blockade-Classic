#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlBaseConverter.h"
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlUnionConverter : System_Xml::System::Xml::Schema::XmlBaseConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System_Xml::System::Xml::Schema::XmlValueConverter*>* converters;
		bool hasAtomicMember;
		bool hasListMember;
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		static System_Xml::System::Xml::Schema::XmlValueConverter* Create(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
	};
}

