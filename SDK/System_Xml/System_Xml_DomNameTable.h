#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlName; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct IXmlSchemaInfo; };

namespace System_Xml::System::Xml
{
	struct DomNameTable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System_Xml::System::Xml::XmlName*>* entries;
		int32_t count;
		int32_t mask;
		System_Xml::System::Xml::XmlDocument* ownerDocument;
		System_Xml::System::Xml::XmlNameTable* nameTable;
		void _ctor(System_Xml::System::Xml::XmlDocument* document);
		System_Xml::System::Xml::XmlName* GetName(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
		System_Xml::System::Xml::XmlName* AddName(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
		void Grow();
	};
}

