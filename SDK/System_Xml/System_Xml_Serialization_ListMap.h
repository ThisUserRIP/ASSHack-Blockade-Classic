#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_ObjectMap.h"
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapElementInfoList; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapElementInfo; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml::Serialization
{
	struct ListMap : System_Xml::System::Xml::Serialization::ObjectMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* _itemInfo;
		mscorlib::System::String* _choiceMember;
		void set_ChoiceMember(mscorlib::System::String* value);
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ItemInfo();
		void set_ItemInfo(System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* value);
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(mscorlib::System::Object* ob, int32_t index, mscorlib::System::Object* memberValue);
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(mscorlib::System::String* elementName, mscorlib::System::String* ns);
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* FindTextElement();
		void GetArrayType(int32_t itemCount, mscorlib::System::String& localName, mscorlib::System::String& ns);
		bool Equals(mscorlib::System::Object* other);
		int32_t GetHashCode();
		void _ctor();
	};
}

