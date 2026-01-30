#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlAttribute.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace System_Xml::System::Xml { struct XmlNode; };
namespace System_Xml::System::Xml { struct XmlWriter; };

namespace System_Xml::System::Xml
{
	struct XmlUnspecifiedAttribute : System_Xml::System::Xml::XmlAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool fSpecified;
		void _ctor(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI, System_Xml::System::Xml::XmlDocument* doc);
		bool get_Specified();
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		void set_InnerText(mscorlib::System::String* value);
		System_Xml::System::Xml::XmlNode* RemoveChild(System_Xml::System::Xml::XmlNode* oldChild);
		System_Xml::System::Xml::XmlNode* AppendChild(System_Xml::System::Xml::XmlNode* newChild);
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		void SetSpecified(bool f);
	};
}

