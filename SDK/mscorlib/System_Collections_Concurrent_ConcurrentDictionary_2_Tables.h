#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_Concurrent_ConcurrentDictionary_2.h"
namespace mscorlib::System::Collections::Concurrent { template <typename TKey, typename TValue> struct ConcurrentDictionary_2; };
namespace mscorlib::System::Collections::Concurrent { template <typename TKey, typename TValue> struct ConcurrentDictionary_2_Node; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Collections::Concurrent
{
	template <typename TKey, typename TValue> struct ConcurrentDictionary_2_Tables : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TKey::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TValue::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::GetIl2CppClass(), "Tables")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		IL2CPP::Array<mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>* _buckets;
		IL2CPP::Array<mscorlib::System::Object*>* _locks;
		IL2CPP::Array<int32_t>* _countPerLock;
		void _ctor(IL2CPP::Array<mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>* buckets, IL2CPP::Array<mscorlib::System::Object*>* locks, IL2CPP::Array<int32_t>* countPerLock)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[]", "System.Object[]", "System.Int32[]" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)buckets;
			params[1] = (intptr_t)locks;
			params[2] = (intptr_t)countPerLock;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

