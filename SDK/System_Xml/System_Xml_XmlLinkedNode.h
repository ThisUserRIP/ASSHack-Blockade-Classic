#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace System_Xml::System::Xml { struct XmlNode; };

namespace System_Xml::System::Xml
{
	struct XmlLinkedNode : System_Xml::System::Xml::XmlNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlLinkedNode* next;
		void _ctor(System_Xml::System::Xml::XmlDocument* doc);
		System_Xml::System::Xml::XmlNode* get_PreviousSibling();
		System_Xml::System::Xml::XmlNode* get_NextSibling();
	};
}

