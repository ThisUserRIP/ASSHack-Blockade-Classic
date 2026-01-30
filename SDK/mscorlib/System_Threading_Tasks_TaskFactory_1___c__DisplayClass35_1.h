#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_Tasks_TaskFactory_1.h"
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct TaskFactory_1; };
namespace mscorlib::System::Threading { struct AtomicBoolean; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct TaskFactory_1___c__DisplayClass35_0; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct IAsyncResult; };

namespace mscorlib::System::Threading::Tasks
{
	template <typename TResult> struct TaskFactory_1___c__DisplayClass35_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TResult::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(mscorlib::System::Threading::Tasks::TaskFactory_1<TResult>::GetIl2CppClass(), "<>c__DisplayClass35_1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		mscorlib::System::Threading::AtomicBoolean* invoked;
		mscorlib::System::Threading::Tasks::TaskFactory_1___c__DisplayClass35_0<TResult>* CS___8__locals1;
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _FromAsyncImpl_b__1(mscorlib::System::IAsyncResult* iar)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<FromAsyncImpl>b__1", std::vector<std::string> { "System.IAsyncResult" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)iar;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

