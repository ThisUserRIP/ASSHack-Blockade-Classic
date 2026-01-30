#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaCollectionNode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* namespaceUri;
		System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo;
		System_Xml::System::Xml::Schema::XmlSchema* schema;
		void set_NamespaceURI(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::SchemaInfo* get_SchemaInfo();
		void set_SchemaInfo(System_Xml::System::Xml::Schema::SchemaInfo* value);
		System_Xml::System::Xml::Schema::XmlSchema* get_Schema();
		void set_Schema(System_Xml::System::Xml::Schema::XmlSchema* value);
		void _ctor();
	};
}

