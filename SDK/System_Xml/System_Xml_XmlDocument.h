#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNode.h"
namespace System_Xml::System::Xml { struct XmlImplementation; };
namespace System_Xml::System::Xml { struct DomNameTable; };
namespace System_Xml::System::Xml { struct XmlLinkedNode; };
namespace System_Xml::System::Xml { struct XmlNamedNodeMap; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSet; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlNodeChangedEventHandler; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlResolver; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct EmptyEnumerator; };
namespace System_Xml::System::Xml::Schema { struct IXmlSchemaInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct XmlName; };
namespace mscorlib::System { struct WeakReference; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml { struct XmlElement; };
namespace System_Xml::System::Xml { struct XmlNode; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml { struct XmlDocumentType; };
namespace System_Xml::System::Xml { struct XmlDeclaration; };
namespace System_Xml::System::Xml { struct XmlCDataSection; };
namespace System_Xml::System::Xml { struct XmlComment; };
namespace System_Xml::System::Xml { struct XmlDocumentFragment; };
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
namespace System_Xml::System::Xml { struct XmlAttribute; };
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
namespace System_Xml::System::Xml { struct XmlEntityReference; };
namespace System_Xml::System::Xml { struct XmlProcessingInstruction; };
namespace System_Xml::System::Xml { struct XmlText; };
namespace System_Xml::System::Xml { struct XmlSignificantWhitespace; };
namespace System_Xml::System::Xml { struct XmlWhitespace; };
namespace System_Xml::System::Xml { struct XmlReader; };
namespace System_Xml::System::Xml { struct XmlTextReader; };
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace System_Xml::System::Xml { struct XmlNodeChangedEventArgs; };
#include "System_Xml_XmlNodeChangedAction.h"
namespace System_Xml::System::Xml { struct XmlEntity; };

namespace System_Xml::System::Xml
{
	struct XmlDocument : System_Xml::System::Xml::XmlNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlImplementation* implementation;
		System_Xml::System::Xml::DomNameTable* domNameTable;
		System_Xml::System::Xml::XmlLinkedNode* lastChild;
		System_Xml::System::Xml::XmlNamedNodeMap* entities;
		mscorlib::System::Collections::Hashtable* htElementIdMap;
		mscorlib::System::Collections::Hashtable* htElementIDAttrDecl;
		System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo;
		System_Xml::System::Xml::Schema::XmlSchemaSet* schemas;
		bool reportValidity;
		bool actualLoadingStatus;
		System_Xml::System::Xml::XmlNodeChangedEventHandler* onNodeInsertingDelegate;
		System_Xml::System::Xml::XmlNodeChangedEventHandler* onNodeInsertedDelegate;
		System_Xml::System::Xml::XmlNodeChangedEventHandler* onNodeRemovingDelegate;
		System_Xml::System::Xml::XmlNodeChangedEventHandler* onNodeRemovedDelegate;
		System_Xml::System::Xml::XmlNodeChangedEventHandler* onNodeChangingDelegate;
		System_Xml::System::Xml::XmlNodeChangedEventHandler* onNodeChangedDelegate;
		bool fEntRefNodesPresent;
		bool fCDataNodesPresent;
		bool preserveWhitespace;
		bool isLoading;
		mscorlib::System::String* strDocumentName;
		mscorlib::System::String* strDocumentFragmentName;
		mscorlib::System::String* strCommentName;
		mscorlib::System::String* strTextName;
		mscorlib::System::String* strCDataSectionName;
		mscorlib::System::String* strEntityName;
		mscorlib::System::String* strID;
		mscorlib::System::String* strXmlns;
		mscorlib::System::String* strXml;
		mscorlib::System::String* strSpace;
		mscorlib::System::String* strLang;
		mscorlib::System::String* strEmpty;
		mscorlib::System::String* strNonSignificantWhitespaceName;
		mscorlib::System::String* strSignificantWhitespaceName;
		mscorlib::System::String* strReservedXmlns;
		mscorlib::System::String* strReservedXml;
		mscorlib::System::String* baseURI;
		System_Xml::System::Xml::XmlResolver* resolver;
		bool bSetResolver;
		mscorlib::System::Object* objLock;
		struct StaticFields
		{
			System_Xml::System::Xml::EmptyEnumerator* EmptyEnumerator;
			System_Xml::System::Xml::Schema::IXmlSchemaInfo* NotKnownSchemaInfo;
			System_Xml::System::Xml::Schema::IXmlSchemaInfo* ValidSchemaInfo;
			System_Xml::System::Xml::Schema::IXmlSchemaInfo* InvalidSchemaInfo;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(System_Xml::System::Xml::XmlNameTable* nt);
		void _ctor(System_Xml::System::Xml::XmlImplementation* imp);
		System_Xml::System::Xml::Schema::SchemaInfo* get_DtdSchemaInfo();
		void set_DtdSchemaInfo(System_Xml::System::Xml::Schema::SchemaInfo* value);
		static void CheckName(mscorlib::System::String* name);
		System_Xml::System::Xml::XmlName* AddXmlName(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
		System_Xml::System::Xml::XmlName* GetXmlName(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
		System_Xml::System::Xml::XmlName* AddAttrXmlName(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
		bool AddIdInfo(System_Xml::System::Xml::XmlName* eleName, System_Xml::System::Xml::XmlName* attrName);
		System_Xml::System::Xml::XmlName* GetIDInfoByElement_(System_Xml::System::Xml::XmlName* eleName);
		System_Xml::System::Xml::XmlName* GetIDInfoByElement(System_Xml::System::Xml::XmlName* eleName);
		mscorlib::System::WeakReference* GetElement(mscorlib::System::Collections::ArrayList* elementList, System_Xml::System::Xml::XmlElement* elem);
		void AddElementWithId(mscorlib::System::String* id, System_Xml::System::Xml::XmlElement* elem);
		void RemoveElementWithId(mscorlib::System::String* id, System_Xml::System::Xml::XmlElement* elem);
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		System_Xml::System::Xml::XmlNode* get_ParentNode();
		System_Xml::System::Xml::XmlDocumentType* get_DocumentType();
		System_Xml::System::Xml::XmlDeclaration* get_Declaration();
		System_Xml::System::Xml::XmlImplementation* get_Implementation();
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_LocalName();
		System_Xml::System::Xml::XmlElement* get_DocumentElement();
		bool get_IsContainer();
		System_Xml::System::Xml::XmlLinkedNode* get_LastNode();
		void set_LastNode(System_Xml::System::Xml::XmlLinkedNode* value);
		System_Xml::System::Xml::XmlDocument* get_OwnerDocument();
		void set_Schemas(System_Xml::System::Xml::Schema::XmlSchemaSet* value);
		bool get_CanReportValidity();
		bool get_HasSetResolver();
		System_Xml::System::Xml::XmlResolver* GetResolver();
		bool IsValidChildType(System_Xml::System::Xml::XmlNodeType type);
		bool HasNodeTypeInPrevSiblings(System_Xml::System::Xml::XmlNodeType nt, System_Xml::System::Xml::XmlNode* refNode);
		bool HasNodeTypeInNextSiblings(System_Xml::System::Xml::XmlNodeType nt, System_Xml::System::Xml::XmlNode* refNode);
		bool CanInsertAfter(System_Xml::System::Xml::XmlNode* newChild, System_Xml::System::Xml::XmlNode* refChild);
		void SetDefaultNamespace(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String& namespaceURI);
		System_Xml::System::Xml::XmlCDataSection* CreateCDataSection(mscorlib::System::String* data);
		System_Xml::System::Xml::XmlComment* CreateComment(mscorlib::System::String* data);
		System_Xml::System::Xml::XmlDocumentType* CreateDocumentType(mscorlib::System::String* name, mscorlib::System::String* publicId, mscorlib::System::String* systemId, mscorlib::System::String* internalSubset);
		System_Xml::System::Xml::XmlDocumentFragment* CreateDocumentFragment();
		void AddDefaultAttributes(System_Xml::System::Xml::XmlElement* elem);
		System_Xml::System::Xml::Schema::SchemaElementDecl* GetSchemaElementDecl(System_Xml::System::Xml::XmlElement* elem);
		System_Xml::System::Xml::XmlAttribute* PrepareDefaultAttribute(System_Xml::System::Xml::Schema::SchemaAttDef* attdef, mscorlib::System::String* attrPrefix, mscorlib::System::String* attrLocalname, mscorlib::System::String* attrNamespaceURI);
		System_Xml::System::Xml::XmlEntityReference* CreateEntityReference(mscorlib::System::String* name);
		System_Xml::System::Xml::XmlProcessingInstruction* CreateProcessingInstruction(mscorlib::System::String* target, mscorlib::System::String* data);
		System_Xml::System::Xml::XmlDeclaration* CreateXmlDeclaration(mscorlib::System::String* version, mscorlib::System::String* encoding, mscorlib::System::String* standalone);
		System_Xml::System::Xml::XmlText* CreateTextNode(mscorlib::System::String* text);
		System_Xml::System::Xml::XmlSignificantWhitespace* CreateSignificantWhitespace(mscorlib::System::String* text);
		System_Xml::System::Xml::XmlWhitespace* CreateWhitespace(mscorlib::System::String* text);
		System_Xml::System::Xml::XmlNode* ImportNodeInternal(System_Xml::System::Xml::XmlNode* node, bool deep);
		void ImportAttributes(System_Xml::System::Xml::XmlNode* fromElem, System_Xml::System::Xml::XmlNode* toElem);
		void ImportChildren(System_Xml::System::Xml::XmlNode* fromNode, System_Xml::System::Xml::XmlNode* toNode, bool deep);
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		System_Xml::System::Xml::XmlAttribute* CreateAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI);
		System_Xml::System::Xml::XmlAttribute* CreateDefaultAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI);
		System_Xml::System::Xml::XmlElement* CreateElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceURI);
		bool get_IsReadOnly();
		System_Xml::System::Xml::XmlNamedNodeMap* get_Entities();
		void set_Entities(System_Xml::System::Xml::XmlNamedNodeMap* value);
		bool get_IsLoading();
		void set_IsLoading(bool value);
		bool get_ActualLoadingStatus();
		System_Xml::System::Xml::XmlNode* ReadNode(System_Xml::System::Xml::XmlReader* reader);
		System_Xml::System::Xml::XmlTextReader* SetupReader(System_Xml::System::Xml::XmlTextReader* tr);
		void Load(System_Xml::System::Xml::XmlReader* reader);
		void LoadXml(mscorlib::System::String* xml);
		void set_InnerText(mscorlib::System::String* value);
		void set_InnerXml(mscorlib::System::String* value);
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		void WriteContentTo(System_Xml::System::Xml::XmlWriter* xw);
		System_Xml::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(System_Xml::System::Xml::XmlNode* node, System_Xml::System::Xml::XmlNode* oldParent, System_Xml::System::Xml::XmlNode* newParent, mscorlib::System::String* oldValue, mscorlib::System::String* newValue, System_Xml::System::Xml::XmlNodeChangedAction action);
		System_Xml::System::Xml::XmlNodeChangedEventArgs* GetInsertEventArgsForLoad(System_Xml::System::Xml::XmlNode* node, System_Xml::System::Xml::XmlNode* newParent);
		void BeforeEvent(System_Xml::System::Xml::XmlNodeChangedEventArgs* args);
		void AfterEvent(System_Xml::System::Xml::XmlNodeChangedEventArgs* args);
		System_Xml::System::Xml::XmlAttribute* GetDefaultAttribute(System_Xml::System::Xml::XmlElement* elem, mscorlib::System::String* attrPrefix, mscorlib::System::String* attrLocalname, mscorlib::System::String* attrNamespaceURI);
		System_Xml::System::Xml::XmlEntity* GetEntityNode(mscorlib::System::String* name);
		mscorlib::System::String* get_BaseURI();
		void SetBaseURI(mscorlib::System::String* inBaseURI);
		System_Xml::System::Xml::XmlNode* AppendChildForLoad(System_Xml::System::Xml::XmlNode* newChild, System_Xml::System::Xml::XmlDocument* doc);
		static void _cctor();
	};
}

