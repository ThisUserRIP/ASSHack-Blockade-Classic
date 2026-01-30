#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Collections_Generic_SortedList_2.h"
namespace System::System::Collections::Generic { template <typename TKey, typename TValue> struct SortedList_2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Collections_DictionaryEntry.h"
namespace mscorlib::System::Collections { struct DictionaryEntry; };
#include "..\mscorlib\System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };

namespace System::System::Collections::Generic
{
	template <typename TKey, typename TValue> struct SortedList_2_Enumerator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TKey::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TValue::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(System::Collections::Generic::SortedList_2<TKey, TValue>::GetIl2CppClass(), "Enumerator")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList;
		TKey _key;
		TValue _value;
		int32_t _index;
		int32_t _version;
		int32_t _getEnumeratorRetType;
		void _ctor(System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList, int32_t getEnumeratorRetType)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.SortedList`2<TKey,TValue>", "System.Int32" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)sortedList;
			params[1] = (intptr_t)&getEnumeratorRetType;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Dispose()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Object* System_Collections_IDictionaryEnumerator_get_Key()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IDictionaryEnumerator.get_Key");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Object*)returnValue;
		}
		bool MoveNext()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveNext");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		mscorlib::System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IDictionaryEnumerator.get_Entry");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				mscorlib::System::Collections::DictionaryEntry ret;
				std::memset(&ret, 0, sizeof(mscorlib::System::Collections::DictionaryEntry));
				return ret;
			}
			return static_cast<mscorlib::System::Collections::DictionaryEntry>(*(mscorlib::System::Collections::DictionaryEntry*)il2cpp_object_unbox(returnValue));
		}
		mscorlib::System::Collections::Generic::KeyValuePair_2<TKey, TValue> get_Current()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Current");
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
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IEnumerator.get_Current");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Object*)returnValue;
		}
		mscorlib::System::Object* System_Collections_IDictionaryEnumerator_get_Value()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IDictionaryEnumerator.get_Value");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Object*)returnValue;
		}
		void System_Collections_IEnumerator_Reset()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IEnumerator.Reset");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

