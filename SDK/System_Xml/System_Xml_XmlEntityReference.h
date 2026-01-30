#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlLinkedNode.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlLinkedNode; };
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
	struct XmlEntityReference : System_Xml::System::Xml::XmlLinkedNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		System_Xml::System::Xml::XmlLinkedNode* lastChild;
		void _ctor(mscorlib::System::String* name, System_Xml::System::Xml::XmlDocument* doc);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_LocalName();
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		bool get_IsReadOnly();
		bool get_IsContainer();
		void SetParent(System_Xml::System::Xml::XmlNode* node);
		void SetParentForLoad(System_Xml::System::Xml::XmlNode* node);
		System_Xml::System::Xml::XmlLinkedNode* get_LastNode();
		void set_LastNode(System_Xml::System::Xml::XmlLinkedNode* value);
		bool IsValidChildType(System_Xml::System::Xml::XmlNodeType type);
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		void WriteContentTo(System_Xml::System::Xml::XmlWriter* w);
		mscorlib::System::String* get_BaseURI();
		mscorlib::System::String* ConstructBaseURI(mscorlib::System::String* baseURI, mscorlib::System::String* systemId);
		mscorlib::System::String* get_ChildBaseURI();
	};
}

