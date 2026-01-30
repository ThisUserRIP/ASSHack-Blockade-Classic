#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlSerializationGeneratedCode.h"
namespace mscorlib::System::Runtime::Serialization { struct ObjectIDGenerator; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace mscorlib::System::Collections { struct Queue; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializerNamespaces; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationWriteCallback; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml { struct XmlNode; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };
namespace System_Xml::System::Xml::Serialization { struct IXmlSerializable; };
namespace mscorlib::System::Collections { struct ICollection; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationWriter : System_Xml::System::Xml::Serialization::XmlSerializationGeneratedCode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Serialization::ObjectIDGenerator* idGenerator;
		int32_t qnameCount;
		bool topLevelElement;
		mscorlib::System::Collections::ArrayList* namespaces;
		System_Xml::System::Xml::XmlWriter* writer;
		mscorlib::System::Collections::Queue* referencedElements;
		mscorlib::System::Collections::Hashtable* callbacks;
		mscorlib::System::Collections::Hashtable* serializedObjects;
		void _ctor();
		void Initialize(System_Xml::System::Xml::XmlWriter* writer, System_Xml::System::Xml::Serialization::XmlSerializerNamespaces* nss);
		System_Xml::System::Xml::XmlWriter* get_Writer();
		void AddWriteCallback(mscorlib::System::Type* type, mscorlib::System::String* typeName, mscorlib::System::String* typeNs, System_Xml::System::Xml::Serialization::XmlSerializationWriteCallback* callback);
		mscorlib::System::Exception* CreateUnknownAnyElementException(mscorlib::System::String* name, mscorlib::System::String* ns);
		mscorlib::System::Exception* CreateUnknownTypeException(mscorlib::System::Object* o);
		mscorlib::System::Exception* CreateUnknownTypeException(mscorlib::System::Type* type);
		mscorlib::System::String* FromXmlQualifiedName(System_Xml::System::Xml::XmlQualifiedName* xmlQualifiedName);
		mscorlib::System::String* GetId(mscorlib::System::Object* o, bool addToReferencesList);
		bool AlreadyQueued(mscorlib::System::Object* ob);
		mscorlib::System::String* GetNamespacePrefix(mscorlib::System::String* ns);
		mscorlib::System::String* GetQualifiedName(mscorlib::System::String* name, mscorlib::System::String* ns);
		void InitCallbacks();
		void TopLevelElement();
		void WriteAttribute(mscorlib::System::String* localName, mscorlib::System::String* ns, mscorlib::System::String* value);
		void WriteAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns, mscorlib::System::String* value);
		void WriteXmlNode(System_Xml::System::Xml::XmlNode* node);
		void WriteElementEncoded(System_Xml::System::Xml::XmlNode* node, mscorlib::System::String* name, mscorlib::System::String* ns, bool isNullable, bool any);
		void WriteElementLiteral(System_Xml::System::Xml::XmlNode* node, mscorlib::System::String* name, mscorlib::System::String* ns, bool isNullable, bool any);
		void WriteElementQualifiedName(mscorlib::System::String* localName, mscorlib::System::String* ns, System_Xml::System::Xml::XmlQualifiedName* value);
		void WriteElementQualifiedName(mscorlib::System::String* localName, mscorlib::System::String* ns, System_Xml::System::Xml::XmlQualifiedName* value, System_Xml::System::Xml::XmlQualifiedName* xsiType);
		void WriteElementString(mscorlib::System::String* localName, mscorlib::System::String* ns, mscorlib::System::String* value);
		void WriteElementString(mscorlib::System::String* localName, mscorlib::System::String* ns, mscorlib::System::String* value, System_Xml::System::Xml::XmlQualifiedName* xsiType);
		void WriteEndElement();
		void WriteEndElement(mscorlib::System::Object* o);
		void WriteNamespaceDeclarations(System_Xml::System::Xml::Serialization::XmlSerializerNamespaces* xmlns);
		void WriteNullableQualifiedNameEncoded(mscorlib::System::String* name, mscorlib::System::String* ns, System_Xml::System::Xml::XmlQualifiedName* value, System_Xml::System::Xml::XmlQualifiedName* xsiType);
		void WriteNullableQualifiedNameLiteral(mscorlib::System::String* name, mscorlib::System::String* ns, System_Xml::System::Xml::XmlQualifiedName* value);
		void WriteNullableStringEncoded(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::String* value, System_Xml::System::Xml::XmlQualifiedName* xsiType);
		void WriteNullableStringLiteral(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::String* value);
		void WriteNullTagEncoded(mscorlib::System::String* name, mscorlib::System::String* ns);
		void WriteNullTagLiteral(mscorlib::System::String* name, mscorlib::System::String* ns);
		void WritePotentiallyReferencingElement(mscorlib::System::String* n, mscorlib::System::String* ns, mscorlib::System::Object* o, mscorlib::System::Type* ambientType, bool suppressReference, bool isNullable);
		void WriteReferencedElements();
		bool IsPrimitiveArray(System_Xml::System::Xml::Serialization::TypeData* td);
		void WriteArray(mscorlib::System::Object* o, System_Xml::System::Xml::Serialization::TypeData* td);
		void WriteReferencingElement(mscorlib::System::String* n, mscorlib::System::String* ns, mscorlib::System::Object* o, bool isNullable);
		void CheckReferenceQueue();
		void WriteSerializable(System_Xml::System::Xml::Serialization::IXmlSerializable* serializable, mscorlib::System::String* name, mscorlib::System::String* ns, bool isNullable);
		void WriteSerializable(System_Xml::System::Xml::Serialization::IXmlSerializable* serializable, mscorlib::System::String* name, mscorlib::System::String* ns, bool isNullable, bool wrapped);
		void WriteStartDocument();
		void WriteStartElement(mscorlib::System::String* name, mscorlib::System::String* ns);
		void WriteStartElement(mscorlib::System::String* name, mscorlib::System::String* ns, bool writePrefixed);
		void WriteStartElement(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* o);
		void WriteStartElement(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* o, bool writePrefixed);
		void WriteStartElement(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* o, bool writePrefixed, mscorlib::System::Collections::ICollection* namespaces);
		void WriteTypedPrimitive(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* o, bool xsiType);
		void WriteValue(mscorlib::System::String* value);
		void WriteXmlAttribute(System_Xml::System::Xml::XmlNode* node, mscorlib::System::Object* container);
		void WriteXsiType(mscorlib::System::String* name, mscorlib::System::String* ns);
	};
}

