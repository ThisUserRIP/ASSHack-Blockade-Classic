#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Collections
{
	struct DictionaryEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* _key;
		mscorlib::System::Object* _value;
		void _ctor(mscorlib::System::Object* key, mscorlib::System::Object* value);
		mscorlib::System::Object* get_Key();
		mscorlib::System::Object* get_Value();
	};
}

