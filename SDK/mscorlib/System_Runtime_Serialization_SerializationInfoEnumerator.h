#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_SerializationEntry.h"
namespace mscorlib::System::Runtime::Serialization { struct SerializationEntry; };

namespace mscorlib::System::Runtime::Serialization
{
	struct SerializationInfoEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::String*>* m_members;
		IL2CPP::Array<mscorlib::System::Object*>* m_data;
		IL2CPP::Array<mscorlib::System::Type*>* m_types;
		int32_t m_numItems;
		int32_t m_currItem;
		bool m_current;
		void _ctor(IL2CPP::Array<mscorlib::System::String*>* members, IL2CPP::Array<mscorlib::System::Object*>* info, IL2CPP::Array<mscorlib::System::Type*>* types, int32_t numItems);
		bool MoveNext();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		mscorlib::System::Runtime::Serialization::SerializationEntry get_Current();
		void Reset();
		mscorlib::System::String* get_Name();
		mscorlib::System::Object* get_Value();
		mscorlib::System::Type* get_ObjectType();
	};
}

