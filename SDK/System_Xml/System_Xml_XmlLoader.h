#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace System_Xml::System::Xml { struct XmlReader; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlNode; };
namespace System_Xml::System::Xml { struct XmlAttribute; };
namespace System_Xml::System::Xml { struct XmlEntityReference; };
namespace System_Xml::System::Xml { struct XmlDeclaration; };
namespace System_Xml::System::Xml { struct XmlDocumentType; };
namespace System_Xml::System::Xml { struct XmlResolver; };
namespace System_Xml::System::Xml { struct IDtdInfo; };
namespace System_Xml::System::Xml { struct XmlParserContext; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml { struct XmlElement; };
namespace System_Xml::System::Xml { struct XmlEntity; };
namespace mscorlib::System { struct Exception; };

namespace System_Xml::System::Xml
{
	struct XmlLoader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlDocument* doc;
		System_Xml::System::Xml::XmlReader* reader;
		bool preserveWhitespace;
		void _ctor();
		void Load(System_Xml::System::Xml::XmlDocument* doc, System_Xml::System::Xml::XmlReader* reader, bool preserveWhitespace);
		void LoadDocSequence(System_Xml::System::Xml::XmlDocument* parentDoc);
		System_Xml::System::Xml::XmlNode* ReadCurrentNode(System_Xml::System::Xml::XmlDocument* doc, System_Xml::System::Xml::XmlReader* reader);
		System_Xml::System::Xml::XmlNode* LoadNode(bool skipOverWhitespace);
		System_Xml::System::Xml::XmlAttribute* LoadAttributeNode();
		System_Xml::System::Xml::XmlAttribute* LoadDefaultAttribute();
		void LoadAttributeValue(System_Xml::System::Xml::XmlNode* parent, bool direct);
		System_Xml::System::Xml::XmlEntityReference* LoadEntityReferenceNode(bool direct);
		System_Xml::System::Xml::XmlDeclaration* LoadDeclarationNode();
		System_Xml::System::Xml::XmlDocumentType* LoadDocumentTypeNode();
		System_Xml::System::Xml::XmlNode* LoadNodeDirect();
		System_Xml::System::Xml::XmlAttribute* LoadAttributeNodeDirect();
		void ParseDocumentType(System_Xml::System::Xml::XmlDocumentType* dtNode);
		void ParseDocumentType(System_Xml::System::Xml::XmlDocumentType* dtNode, bool bUseResolver, System_Xml::System::Xml::XmlResolver* resolver);
		void LoadDocumentType(System_Xml::System::Xml::IDtdInfo* dtdInfo, System_Xml::System::Xml::XmlDocumentType* dtNode);
		System_Xml::System::Xml::XmlParserContext* GetContext(System_Xml::System::Xml::XmlNode* node);
		System_Xml::System::Xml::XmlNamespaceManager* ParsePartialContent(System_Xml::System::Xml::XmlNode* parentNode, mscorlib::System::String* innerxmltext, System_Xml::System::Xml::XmlNodeType nt);
		void LoadInnerXmlElement(System_Xml::System::Xml::XmlElement* node, mscorlib::System::String* innerxmltext);
		void LoadInnerXmlAttribute(System_Xml::System::Xml::XmlAttribute* node, mscorlib::System::String* innerxmltext);
		void RemoveDuplicateNamespace(System_Xml::System::Xml::XmlElement* elem, System_Xml::System::Xml::XmlNamespaceManager* mgr, bool fCheckElemAttrs);
		mscorlib::System::String* EntitizeName(mscorlib::System::String* name);
		void ExpandEntity(System_Xml::System::Xml::XmlEntity* ent);
		void ExpandEntityReference(System_Xml::System::Xml::XmlEntityReference* eref);
		System_Xml::System::Xml::XmlReader* CreateInnerXmlReader(mscorlib::System::String* xmlFragment, System_Xml::System::Xml::XmlNodeType nt, System_Xml::System::Xml::XmlParserContext* context, System_Xml::System::Xml::XmlDocument* doc);
		static void ParseXmlDeclarationValue(mscorlib::System::String* strValue, mscorlib::System::String& version, mscorlib::System::String& encoding, mscorlib::System::String& standalone);
		static mscorlib::System::Exception* UnexpectedNodeType(System_Xml::System::Xml::XmlNodeType nodetype);
	};
}

