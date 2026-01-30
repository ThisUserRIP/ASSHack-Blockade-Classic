#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct ArraySortHelper_2; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IComparer_1; };

namespace mscorlib::System::Collections::Generic
{
	template <typename TKey, typename TValue> struct ArraySortHelper_2 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TKey::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TValue::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("mscorlib.dll", "System.Collections.Generic", "ArraySortHelper`2")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* s_defaultArraySortHelper;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* get_Default()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Default");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*)returnValue;
		}
		static mscorlib::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* CreateArraySortHelper()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateArraySortHelper");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*)returnValue;
		}
		void Sort(IL2CPP::Array<TKey>* keys, IL2CPP::Array<TValue>* values, int32_t index, int32_t length, mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sort", std::vector<std::string> { GetGenericTypeName<TKey>() + (std::string)"[]", GetGenericTypeName<TValue>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Collections.Generic.IComparer`1<TKey>" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)&index;
			params[3] = (intptr_t)&length;
			params[4] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void SwapIfGreaterWithItems(IL2CPP::Array<TKey>* keys, IL2CPP::Array<TValue>* values, mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer, int32_t a, int32_t b)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SwapIfGreaterWithItems", std::vector<std::string> { GetGenericTypeName<TKey>() + (std::string)"[]", GetGenericTypeName<TValue>() + (std::string)"[]", "System.Collections.Generic.IComparer`1<TKey>", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)comparer;
			params[3] = (intptr_t)&a;
			params[4] = (intptr_t)&b;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void Swap(IL2CPP::Array<TKey>* keys, IL2CPP::Array<TValue>* values, int32_t i, int32_t j)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Swap", std::vector<std::string> { GetGenericTypeName<TKey>() + (std::string)"[]", GetGenericTypeName<TValue>() + (std::string)"[]", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)&i;
			params[3] = (intptr_t)&j;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void IntrospectiveSort(IL2CPP::Array<TKey>* keys, IL2CPP::Array<TValue>* values, int32_t left, int32_t length, mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IntrospectiveSort", std::vector<std::string> { GetGenericTypeName<TKey>() + (std::string)"[]", GetGenericTypeName<TValue>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Collections.Generic.IComparer`1<TKey>" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)&left;
			params[3] = (intptr_t)&length;
			params[4] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void IntroSort(IL2CPP::Array<TKey>* keys, IL2CPP::Array<TValue>* values, int32_t lo, int32_t hi, int32_t depthLimit, mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IntroSort", std::vector<std::string> { GetGenericTypeName<TKey>() + (std::string)"[]", GetGenericTypeName<TValue>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Int32", "System.Collections.Generic.IComparer`1<TKey>" });
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)&lo;
			params[3] = (intptr_t)&hi;
			params[4] = (intptr_t)&depthLimit;
			params[5] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static int32_t PickPivotAndPartition(IL2CPP::Array<TKey>* keys, IL2CPP::Array<TValue>* values, int32_t lo, int32_t hi, mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PickPivotAndPartition", std::vector<std::string> { GetGenericTypeName<TKey>() + (std::string)"[]", GetGenericTypeName<TValue>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Collections.Generic.IComparer`1<TKey>" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)&lo;
			params[3] = (intptr_t)&hi;
			params[4] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		static void Heapsort(IL2CPP::Array<TKey>* keys, IL2CPP::Array<TValue>* values, int32_t lo, int32_t hi, mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Heapsort", std::vector<std::string> { GetGenericTypeName<TKey>() + (std::string)"[]", GetGenericTypeName<TValue>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Collections.Generic.IComparer`1<TKey>" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)&lo;
			params[3] = (intptr_t)&hi;
			params[4] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void DownHeap(IL2CPP::Array<TKey>* keys, IL2CPP::Array<TValue>* values, int32_t i, int32_t n, int32_t lo, mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DownHeap", std::vector<std::string> { GetGenericTypeName<TKey>() + (std::string)"[]", GetGenericTypeName<TValue>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Int32", "System.Collections.Generic.IComparer`1<TKey>" });
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)&i;
			params[3] = (intptr_t)&n;
			params[4] = (intptr_t)&lo;
			params[5] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void InsertionSort(IL2CPP::Array<TKey>* keys, IL2CPP::Array<TValue>* values, int32_t lo, int32_t hi, mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InsertionSort", std::vector<std::string> { GetGenericTypeName<TKey>() + (std::string)"[]", GetGenericTypeName<TValue>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Collections.Generic.IComparer`1<TKey>" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)values;
			params[2] = (intptr_t)&lo;
			params[3] = (intptr_t)&hi;
			params[4] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

