#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml { struct XmlNodeList; };
namespace System_Xml::System::Xml { struct XmlAttributeCollection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlLinkedNode; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace System_Xml::System::Xml { struct XmlNodeChangedEventArgs; };
#include "System_Xml_XmlNodeChangedAction.h"

namespace System_Xml::System::Xml
{
	struct XmlNode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNode* parentNode;
		void _ctor();
		void _ctor(System_Xml::System::Xml::XmlDocument* doc);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		System_Xml::System::Xml::XmlNode* get_ParentNode();
		System_Xml::System::Xml::XmlNodeList* get_ChildNodes();
		System_Xml::System::Xml::XmlNode* get_PreviousSibling();
		System_Xml::System::Xml::XmlNode* get_NextSibling();
		System_Xml::System::Xml::XmlAttributeCollection* get_Attributes();
		System_Xml::System::Xml::XmlDocument* get_OwnerDocument();
		System_Xml::System::Xml::XmlNode* get_FirstChild();
		System_Xml::System::Xml::XmlNode* get_LastChild();
		bool get_IsContainer();
		System_Xml::System::Xml::XmlLinkedNode* get_LastNode();
		void set_LastNode(System_Xml::System::Xml::XmlLinkedNode* value);
		bool AncestorNode(System_Xml::System::Xml::XmlNode* node);
		System_Xml::System::Xml::XmlNode* RemoveChild(System_Xml::System::Xml::XmlNode* oldChild);
		System_Xml::System::Xml::XmlNode* AppendChild(System_Xml::System::Xml::XmlNode* newChild);
		System_Xml::System::Xml::XmlNode* AppendChildForLoad(System_Xml::System::Xml::XmlNode* newChild, System_Xml::System::Xml::XmlDocument* doc);
		bool IsValidChildType(System_Xml::System::Xml::XmlNodeType type);
		bool CanInsertAfter(System_Xml::System::Xml::XmlNode* newChild, System_Xml::System::Xml::XmlNode* refChild);
		bool get_HasChildNodes();
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		void CopyChildren(System_Xml::System::Xml::XmlDocument* doc, System_Xml::System::Xml::XmlNode* container, bool deep);
		mscorlib::System::String* get_NamespaceURI();
		mscorlib::System::String* get_Prefix();
		mscorlib::System::String* get_LocalName();
		bool get_IsReadOnly();
		static bool HasReadOnlyParent(System_Xml::System::Xml::XmlNode* n);
		mscorlib::System::Object* System_ICloneable_Clone();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		void AppendChildText(mscorlib::System::Text::StringBuilder* builder);
		mscorlib::System::String* get_InnerText();
		void set_InnerText(mscorlib::System::String* value);
		void set_InnerXml(mscorlib::System::String* value);
		mscorlib::System::String* get_BaseURI();
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		void WriteContentTo(System_Xml::System::Xml::XmlWriter* w);
		void RemoveAll();
		void SetParent(System_Xml::System::Xml::XmlNode* node);
		void SetParentForLoad(System_Xml::System::Xml::XmlNode* node);
		System_Xml::System::Xml::XmlNode* FindChild(System_Xml::System::Xml::XmlNodeType type);
		System_Xml::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(System_Xml::System::Xml::XmlNode* node, System_Xml::System::Xml::XmlNode* oldParent, System_Xml::System::Xml::XmlNode* newParent, mscorlib::System::String* oldValue, mscorlib::System::String* newValue, System_Xml::System::Xml::XmlNodeChangedAction action);
		void BeforeEvent(System_Xml::System::Xml::XmlNodeChangedEventArgs* args);
		void AfterEvent(System_Xml::System::Xml::XmlNodeChangedEventArgs* args);
		bool get_IsText();
		static void NestTextNodes(System_Xml::System::Xml::XmlNode* prevNode, System_Xml::System::Xml::XmlNode* nextNode);
		static void UnnestTextNodes(System_Xml::System::Xml::XmlNode* prevNode, System_Xml::System::Xml::XmlNode* nextNode);
	};
}

