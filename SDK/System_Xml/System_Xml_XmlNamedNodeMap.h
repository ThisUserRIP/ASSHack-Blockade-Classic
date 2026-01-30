#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlNode; };
#include "System_Xml_XmlNamedNodeMap_SmallXmlNodeList.h"
namespace System_Xml::System::Xml { struct XmlNamedNodeMap_SmallXmlNodeList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace System_Xml::System::Xml { struct XmlDocument; };

namespace System_Xml::System::Xml
{
	struct XmlNamedNodeMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNode* parent;
		System_Xml::System::Xml::XmlNamedNodeMap_SmallXmlNodeList nodes;
		void _ctor(System_Xml::System::Xml::XmlNode* parent);
		System_Xml::System::Xml::XmlNode* GetNamedItem(mscorlib::System::String* name);
		System_Xml::System::Xml::XmlNode* SetNamedItem(System_Xml::System::Xml::XmlNode* node);
		int32_t get_Count();
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t FindNodeOffset(mscorlib::System::String* name);
		int32_t FindNodeOffset(mscorlib::System::String* localName, mscorlib::System::String* namespaceURI);
		System_Xml::System::Xml::XmlNode* AddNode(System_Xml::System::Xml::XmlNode* node);
		System_Xml::System::Xml::XmlNode* AddNodeForLoad(System_Xml::System::Xml::XmlNode* node, System_Xml::System::Xml::XmlDocument* doc);
		System_Xml::System::Xml::XmlNode* RemoveNodeAt(int32_t i);
		System_Xml::System::Xml::XmlNode* ReplaceNodeAt(int32_t i, System_Xml::System::Xml::XmlNode* node);
		System_Xml::System::Xml::XmlNode* InsertNodeAt(int32_t i, System_Xml::System::Xml::XmlNode* node);
	};
}

