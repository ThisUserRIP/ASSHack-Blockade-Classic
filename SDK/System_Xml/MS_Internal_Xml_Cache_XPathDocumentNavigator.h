#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XPath_XPathNavigator.h"
#include "MS_Internal_Xml_Cache_XPathNode.h"
namespace System_Xml::MS::Internal::Xml::Cache { struct XPathNode; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::XPath { struct XPathNavigator; };
#include "System_Xml_XPath_XPathNodeType.h"
namespace System_Xml::System::Xml { struct XmlNameTable; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_XPath_XPathNamespaceScope.h"
namespace mscorlib::System { struct Object; };

namespace System_Xml::MS::Internal::Xml::Cache
{
	struct XPathDocumentNavigator : System_Xml::System::Xml::XPath::XPathNavigator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageCurrent;
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageParent;
		int32_t idxCurrent;
		int32_t idxParent;
		void _ctor(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageCurrent, int32_t idxCurrent, IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageParent, int32_t idxParent);
		mscorlib::System::String* get_Value();
		System_Xml::System::Xml::XPath::XPathNavigator* Clone();
		System_Xml::System::Xml::XPath::XPathNodeType get_NodeType();
		mscorlib::System::String* get_LocalName();
		mscorlib::System::String* get_NamespaceURI();
		mscorlib::System::String* get_Prefix();
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		bool MoveToFirstNamespace(System_Xml::System::Xml::XPath::XPathNamespaceScope namespaceScope);
		bool MoveToNextNamespace(System_Xml::System::Xml::XPath::XPathNamespaceScope scope);
		bool MoveToParent();
		bool IsSamePosition(System_Xml::System::Xml::XPath::XPathNavigator* other);
		mscorlib::System::Object* get_UnderlyingObject();
		int32_t get_LineNumber();
		int32_t get_LinePosition();
		int32_t GetPositionHashCode();
	};
}

