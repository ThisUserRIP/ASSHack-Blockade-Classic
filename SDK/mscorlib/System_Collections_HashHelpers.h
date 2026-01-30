#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
namespace mscorlib::System::Runtime::CompilerServices { template <typename TKey, typename TValue> struct ConditionalWeakTable_2; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Collections
{
	struct HashHelpers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<int32_t>* primes;
			mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2<mscorlib::System::Object, mscorlib::System::Runtime::Serialization::SerializationInfo>* s_SerializationInfoTable;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2<mscorlib::System::Object, mscorlib::System::Runtime::Serialization::SerializationInfo>* get_SerializationInfoTable();
		static bool IsPrime(int32_t candidate);
		static int32_t GetPrime(int32_t min);
		static int32_t ExpandPrime(int32_t oldSize);
		static void _cctor();
	};
}

