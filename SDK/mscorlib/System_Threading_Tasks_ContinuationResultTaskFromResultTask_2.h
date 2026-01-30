#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_Task_1.h"
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System { struct Object; };
#include "System_Threading_Tasks_TaskCreationOptions.h"
#include "System_Threading_Tasks_InternalTaskOptions.h"
#include "System_Threading_StackCrawlMark.h"

namespace mscorlib::System::Threading::Tasks
{
	template <typename TAntecedentResult, typename TResult> struct ContinuationResultTaskFromResultTask_2 : mscorlib::System::Threading::Tasks::Task_1<TResult>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TAntecedentResult::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TResult::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "ContinuationResultTaskFromResultTask`2")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		mscorlib::System::Threading::Tasks::Task_1<TAntecedentResult>* m_antecedent;
		void _ctor(mscorlib::System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, mscorlib::System::Delegate* function, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::StackCrawlMark& stackMark)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.Tasks.Task`1<TAntecedentResult>", "System.Delegate", "System.Object", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.InternalTaskOptions", "System.Threading.StackCrawlMark&" });
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)antecedent;
			params[1] = (intptr_t)function;
			params[2] = (intptr_t)state;
			params[3] = (intptr_t)&creationOptions;
			params[4] = (intptr_t)&internalOptions;
			params[5] = (intptr_t)&stackMark;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void InnerInvoke()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InnerInvoke");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

