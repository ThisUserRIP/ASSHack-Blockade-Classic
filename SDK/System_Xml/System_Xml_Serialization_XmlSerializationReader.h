#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlSerializationGeneratedCode.h"
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace System_Xml::System::Xml { struct XmlReader; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReader_CollectionFixup; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReader_Fixup; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReader_CollectionItemFixup; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReadCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlAttribute; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReader_WriteCallbackInfo; };
namespace System_Xml::System::Xml::Serialization { struct IXmlSerializable; };
namespace System_Xml::System::Xml { struct XmlNode; };
namespace System_Xml::System::Xml { struct XmlElement; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationReader : System_Xml::System::Xml::Serialization::XmlSerializationGeneratedCode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlDocument* document;
		System_Xml::System::Xml::XmlReader* reader;
		mscorlib::System::Collections::ArrayList* fixups;
		mscorlib::System::Collections::Hashtable* collFixups;
		mscorlib::System::Collections::ArrayList* collItemFixups;
		mscorlib::System::Collections::Hashtable* typesCallbacks;
		mscorlib::System::Collections::ArrayList* noIDTargets;
		mscorlib::System::Collections::Hashtable* targets;
		mscorlib::System::Collections::Hashtable* delayedListFixups;
		System_Xml::System::Xml::Serialization::XmlSerializer* eventSource;
		int32_t delayedFixupId;
		mscorlib::System::Collections::Hashtable* referencedObjects;
		int32_t readCount;
		int32_t whileIterationCount;
		mscorlib::System::String* w3SchemaNS;
		mscorlib::System::String* w3InstanceNS;
		mscorlib::System::String* w3InstanceNS2000;
		mscorlib::System::String* w3InstanceNS1999;
		mscorlib::System::String* soapNS;
		mscorlib::System::String* wsdlNS;
		mscorlib::System::String* nullX;
		mscorlib::System::String* nil;
		mscorlib::System::String* typeX;
		mscorlib::System::String* arrayType;
		System_Xml::System::Xml::XmlQualifiedName* arrayQName;
		void Initialize(System_Xml::System::Xml::XmlReader* reader, System_Xml::System::Xml::Serialization::XmlSerializer* eventSource);
		mscorlib::System::Collections::ArrayList* EnsureArrayList(mscorlib::System::Collections::ArrayList* list);
		mscorlib::System::Collections::Hashtable* EnsureHashtable(mscorlib::System::Collections::Hashtable* hash);
		void _ctor();
		System_Xml::System::Xml::XmlDocument* get_Document();
		System_Xml::System::Xml::XmlReader* get_Reader();
		void AddFixup(System_Xml::System::Xml::Serialization::XmlSerializationReader_CollectionFixup* fixup);
		void AddFixup(System_Xml::System::Xml::Serialization::XmlSerializationReader_Fixup* fixup);
		void AddFixup(System_Xml::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup* fixup);
		void AddReadCallback(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Type* type, System_Xml::System::Xml::Serialization::XmlSerializationReadCallback* read);
		void AddTarget(mscorlib::System::String* id, mscorlib::System::Object* o);
		mscorlib::System::String* CurrentTag();
		mscorlib::System::Exception* CreateReadOnlyCollectionException(mscorlib::System::String* name);
		mscorlib::System::Exception* CreateUnknownConstantException(mscorlib::System::String* value, mscorlib::System::Type* enumType);
		mscorlib::System::Exception* CreateUnknownNodeException();
		mscorlib::System::Exception* CreateUnknownTypeException(System_Xml::System::Xml::XmlQualifiedName* type);
		mscorlib::System::Array* EnsureArrayIndex(mscorlib::System::Array* a, int32_t index, mscorlib::System::Type* elementType);
		bool GetNullAttr();
		mscorlib::System::Object* GetTarget(mscorlib::System::String* id);
		bool TargetReady(mscorlib::System::String* id);
		System_Xml::System::Xml::XmlQualifiedName* GetXsiType();
		void InitCallbacks();
		void InitIDs();
		bool IsXmlnsAttribute(mscorlib::System::String* name);
		void ParseWsdlArrayType(System_Xml::System::Xml::XmlAttribute* attr);
		System_Xml::System::Xml::XmlQualifiedName* ReadElementQualifiedName();
		void ReadEndElement();
		bool ReadNull();
		System_Xml::System::Xml::XmlQualifiedName* ReadNullableQualifiedName();
		mscorlib::System::String* ReadNullableString();
		mscorlib::System::Object* ReadReferencedElement();
		System_Xml::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo* GetCallbackInfo(System_Xml::System::Xml::XmlQualifiedName* qname);
		mscorlib::System::Object* ReadReferencedElement(mscorlib::System::String* name, mscorlib::System::String* ns);
		bool ReadList(mscorlib::System::Object& resultList);
		void ReadReferencedElements();
		mscorlib::System::Object* ReadReferencingElement(mscorlib::System::String& fixupReference);
		mscorlib::System::Object* ReadReferencingElement(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::String& fixupReference);
		mscorlib::System::Object* ReadReferencingElement(mscorlib::System::String* name, mscorlib::System::String* ns, bool elementCanBeType, mscorlib::System::String& fixupReference);
		System_Xml::System::Xml::Serialization::IXmlSerializable* ReadSerializable(System_Xml::System::Xml::Serialization::IXmlSerializable* serializable);
		mscorlib::System::Object* ReadTypedPrimitive(System_Xml::System::Xml::XmlQualifiedName* type);
		mscorlib::System::Object* ReadTypedPrimitive(System_Xml::System::Xml::XmlQualifiedName* qname, bool reportUnknown);
		System_Xml::System::Xml::XmlNode* ReadXmlNode(bool wrapped);
		System_Xml::System::Xml::XmlDocument* ReadXmlDocument(bool wrapped);
		mscorlib::System::Array* ShrinkArray(mscorlib::System::Array* a, int32_t length, mscorlib::System::Type* elementType, bool isNullable);
		System_Xml::System::Xml::XmlQualifiedName* ToXmlQualifiedName(mscorlib::System::String* value);
		void UnknownAttribute(mscorlib::System::Object* o, System_Xml::System::Xml::XmlAttribute* attr, mscorlib::System::String* qnames);
		void UnknownElement(mscorlib::System::Object* o, System_Xml::System::Xml::XmlElement* elem, mscorlib::System::String* qnames);
		void UnknownNode(mscorlib::System::Object* o);
		void UnknownNode(mscorlib::System::Object* o, mscorlib::System::String* qnames);
		void OnUnknownNode(System_Xml::System::Xml::XmlNode* node, mscorlib::System::Object* o, mscorlib::System::String* qnames);
		void UnreferencedObject(mscorlib::System::String* id, mscorlib::System::Object* o);
	};
}

