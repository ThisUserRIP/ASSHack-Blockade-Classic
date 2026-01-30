#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNamespaceManager.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml::Schema
{
	struct SchemaNamespaceManager : System_Xml::System::Xml::XmlNamespaceManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaObject* node;
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaObject* node);
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* ns);
	};
}

