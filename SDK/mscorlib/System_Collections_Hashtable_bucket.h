#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Collections_Hashtable.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Collections
{
	struct Hashtable_bucket
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* key;
		mscorlib::System::Object* val;
		int32_t hash_coll;
	};
}

