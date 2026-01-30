#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Linq_EnumerableSorter_1.h"
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IComparer_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Core::System::Linq { template <typename TElement> struct EnumerableSorter_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Core::System::Linq
{
	template <typename TElement, typename TKey> struct EnumerableSorter_2 : System_Core::System::Linq::EnumerableSorter_1<TElement>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TElement::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TKey::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("System.Core.dll", "System.Linq", "EnumerableSorter`2")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		mscorlib::System::Func_2<TElement, TKey>* keySelector;
		mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer;
		bool descending;
		System_Core::System::Linq::EnumerableSorter_1<TElement>* next;
		IL2CPP::Array<TKey>* keys;
		void _ctor(mscorlib::System::Func_2<TElement, TKey>* keySelector, mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending, System_Core::System::Linq::EnumerableSorter_1<TElement>* next)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Func`2<TElement,TKey>", "System.Collections.Generic.IComparer`1<TKey>", "System.Boolean", "System.Linq.EnumerableSorter`1<TElement>" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)keySelector;
			params[1] = (intptr_t)comparer;
			params[2] = (intptr_t)&descending;
			params[3] = (intptr_t)next;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void ComputeKeys(IL2CPP::Array<TElement>* elements, int32_t count)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeKeys", std::vector<std::string> { GetGenericTypeName<TElement>() + (std::string)"[]", "System.Int32" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)elements;
			params[1] = (intptr_t)&count;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		int32_t CompareKeys(int32_t index1, int32_t index2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareKeys", std::vector<std::string> { "System.Int32", "System.Int32" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&index1;
			params[1] = (intptr_t)&index2;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
	};
}

