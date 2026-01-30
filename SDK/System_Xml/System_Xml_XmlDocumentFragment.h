#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNode.h"
namespace System_Xml::System::Xml { struct XmlLinkedNode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml { struct XmlNode; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlWriter; };

namespace System_Xml::System::Xml
{
	struct XmlDocumentFragment : System_Xml::System::Xml::XmlNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlLinkedNode* lastChild;
		void _ctor(System_Xml::System::Xml::XmlDocument* ownerDocument);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_LocalName();
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		System_Xml::System::Xml::XmlNode* get_ParentNode();
		System_Xml::System::Xml::XmlDocument* get_OwnerDocument();
		void set_InnerXml(mscorlib::System::String* value);
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		bool get_IsContainer();
		System_Xml::System::Xml::XmlLinkedNode* get_LastNode();
		void set_LastNode(System_Xml::System::Xml::XmlLinkedNode* value);
		bool IsValidChildType(System_Xml::System::Xml::XmlNodeType type);
		bool CanInsertAfter(System_Xml::System::Xml::XmlNode* newChild, System_Xml::System::Xml::XmlNode* refChild);
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		void WriteContentTo(System_Xml::System::Xml::XmlWriter* w);
	};
}

