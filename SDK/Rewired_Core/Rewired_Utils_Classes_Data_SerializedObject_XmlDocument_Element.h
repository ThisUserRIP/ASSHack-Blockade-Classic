#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Utils_Classes_Data_SerializedObject_XmlDocument.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject_XmlDocument; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct SerializedObject_XmlDocument_Element : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlDocument_Element* parent;
		mscorlib::System::String* content;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* attributes;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlDocument_Element>* children;
		int32_t get_childCount();
		int32_t get_attributeCount();
		void _ctor(mscorlib::System::String* name, Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlDocument_Element* parent);
		void AddChild(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlDocument_Element* element);
		void AddAttribute(mscorlib::System::String* key, mscorlib::System::String* value);
		bool ContainsChild(mscorlib::System::String* name);
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlDocument_Element* FindChild(mscorlib::System::String* name);
		mscorlib::System::Object* GetSerializedObject();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* s, int32_t indent);
	};
}

