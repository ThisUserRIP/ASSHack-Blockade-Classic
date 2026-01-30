#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_ObjectMap.h"
namespace System_Xml::System::Xml::Serialization { struct EnumMap_EnumMapMember; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Serialization
{
	struct EnumMap : System_Xml::System::Xml::Serialization::ObjectMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System_Xml::System::Xml::Serialization::EnumMap_EnumMapMember*>* _members;
		bool _isFlags;
		IL2CPP::Array<mscorlib::System::String*>* _enumNames;
		IL2CPP::Array<mscorlib::System::String*>* _xmlNames;
		IL2CPP::Array<int64_t>* _values;
		void _ctor(IL2CPP::Array<System_Xml::System::Xml::Serialization::EnumMap_EnumMapMember*>* members, bool isFlags);
		bool get_IsFlags();
		IL2CPP::Array<mscorlib::System::String*>* get_EnumNames();
		IL2CPP::Array<mscorlib::System::String*>* get_XmlNames();
		IL2CPP::Array<int64_t>* get_Values();
		mscorlib::System::String* GetXmlName(mscorlib::System::String* typeName, mscorlib::System::Object* enumValue);
		mscorlib::System::String* GetEnumName(mscorlib::System::String* typeName, mscorlib::System::String* xmlName);
	};
}

