#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlLinkedNode.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlNamedNodeMap; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlDocument; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml { struct XmlNode; };
namespace System_Xml::System::Xml { struct XmlWriter; };

namespace System_Xml::System::Xml
{
	struct XmlDocumentType : System_Xml::System::Xml::XmlLinkedNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::String* publicId;
		mscorlib::System::String* systemId;
		mscorlib::System::String* internalSubset;
		bool namespaces;
		System_Xml::System::Xml::XmlNamedNodeMap* entities;
		System_Xml::System::Xml::XmlNamedNodeMap* notations;
		System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo;
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* publicId, mscorlib::System::String* systemId, mscorlib::System::String* internalSubset, System_Xml::System::Xml::XmlDocument* doc);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_LocalName();
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		System_Xml::System::Xml::XmlNode* CloneNode(bool deep);
		bool get_IsReadOnly();
		System_Xml::System::Xml::XmlNamedNodeMap* get_Entities();
		System_Xml::System::Xml::XmlNamedNodeMap* get_Notations();
		mscorlib::System::String* get_PublicId();
		mscorlib::System::String* get_SystemId();
		mscorlib::System::String* get_InternalSubset();
		bool get_ParseWithNamespaces();
		void WriteTo(System_Xml::System::Xml::XmlWriter* w);
		void WriteContentTo(System_Xml::System::Xml::XmlWriter* w);
		System_Xml::System::Xml::Schema::SchemaInfo* get_DtdSchemaInfo();
		void set_DtdSchemaInfo(System_Xml::System::Xml::Schema::SchemaInfo* value);
	};
}

