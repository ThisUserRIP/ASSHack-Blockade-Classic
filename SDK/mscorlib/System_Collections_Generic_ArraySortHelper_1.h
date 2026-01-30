#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IComparer_1; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };

namespace mscorlib::System::Collections::Generic
{
	template <typename T> struct ArraySortHelper_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("mscorlib.dll", "System.Collections.Generic", "ArraySortHelper`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		static void Sort(IL2CPP::Array<T>* keys, int32_t index, int32_t length, mscorlib::System::Collections::Generic::IComparer_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sort", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Collections.Generic.IComparer`1<T>" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)&index;
			params[2] = (intptr_t)&length;
			params[3] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static int32_t BinarySearch(IL2CPP::Array<T>* array, int32_t index, int32_t length, T* value, mscorlib::System::Collections::Generic::IComparer_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BinarySearch", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32", GetGenericTypeName<T>(), "System.Collections.Generic.IComparer`1<T>" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)array;
			params[1] = (intptr_t)&index;
			params[2] = (intptr_t)&length;
			params[3] = (intptr_t)value;
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
		static void Sort(IL2CPP::Array<T>* keys, int32_t index, int32_t length, mscorlib::System::Comparison_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sort", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Comparison`1<T>" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)&index;
			params[2] = (intptr_t)&length;
			params[3] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static int32_t InternalBinarySearch(IL2CPP::Array<T>* array, int32_t index, int32_t length, T* value, mscorlib::System::Collections::Generic::IComparer_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalBinarySearch", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32", GetGenericTypeName<T>(), "System.Collections.Generic.IComparer`1<T>" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)array;
			params[1] = (intptr_t)&index;
			params[2] = (intptr_t)&length;
			params[3] = (intptr_t)value;
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
		static void SwapIfGreater(IL2CPP::Array<T>* keys, mscorlib::System::Comparison_1<T>* comparer, int32_t a, int32_t b)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SwapIfGreater", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Comparison`1<T>", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)comparer;
			params[2] = (intptr_t)&a;
			params[3] = (intptr_t)&b;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void Swap(IL2CPP::Array<T>* a, int32_t i, int32_t j)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Swap", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)a;
			params[1] = (intptr_t)&i;
			params[2] = (intptr_t)&j;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void IntrospectiveSort(IL2CPP::Array<T>* keys, int32_t left, int32_t length, mscorlib::System::Comparison_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IntrospectiveSort", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Comparison`1<T>" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)&left;
			params[2] = (intptr_t)&length;
			params[3] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void IntroSort(IL2CPP::Array<T>* keys, int32_t lo, int32_t hi, int32_t depthLimit, mscorlib::System::Comparison_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IntroSort", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Int32", "System.Comparison`1<T>" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)&lo;
			params[2] = (intptr_t)&hi;
			params[3] = (intptr_t)&depthLimit;
			params[4] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static int32_t PickPivotAndPartition(IL2CPP::Array<T>* keys, int32_t lo, int32_t hi, mscorlib::System::Comparison_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PickPivotAndPartition", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Comparison`1<T>" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)&lo;
			params[2] = (intptr_t)&hi;
			params[3] = (intptr_t)comparer;
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
		static void Heapsort(IL2CPP::Array<T>* keys, int32_t lo, int32_t hi, mscorlib::System::Comparison_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Heapsort", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Comparison`1<T>" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)&lo;
			params[2] = (intptr_t)&hi;
			params[3] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void DownHeap(IL2CPP::Array<T>* keys, int32_t i, int32_t n, int32_t lo, mscorlib::System::Comparison_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DownHeap", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Int32", "System.Comparison`1<T>" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)&i;
			params[2] = (intptr_t)&n;
			params[3] = (intptr_t)&lo;
			params[4] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void InsertionSort(IL2CPP::Array<T>* keys, int32_t lo, int32_t hi, mscorlib::System::Comparison_1<T>* comparer)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InsertionSort", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"[]", "System.Int32", "System.Int32", "System.Comparison`1<T>" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)keys;
			params[1] = (intptr_t)&lo;
			params[2] = (intptr_t)&hi;
			params[3] = (intptr_t)comparer;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

