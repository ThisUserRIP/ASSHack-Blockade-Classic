#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Serialization { struct XmlMapping; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializer_SerializerData; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml::Serialization { struct UnreferencedObjectEventHandler; };
namespace System_Xml::System::Xml::Serialization { struct XmlAttributeEventHandler; };
namespace System_Xml::System::Xml::Serialization { struct XmlElementEventHandler; };
namespace System_Xml::System::Xml::Serialization { struct XmlNodeEventHandler; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlAttributeOverrides; };
namespace System_Xml::System::Xml::Serialization { struct XmlRootAttribute; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct XmlAttributeEventArgs; };
namespace System_Xml::System::Xml::Serialization { struct XmlElementEventArgs; };
namespace System_Xml::System::Xml::Serialization { struct XmlNodeEventArgs; };
namespace System_Xml::System::Xml::Serialization { struct UnreferencedObjectEventArgs; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReader; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationWriter; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::IO { struct Stream; };
namespace System_Xml::System::Xml { struct XmlReader; };
namespace mscorlib::System::IO { struct TextWriter; };
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializerNamespaces; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool customSerializer;
		System_Xml::System::Xml::Serialization::XmlMapping* typeMapping;
		System_Xml::System::Xml::Serialization::XmlSerializer_SerializerData* serializerData;
		System_Xml::System::Xml::Serialization::UnreferencedObjectEventHandler* onUnreferencedObject;
		System_Xml::System::Xml::Serialization::XmlAttributeEventHandler* onUnknownAttribute;
		System_Xml::System::Xml::Serialization::XmlElementEventHandler* onUnknownElement;
		System_Xml::System::Xml::Serialization::XmlNodeEventHandler* onUnknownNode;
		struct StaticFields
		{
			int32_t generationThreshold;
			bool backgroundGeneration;
			bool deleteTempFiles;
			bool generatorFallback;
			mscorlib::System::Collections::Hashtable* serializerTypes;
			mscorlib::System::Text::Encoding* DefaultEncoding;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor(mscorlib::System::Type* type);
		void _ctor(mscorlib::System::Type* type, System_Xml::System::Xml::Serialization::XmlAttributeOverrides* overrides, IL2CPP::Array<mscorlib::System::Type*>* extraTypes, System_Xml::System::Xml::Serialization::XmlRootAttribute* root, mscorlib::System::String* defaultNamespace);
		void OnUnknownAttribute(System_Xml::System::Xml::Serialization::XmlAttributeEventArgs* e);
		void OnUnknownElement(System_Xml::System::Xml::Serialization::XmlElementEventArgs* e);
		void OnUnknownNode(System_Xml::System::Xml::Serialization::XmlNodeEventArgs* e);
		void OnUnreferencedObject(System_Xml::System::Xml::Serialization::UnreferencedObjectEventArgs* e);
		System_Xml::System::Xml::Serialization::XmlSerializationReader* CreateReader();
		System_Xml::System::Xml::Serialization::XmlSerializationWriter* CreateWriter();
		mscorlib::System::Object* Deserialize(mscorlib::System::IO::Stream* stream);
		mscorlib::System::Object* Deserialize(System_Xml::System::Xml::XmlReader* xmlReader);
		mscorlib::System::Object* Deserialize(System_Xml::System::Xml::Serialization::XmlSerializationReader* reader);
		void Serialize(mscorlib::System::Object* o, System_Xml::System::Xml::Serialization::XmlSerializationWriter* writer);
		void Serialize(mscorlib::System::IO::Stream* stream, mscorlib::System::Object* o);
		void Serialize(mscorlib::System::IO::TextWriter* textWriter, mscorlib::System::Object* o);
		void Serialize(System_Xml::System::Xml::XmlWriter* xmlWriter, mscorlib::System::Object* o, System_Xml::System::Xml::Serialization::XmlSerializerNamespaces* namespaces);
		System_Xml::System::Xml::Serialization::XmlSerializationWriter* CreateWriter(System_Xml::System::Xml::Serialization::XmlMapping* typeMapping);
		System_Xml::System::Xml::Serialization::XmlSerializationReader* CreateReader(System_Xml::System::Xml::Serialization::XmlMapping* typeMapping);
	};
}

