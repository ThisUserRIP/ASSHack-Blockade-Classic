#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Serialization { struct ObjectMap; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Xml_Serialization_SerializationFormat.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlMapping : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::ObjectMap* map;
		mscorlib::System::Collections::ArrayList* relatedMaps;
		System_Xml::System::Xml::Serialization::SerializationFormat format;
		mscorlib::System::String* _elementName;
		mscorlib::System::String* _namespace;
		mscorlib::System::String* key;
		void _ctor(mscorlib::System::String* elementName, mscorlib::System::String* ns);
		mscorlib::System::String* get_ElementName();
		mscorlib::System::String* get_Namespace();
		void SetKey(mscorlib::System::String* key);
		System_Xml::System::Xml::Serialization::ObjectMap* get_ObjectMap();
		void set_ObjectMap(System_Xml::System::Xml::Serialization::ObjectMap* value);
		mscorlib::System::Collections::ArrayList* get_RelatedMaps();
		void set_RelatedMaps(mscorlib::System::Collections::ArrayList* value);
		System_Xml::System::Xml::Serialization::SerializationFormat get_Format();
		void set_Format(System_Xml::System::Xml::Serialization::SerializationFormat value);
	};
}

