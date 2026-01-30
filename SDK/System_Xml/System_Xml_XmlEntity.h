#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNode.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlLinkedNode; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace System_Xml::System::Xml { struct XmlNode; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml { struct XmlWriter; };

namespace System_Xml::System::Xml
{
	struct XmlEntity : System_Xml::System::Xml::XmlNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* publicId;
		mscorlib::System::String* systemId;
		mscorlib::System::String* notationName;
		mscorlib::System::String* name;
		mscorlib::System::String* unparsedReplacementStr;
		mscorlib::System::String* baseURI;
		System_Xml::System::Xml::XmlLinkedNode* lastChild;
		bool childrenFoliating;
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* strdata, mscorlib::System::String* publicId, mscorlib::System::String* systemId, mscorlib::System::String* notationName, System_Xml::System::Xml::XmlDocument* doc);
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		bool get_IsReadOnly();
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_LocalName();
		mscorlib::System::String* get_InnerText();
		void set_InnerText(mscorlib::System::String* value);
		bool get_IsContainer();
		System_Xml::System::Xml::XmlLinkedNode* get_LastNode();
		void set_LastNode(System_Xml::System::Xml::XmlLinkedNode* value);
		bool IsValidChildType(System_Xml::System::Xml::XmlNodeType type);
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		mscorlib::System::String* get_SystemId();
		void set_InnerXml(mscorlib::System::String* value);
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		void WriteContentTo(System_Xml::System::Xml::XmlWriter* w);
		mscorlib::System::String* get_BaseURI();
		void SetBaseURI(mscorlib::System::String* inBaseURI);
	};
}

