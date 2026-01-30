#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::Threading::Tasks { struct TaskScheduler; };
#include "System_Threading_Tasks_TaskCreationOptions.h"
#include "System_Threading_Tasks_TaskContinuationOptions.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename TResult> struct Func_4; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace mscorlib::System::Threading::Tasks
{
	struct TaskFactory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::CancellationToken m_defaultCancellationToken;
		mscorlib::System::Threading::Tasks::TaskScheduler* m_defaultScheduler;
		mscorlib::System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions;
		mscorlib::System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions;
		void _ctor();
		void _ctor(mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler);
		static void CheckCreationOptions(mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions);
		mscorlib::System::Threading::Tasks::Task* StartNew(mscorlib::System::Action_1<mscorlib::System::Object>* action, mscorlib::System::Object* state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler);
		template <typename TResult> mscorlib::System::Threading::Tasks::Task_1<TResult>* StartNew(mscorlib::System::Func_2<mscorlib::System::Object, TResult>* function, mscorlib::System::Object* state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartNew", std::vector<std::string> { "System.Func`2<System.Object,TResult>", "System.Object", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.TaskScheduler" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)function;
			params[1] = (intptr_t)state;
			params[2] = (intptr_t)&cancellationToken;
			params[3] = (intptr_t)&creationOptions;
			params[4] = (intptr_t)scheduler;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		template <typename TArg1> mscorlib::System::Threading::Tasks::Task* FromAsync(mscorlib::System::Func_4<TArg1, mscorlib::System::AsyncCallback, mscorlib::System::Object, mscorlib::System::IAsyncResult>* beginMethod, mscorlib::System::Action_1<mscorlib::System::IAsyncResult>* endMethod, TArg1* arg1, mscorlib::System::Object* state)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromAsync", std::vector<std::string> { "System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>", "System.Action`1<System.IAsyncResult>", GetGenericTypeName<TArg1>(), "System.Object" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TArg1::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)beginMethod;
			params[1] = (intptr_t)endMethod;
			params[2] = (intptr_t)arg1;
			params[3] = (intptr_t)state;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task*)returnValue;
		}
		template <typename TArg1> mscorlib::System::Threading::Tasks::Task* FromAsync(mscorlib::System::Func_4<TArg1, mscorlib::System::AsyncCallback, mscorlib::System::Object, mscorlib::System::IAsyncResult>* beginMethod, mscorlib::System::Action_1<mscorlib::System::IAsyncResult>* endMethod, TArg1* arg1, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromAsync", std::vector<std::string> { "System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>", "System.Action`1<System.IAsyncResult>", GetGenericTypeName<TArg1>(), "System.Object", "System.Threading.Tasks.TaskCreationOptions" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TArg1::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)beginMethod;
			params[1] = (intptr_t)endMethod;
			params[2] = (intptr_t)arg1;
			params[3] = (intptr_t)state;
			params[4] = (intptr_t)&creationOptions;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task*)returnValue;
		}
		static void CheckFromAsyncOptions(mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, bool hasBeginMethod);
		static mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Threading::Tasks::Task>* CommonCWAnyLogic(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Threading::Tasks::Task>* tasks);
		static void CheckMultiTaskContinuationOptions(mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions);
	};
}

