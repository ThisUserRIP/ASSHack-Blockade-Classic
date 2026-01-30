#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Runtime_CompilerServices_Ephemeron.h"
namespace mscorlib::System::Runtime::CompilerServices { struct Ephemeron; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::CompilerServices { template <typename TKey, typename TValue> struct ConditionalWeakTable_2_CreateValueCallback; };

namespace mscorlib::System::Runtime::CompilerServices
{
	template <typename TKey, typename TValue> struct ConditionalWeakTable_2 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TKey::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TValue::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("mscorlib.dll", "System.Runtime.CompilerServices", "ConditionalWeakTable`2")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		IL2CPP::Array<mscorlib::System::Runtime::CompilerServices::Ephemeron>* data;
		mscorlib::System::Object* _lock;
		int32_t size;
		struct StaticFields
		{
			int32_t INITIAL_SIZE;
			float LOAD_FACTOR;
			float COMPACT_FACTOR;
			float EXPAND_FACTOR;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void Finalize()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void RehashWithoutResize()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RehashWithoutResize");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void RecomputeSize()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecomputeSize");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void Rehash()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rehash");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void Add(TKey* key, TValue* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { GetGenericTypeName<TKey>(), GetGenericTypeName<TValue>() });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool Remove(TKey* key)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Remove", std::vector<std::string> { GetGenericTypeName<TKey>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)key;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool TryGetValue(TKey* key, TValue& value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetValue", std::vector<std::string> { GetGenericTypeName<TKey>(), GetGenericTypeName<TValue>() + (std::string)"&" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)&value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		TValue* GetValue(TKey* key, mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>* createValueCallback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue", std::vector<std::string> { GetGenericTypeName<TKey>(), "System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue>" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)createValueCallback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TValue>(returnValue);;
		}
	};
}

