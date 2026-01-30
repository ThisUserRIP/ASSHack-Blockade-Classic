#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlLinkedNode.h"
namespace System_Xml::System::Xml { struct XmlName; };
namespace System_Xml::System::Xml { struct XmlAttributeCollection; };
namespace System_Xml::System::Xml { struct XmlLinkedNode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlNode; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml { struct XmlAttribute; };
namespace System_Xml::System::Xml { struct XmlWriter; };

namespace System_Xml::System::Xml
{
	struct XmlElement : System_Xml::System::Xml::XmlLinkedNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlName* name;
		System_Xml::System::Xml::XmlAttributeCollection* attributes;
		System_Xml::System::Xml::XmlLinkedNode* lastChild;
		void _ctor(System_Xml::System::Xml::XmlName* name, bool empty, System_Xml::System::Xml::XmlDocument* doc);
		void _ctor(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI, System_Xml::System::Xml::XmlDocument* doc);
		System_Xml::System::Xml::XmlName* get_XmlName();
		void set_XmlName(System_Xml::System::Xml::XmlName* value);
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_LocalName();
		mscorlib::System::String* get_NamespaceURI();
		mscorlib::System::String* get_Prefix();
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		System_Xml::System::Xml::XmlNode* get_ParentNode();
		System_Xml::System::Xml::XmlDocument* get_OwnerDocument();
		bool get_IsContainer();
		System_Xml::System::Xml::XmlNode* AppendChildForLoad(System_Xml::System::Xml::XmlNode* newChild, System_Xml::System::Xml::XmlDocument* doc);
		bool get_IsEmpty();
		void set_IsEmpty(bool value);
		System_Xml::System::Xml::XmlLinkedNode* get_LastNode();
		void set_LastNode(System_Xml::System::Xml::XmlLinkedNode* value);
		bool IsValidChildType(System_Xml::System::Xml::XmlNodeType type);
		System_Xml::System::Xml::XmlAttributeCollection* get_Attributes();
		bool get_HasAttributes();
		System_Xml::System::Xml::XmlAttribute* SetAttributeNode(System_Xml::System::Xml::XmlAttribute* newAttr);
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		static void WriteElementTo(System_Xml::System::Xml::XmlWriter* writer, System_Xml::System::Xml::XmlElement* e);
		void WriteStartElement(System_Xml::System::Xml::XmlWriter* w);
		void WriteContentTo(System_Xml::System::Xml::XmlWriter* w);
		void RemoveAllAttributes();
		void RemoveAll();
		void RemoveAllChildren();
		void set_InnerXml(mscorlib::System::String* value);
		mscorlib::System::String* get_InnerText();
		void set_InnerText(mscorlib::System::String* value);
		System_Xml::System::Xml::XmlNode* get_NextSibling();
		void SetParent(System_Xml::System::Xml::XmlNode* node);
	};
}

