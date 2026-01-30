#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Linq_OrderedEnumerable_1.h"
namespace System_Core::System::Linq { template <typename TElement> struct OrderedEnumerable_1; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IComparer_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace System_Core::System::Linq { template <typename TElement> struct EnumerableSorter_1; };

namespace System_Core::System::Linq
{
	template <typename TElement, typename TKey> struct OrderedEnumerable_2 : System_Core::System::Linq::OrderedEnumerable_1<TElement>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TElement::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TKey::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("System.Core.dll", "System.Linq", "OrderedEnumerable`2")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		System_Core::System::Linq::OrderedEnumerable_1<TElement>* parent;
		mscorlib::System::Func_2<TElement, TKey>* keySelector;
		mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer;
		bool descending;
		void _ctor(mscorlib::System::Collections::Generic::IEnumerable_1<TElement>* source, mscorlib::System::Func_2<TElement, TKey>* keySelector, mscorlib::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<TElement>", "System.Func`2<TElement,TKey>", "System.Collections.Generic.IComparer`1<TKey>", "System.Boolean" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)source;
			params[1] = (intptr_t)keySelector;
			params[2] = (intptr_t)comparer;
			params[3] = (intptr_t)&descending;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		System_Core::System::Linq::EnumerableSorter_1<TElement>* GetEnumerableSorter(System_Core::System::Linq::EnumerableSorter_1<TElement>* next)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEnumerableSorter", std::vector<std::string> { "System.Linq.EnumerableSorter`1<TElement>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)next;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (System_Core::System::Linq::EnumerableSorter_1<TElement>*)returnValue;
		}
	};
}

