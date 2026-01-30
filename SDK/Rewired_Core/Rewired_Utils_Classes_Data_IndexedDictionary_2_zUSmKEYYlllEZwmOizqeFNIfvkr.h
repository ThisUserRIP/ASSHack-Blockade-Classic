#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_Data_IndexedDictionary_2.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename TKey, typename TValue> struct IndexedDictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	template <typename TKey, typename TValue> struct IndexedDictionary_2_zUSmKEYYlllEZwmOizqeFNIfvkr
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TKey::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TValue::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(Rewired_Core::Rewired::Utils::Classes::Data::IndexedDictionary_2<TKey, TValue>::GetIl2CppClass(), "zUSmKEYYlllEZwmOizqeFNIfvkr")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		TKey yObPtVwBIuPaEtwbACJmfiUfXbw;
		TValue cRFgmtiZwTyGEgaXHHzAIuaDikZU;
		void _ctor(TKey* key, TValue* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { GetGenericTypeName<TKey>(), GetGenericTypeName<TValue>() });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)key;
			params[1] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, TValue> oGFdHWVAmeeruIvOwElmbPOUxhO()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "oGFdHWVAmeeruIvOwElmbPOUxhO");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, TValue> ret;
				std::memset(&ret, 0, sizeof(mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, TValue>));
				return ret;
			}
			return static_cast<mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(*(mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, TValue>*)il2cpp_object_unbox(returnValue));
		}
	};
}

