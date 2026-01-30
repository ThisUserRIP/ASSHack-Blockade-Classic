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
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename TResult> struct Func_4; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename T4, typename TResult> struct Func_5; };

namespace mscorlib::System::Threading::Tasks
{
	template <typename TResult> struct TaskFactory_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TResult::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "TaskFactory`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		mscorlib::System::Threading::CancellationToken m_defaultCancellationToken;
		mscorlib::System::Threading::Tasks::TaskScheduler* m_defaultScheduler;
		mscorlib::System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions;
		mscorlib::System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions;
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.TaskContinuationOptions", "System.Threading.Tasks.TaskScheduler" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&cancellationToken;
			params[1] = (intptr_t)&creationOptions;
			params[2] = (intptr_t)&continuationOptions;
			params[3] = (intptr_t)scheduler;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Threading::Tasks::Task_1<TResult>* StartNew(mscorlib::System::Func_1<TResult>* function, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartNew", std::vector<std::string> { "System.Func`1<TResult>", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.TaskScheduler" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)function;
			params[1] = (intptr_t)&cancellationToken;
			params[2] = (intptr_t)&creationOptions;
			params[3] = (intptr_t)scheduler;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		static void FromAsyncCoreLogic(mscorlib::System::IAsyncResult* iar, mscorlib::System::Func_2<mscorlib::System::IAsyncResult, TResult>* endFunction, mscorlib::System::Action_1<mscorlib::System::IAsyncResult>* endAction, mscorlib::System::Threading::Tasks::Task_1<TResult>* promise, bool requiresSynchronization)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromAsyncCoreLogic", std::vector<std::string> { "System.IAsyncResult", "System.Func`2<System.IAsyncResult,TResult>", "System.Action`1<System.IAsyncResult>", "System.Threading.Tasks.Task`1<TResult>", "System.Boolean" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)iar;
			params[1] = (intptr_t)endFunction;
			params[2] = (intptr_t)endAction;
			params[3] = (intptr_t)promise;
			params[4] = (intptr_t)&requiresSynchronization;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Threading::Tasks::Task_1<TResult>* FromAsync(mscorlib::System::Func_3<mscorlib::System::AsyncCallback, mscorlib::System::Object, mscorlib::System::IAsyncResult>* beginMethod, mscorlib::System::Func_2<mscorlib::System::IAsyncResult, TResult>* endMethod, mscorlib::System::Object* state)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromAsync", std::vector<std::string> { "System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>", "System.Func`2<System.IAsyncResult,TResult>", "System.Object" });
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)beginMethod;
			params[1] = (intptr_t)endMethod;
			params[2] = (intptr_t)state;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		static mscorlib::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(mscorlib::System::Func_3<mscorlib::System::AsyncCallback, mscorlib::System::Object, mscorlib::System::IAsyncResult>* beginMethod, mscorlib::System::Func_2<mscorlib::System::IAsyncResult, TResult>* endFunction, mscorlib::System::Action_1<mscorlib::System::IAsyncResult>* endAction, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromAsyncImpl", std::vector<std::string> { "System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>", "System.Func`2<System.IAsyncResult,TResult>", "System.Action`1<System.IAsyncResult>", "System.Object", "System.Threading.Tasks.TaskCreationOptions" });
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)beginMethod;
			params[1] = (intptr_t)endFunction;
			params[2] = (intptr_t)endAction;
			params[3] = (intptr_t)state;
			params[4] = (intptr_t)&creationOptions;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		template <typename TArg1> static mscorlib::System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(mscorlib::System::Func_4<TArg1, mscorlib::System::AsyncCallback, mscorlib::System::Object, mscorlib::System::IAsyncResult>* beginMethod, mscorlib::System::Func_2<mscorlib::System::IAsyncResult, TResult>* endFunction, mscorlib::System::Action_1<mscorlib::System::IAsyncResult>* endAction, TArg1* arg1, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromAsyncImpl", std::vector<std::string> { "System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>", "System.Func`2<System.IAsyncResult,TResult>", "System.Action`1<System.IAsyncResult>", GetGenericTypeName<TArg1>(), "System.Object", "System.Threading.Tasks.TaskCreationOptions" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TArg1::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)beginMethod;
			params[1] = (intptr_t)endFunction;
			params[2] = (intptr_t)endAction;
			params[3] = (intptr_t)arg1;
			params[4] = (intptr_t)state;
			params[5] = (intptr_t)&creationOptions;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		template <typename TInstance, typename TArgs> static mscorlib::System::Threading::Tasks::Task_1<TResult>* FromAsyncTrim(TInstance* thisRef, TArgs* args, mscorlib::System::Func_5<TInstance, TArgs, mscorlib::System::AsyncCallback, mscorlib::System::Object, mscorlib::System::IAsyncResult>* beginMethod, mscorlib::System::Func_3<TInstance, mscorlib::System::IAsyncResult, TResult>* endMethod)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromAsyncTrim", std::vector<std::string> { GetGenericTypeName<TInstance>(), GetGenericTypeName<TArgs>(), "System.Func`5<TInstance,TArgs,System.AsyncCallback,System.Object,System.IAsyncResult>", "System.Func`3<TInstance,System.IAsyncResult,TResult>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = TInstance::GetIl2CppType();
			typeArguments->vector[1] = TArgs::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)thisRef;
			params[1] = (intptr_t)args;
			params[2] = (intptr_t)beginMethod;
			params[3] = (intptr_t)endMethod;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
	};
}

