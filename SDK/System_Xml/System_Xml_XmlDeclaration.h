#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlLinkedNode.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlDocument; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml { struct XmlNode; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlWriter; };

namespace System_Xml::System::Xml
{
	struct XmlDeclaration : System_Xml::System::Xml::XmlLinkedNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* version;
		mscorlib::System::String* encoding;
		mscorlib::System::String* standalone;
		void _ctor(mscorlib::System::String* version, mscorlib::System::String* encoding, mscorlib::System::String* standalone, System_Xml::System::Xml::XmlDocument* doc);
		mscorlib::System::String* get_Version();
		void set_Version(mscorlib::System::String* value);
		mscorlib::System::String* get_Encoding();
		void set_Encoding(mscorlib::System::String* value);
		mscorlib::System::String* get_Standalone();
		void set_Standalone(mscorlib::System::String* value);
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		mscorlib::System::String* get_InnerText();
		void set_InnerText(mscorlib::System::String* value);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_LocalName();
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		void WriteContentTo(System_Xml::System::Xml::XmlWriter* w);
		bool IsValidXmlVersion(mscorlib::System::String* ver);
	};
}

