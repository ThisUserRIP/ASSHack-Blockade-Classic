#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Serialization_XmlSerializationReader.h"
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationReader; };
namespace System_Xml::System::Xml::Serialization { struct XmlSerializationCollectionFixupCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationReader_CollectionFixup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback;
		mscorlib::System::Object* collection;
		mscorlib::System::Object* collectionItems;
		mscorlib::System::String* id;
		void _ctor(mscorlib::System::Object* collection, System_Xml::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback, mscorlib::System::String* id);
		System_Xml::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* get_Callback();
		mscorlib::System::Object* get_Collection();
		mscorlib::System::Object* get_Id();
		mscorlib::System::Object* get_CollectionItems();
		void set_CollectionItems(mscorlib::System::Object* value);
	};
}

