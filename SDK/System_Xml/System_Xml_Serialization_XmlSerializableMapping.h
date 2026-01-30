#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlTypeMapping.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaComplexType; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlRootAttribute; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializableMapping : System_Xml::System::Xml::Serialization::XmlTypeMapping
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchema* _schema;
		System_Xml::System::Xml::Schema::XmlSchemaComplexType* _schemaType;
		System_Xml::System::Xml::XmlQualifiedName* _schemaTypeName;
		void _ctor(System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* elementName, mscorlib::System::String* ns, System_Xml::System::Xml::Serialization::TypeData* typeData, mscorlib::System::String* xmlType, mscorlib::System::String* xmlTypeNamespace);
	};
}

