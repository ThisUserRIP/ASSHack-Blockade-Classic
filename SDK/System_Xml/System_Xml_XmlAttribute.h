#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNode.h"
namespace System_Xml::System::Xml { struct XmlName; };
namespace System_Xml::System::Xml { struct XmlLinkedNode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlNode; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml { struct XmlElement; };
namespace System_Xml::System::Xml { struct XmlWriter; };

namespace System_Xml::System::Xml
{
	struct XmlAttribute : System_Xml::System::Xml::XmlNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlName* name;
		System_Xml::System::Xml::XmlLinkedNode* lastChild;
		void _ctor(System_Xml::System::Xml::XmlName* name, System_Xml::System::Xml::XmlDocument* doc);
		void _ctor(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI, System_Xml::System::Xml::XmlDocument* doc);
		System_Xml::System::Xml::XmlName* get_XmlName();
		void set_XmlName(System_Xml::System::Xml::XmlName* value);
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		System_Xml::System::Xml::XmlNode* get_ParentNode();
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_LocalName();
		mscorlib::System::String* get_NamespaceURI();
		mscorlib::System::String* get_Prefix();
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		System_Xml::System::Xml::XmlDocument* get_OwnerDocument();
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		void set_InnerText(mscorlib::System::String* value);
		bool PrepareOwnerElementInElementIdAttrMap();
		void ResetOwnerElementInElementIdAttrMap(mscorlib::System::String* oldInnerText);
		bool get_IsContainer();
		System_Xml::System::Xml::XmlNode* AppendChildForLoad(System_Xml::System::Xml::XmlNode* newChild, System_Xml::System::Xml::XmlDocument* doc);
		System_Xml::System::Xml::XmlLinkedNode* get_LastNode();
		void set_LastNode(System_Xml::System::Xml::XmlLinkedNode* value);
		bool IsValidChildType(System_Xml::System::Xml::XmlNodeType type);
		bool get_Specified();
		System_Xml::System::Xml::XmlNode* RemoveChild(System_Xml::System::Xml::XmlNode* oldChild);
		System_Xml::System::Xml::XmlNode* AppendChild(System_Xml::System::Xml::XmlNode* newChild);
		System_Xml::System::Xml::XmlElement* get_OwnerElement();
		void set_InnerXml(mscorlib::System::String* value);
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		void WriteContentTo(System_Xml::System::Xml::XmlWriter* w);
		mscorlib::System::String* get_BaseURI();
		void SetParent(System_Xml::System::Xml::XmlNode* node);
	};
}

