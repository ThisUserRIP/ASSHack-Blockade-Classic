#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization
{
	struct SerializationEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* m_type;
		mscorlib::System::Object* m_value;
		mscorlib::System::String* m_name;
		mscorlib::System::Object* get_Value();
		mscorlib::System::String* get_Name();
		void _ctor(mscorlib::System::String* entryName, mscorlib::System::Object* entryValue, mscorlib::System::Type* entryType);
	};
}

