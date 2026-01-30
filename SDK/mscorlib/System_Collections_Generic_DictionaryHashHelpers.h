#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
namespace mscorlib::System::Runtime::CompilerServices { template <typename TKey, typename TValue> struct ConditionalWeakTable_2; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Collections::Generic
{
	struct DictionaryHashHelpers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2<mscorlib::System::Object, mscorlib::System::Runtime::Serialization::SerializationInfo>* _SerializationInfoTable_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2<mscorlib::System::Object, mscorlib::System::Runtime::Serialization::SerializationInfo>* get_SerializationInfoTable();
		static void _cctor();
	};
}

