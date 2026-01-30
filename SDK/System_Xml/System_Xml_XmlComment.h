#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlCharacterData.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlDocument; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml { struct XmlNode; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlWriter; };

namespace System_Xml::System::Xml
{
	struct XmlComment : System_Xml::System::Xml::XmlCharacterData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::String* comment, System_Xml::System::Xml::XmlDocument* doc);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_LocalName();
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		void WriteContentTo(System_Xml::System::Xml::XmlWriter* w);
	};
}

