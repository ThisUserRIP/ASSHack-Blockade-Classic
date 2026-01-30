#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNamespaceManager.h"
#include "System_Xml_Schema_XsdBuilder.h"
namespace System_Xml::System::Xml::Schema { struct XsdBuilder; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
namespace System_Xml::System::Xml { struct XmlReader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml::Schema
{
	struct XsdBuilder_BuilderNamespaceManager : System_Xml::System::Xml::XmlNamespaceManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNamespaceManager* nsMgr;
		System_Xml::System::Xml::XmlReader* reader;
		void _ctor(System_Xml::System::Xml::XmlNamespaceManager* nsMgr, System_Xml::System::Xml::XmlReader* reader);
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
	};
}

