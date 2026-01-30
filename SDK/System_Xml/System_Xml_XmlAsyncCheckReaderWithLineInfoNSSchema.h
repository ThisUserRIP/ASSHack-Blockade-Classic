#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlAsyncCheckReaderWithLineInfoNS.h"
namespace System_Xml::System::Xml::Schema { struct IXmlSchemaInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlReader; };
#include "System_Xml_Schema_XmlSchemaValidity.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };

namespace System_Xml::System::Xml
{
	struct XmlAsyncCheckReaderWithLineInfoNSSchema : System_Xml::System::Xml::XmlAsyncCheckReaderWithLineInfoNS
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::IXmlSchemaInfo* readerAsIXmlSchemaInfo;
		void _ctor(System_Xml::System::Xml::XmlReader* reader);
		System_Xml::System::Xml::Schema::XmlSchemaValidity System_Xml_Schema_IXmlSchemaInfo_get_Validity();
		bool System_Xml_Schema_IXmlSchemaInfo_get_IsDefault();
		bool System_Xml_Schema_IXmlSchemaInfo_get_IsNil();
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* System_Xml_Schema_IXmlSchemaInfo_get_MemberType();
		System_Xml::System::Xml::Schema::XmlSchemaType* System_Xml_Schema_IXmlSchemaInfo_get_SchemaType();
		System_Xml::System::Xml::Schema::XmlSchemaElement* System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement();
		System_Xml::System::Xml::Schema::XmlSchemaAttribute* System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute();
	};
}

