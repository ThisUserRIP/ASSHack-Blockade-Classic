#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Concurrent { template <typename TKey, typename TValue> struct ConcurrentDictionary_2; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct NameCache : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		struct StaticFields
		{
			mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2<mscorlib::System::String, mscorlib::System::Object>* ht;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Object* GetCachedValue(mscorlib::System::String* name);
		void SetCachedValue(mscorlib::System::Object* value);
		void _ctor();
		static void _cctor();
	};
}

