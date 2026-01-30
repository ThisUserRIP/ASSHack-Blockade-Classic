#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_Task.h"
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct TaskFactory_1; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Threading_Tasks_TaskCreationOptions.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "System_Threading_Tasks_InternalTaskOptions.h"
namespace mscorlib::System::Threading::Tasks { struct TaskScheduler; };
#include "System_Threading_StackCrawlMark.h"
namespace mscorlib::System { struct Delegate; };
#include "System_Runtime_CompilerServices_TaskAwaiter_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct TaskAwaiter_1; };
#include "System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "System_Threading_Tasks_TaskContinuationOptions.h"

namespace mscorlib::System::Threading::Tasks
{
	template <typename TResult> struct Task_1 : mscorlib::System::Threading::Tasks::Task
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TResult::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("mscorlib.dll", "System.Threading.Tasks", "Task`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		TResult m_result;
		struct StaticFields
		{
			mscorlib::System::Threading::Tasks::TaskFactory_1<TResult>* s_Factory;
			mscorlib::System::Func_2<mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Threading::Tasks::Task>, mscorlib::System::Threading::Tasks::Task_1<TResult>>* TaskWhenAnyCast;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::TaskCreationOptions options)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.Threading.Tasks.TaskCreationOptions" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)state;
			params[1] = (intptr_t)&options;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(TResult* result)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { GetGenericTypeName<TResult>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)result;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(bool canceled, TResult* result, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::CancellationToken ct)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", GetGenericTypeName<TResult>(), "System.Threading.Tasks.TaskCreationOptions", "System.Threading.CancellationToken" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&canceled;
			params[1] = (intptr_t)result;
			params[2] = (intptr_t)&creationOptions;
			params[3] = (intptr_t)&ct;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::Func_2<mscorlib::System::Object, TResult>* function, mscorlib::System::Object* state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Func`2<System.Object,TResult>", "System.Object", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)function;
			params[1] = (intptr_t)state;
			params[2] = (intptr_t)&cancellationToken;
			params[3] = (intptr_t)&creationOptions;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::Func_1<TResult>* valueSelector, mscorlib::System::Threading::Tasks::Task* parent, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler, mscorlib::System::Threading::StackCrawlMark& stackMark)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Func`1<TResult>", "System.Threading.Tasks.Task", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.InternalTaskOptions", "System.Threading.Tasks.TaskScheduler", "System.Threading.StackCrawlMark&" });
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)valueSelector;
			params[1] = (intptr_t)parent;
			params[2] = (intptr_t)&cancellationToken;
			params[3] = (intptr_t)&creationOptions;
			params[4] = (intptr_t)&internalOptions;
			params[5] = (intptr_t)scheduler;
			params[6] = (intptr_t)&stackMark;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::Func_1<TResult>* valueSelector, mscorlib::System::Threading::Tasks::Task* parent, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Func`1<TResult>", "System.Threading.Tasks.Task", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.InternalTaskOptions", "System.Threading.Tasks.TaskScheduler" });
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)valueSelector;
			params[1] = (intptr_t)parent;
			params[2] = (intptr_t)&cancellationToken;
			params[3] = (intptr_t)&creationOptions;
			params[4] = (intptr_t)&internalOptions;
			params[5] = (intptr_t)scheduler;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::Func_2<mscorlib::System::Object, TResult>* valueSelector, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::Task* parent, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler, mscorlib::System::Threading::StackCrawlMark& stackMark)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Func`2<System.Object,TResult>", "System.Object", "System.Threading.Tasks.Task", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.InternalTaskOptions", "System.Threading.Tasks.TaskScheduler", "System.Threading.StackCrawlMark&" });
			intptr_t* params = new intptr_t[8];
			params[0] = (intptr_t)valueSelector;
			params[1] = (intptr_t)state;
			params[2] = (intptr_t)parent;
			params[3] = (intptr_t)&cancellationToken;
			params[4] = (intptr_t)&creationOptions;
			params[5] = (intptr_t)&internalOptions;
			params[6] = (intptr_t)scheduler;
			params[7] = (intptr_t)&stackMark;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(mscorlib::System::Delegate* valueSelector, mscorlib::System::Object* state, mscorlib::System::Threading::Tasks::Task* parent, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Delegate", "System.Object", "System.Threading.Tasks.Task", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.InternalTaskOptions", "System.Threading.Tasks.TaskScheduler" });
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)valueSelector;
			params[1] = (intptr_t)state;
			params[2] = (intptr_t)parent;
			params[3] = (intptr_t)&cancellationToken;
			params[4] = (intptr_t)&creationOptions;
			params[5] = (intptr_t)&internalOptions;
			params[6] = (intptr_t)scheduler;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static mscorlib::System::Threading::Tasks::Task_1<TResult>* StartNew(mscorlib::System::Threading::Tasks::Task* parent, mscorlib::System::Func_1<TResult>* function, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler, mscorlib::System::Threading::StackCrawlMark& stackMark)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartNew", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Func`1<TResult>", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.InternalTaskOptions", "System.Threading.Tasks.TaskScheduler", "System.Threading.StackCrawlMark&" });
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)parent;
			params[1] = (intptr_t)function;
			params[2] = (intptr_t)&cancellationToken;
			params[3] = (intptr_t)&creationOptions;
			params[4] = (intptr_t)&internalOptions;
			params[5] = (intptr_t)scheduler;
			params[6] = (intptr_t)&stackMark;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		static mscorlib::System::Threading::Tasks::Task_1<TResult>* StartNew(mscorlib::System::Threading::Tasks::Task* parent, mscorlib::System::Func_2<mscorlib::System::Object, TResult>* function, mscorlib::System::Object* state, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptions, mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptions, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler, mscorlib::System::Threading::StackCrawlMark& stackMark)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartNew", std::vector<std::string> { "System.Threading.Tasks.Task", "System.Func`2<System.Object,TResult>", "System.Object", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskCreationOptions", "System.Threading.Tasks.InternalTaskOptions", "System.Threading.Tasks.TaskScheduler", "System.Threading.StackCrawlMark&" });
			intptr_t* params = new intptr_t[8];
			params[0] = (intptr_t)parent;
			params[1] = (intptr_t)function;
			params[2] = (intptr_t)state;
			params[3] = (intptr_t)&cancellationToken;
			params[4] = (intptr_t)&creationOptions;
			params[5] = (intptr_t)&internalOptions;
			params[6] = (intptr_t)scheduler;
			params[7] = (intptr_t)&stackMark;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TResult>*)returnValue;
		}
		bool TrySetResult(TResult* result)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrySetResult", std::vector<std::string> { GetGenericTypeName<TResult>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)result;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		void DangerousSetResult(TResult* result)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DangerousSetResult", std::vector<std::string> { GetGenericTypeName<TResult>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)result;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		TResult* get_Result()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Result");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TResult>(returnValue);;
		}
		TResult* get_ResultOnSuccess()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ResultOnSuccess");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TResult>(returnValue);;
		}
		TResult* GetResultCore(bool waitCompletionNotification)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResultCore", std::vector<std::string> { "System.Boolean" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&waitCompletionNotification;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TResult>(returnValue);;
		}
		bool TrySetException(mscorlib::System::Object* exceptionObject)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrySetException", std::vector<std::string> { "System.Object" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)exceptionObject;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool TrySetCanceled(mscorlib::System::Threading::CancellationToken tokenToRecord)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrySetCanceled", std::vector<std::string> { "System.Threading.CancellationToken" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&tokenToRecord;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool TrySetCanceled(mscorlib::System::Threading::CancellationToken tokenToRecord, mscorlib::System::Object* cancellationException)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrySetCanceled", std::vector<std::string> { "System.Threading.CancellationToken", "System.Object" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&tokenToRecord;
			params[1] = (intptr_t)cancellationException;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		static mscorlib::System::Threading::Tasks::TaskFactory_1<TResult>* get_Factory()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Factory");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::TaskFactory_1<TResult>*)returnValue;
		}
		void InnerInvoke()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InnerInvoke");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Runtime::CompilerServices::TaskAwaiter_1<TResult> GetAwaiter()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAwaiter");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				mscorlib::System::Runtime::CompilerServices::TaskAwaiter_1<TResult> ret;
				std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>));
				return ret;
			}
			return static_cast<mscorlib::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>>(*(mscorlib::System::Runtime::CompilerServices::TaskAwaiter_1<TResult>*)il2cpp_object_unbox(returnValue));
		}
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult> ConfigureAwait(bool continueOnCapturedContext)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConfigureAwait", std::vector<std::string> { "System.Boolean" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&continueOnCapturedContext;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult> ret;
				std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>));
				return ret;
			}
			return static_cast<mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>>(*(mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<TResult>*)il2cpp_object_unbox(returnValue));
		}
		template <typename TNewResult> mscorlib::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(mscorlib::System::Func_2<mscorlib::System::Threading::Tasks::Task_1<TResult>, TNewResult>* continuationFunction, mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContinueWith", std::vector<std::string> { "System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>", "System.Threading.Tasks.TaskContinuationOptions" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TNewResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)continuationFunction;
			params[1] = (intptr_t)&continuationOptions;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TNewResult>*)returnValue;
		}
		template <typename TNewResult> mscorlib::System::Threading::Tasks::Task_1<TNewResult>* ContinueWith(mscorlib::System::Func_2<mscorlib::System::Threading::Tasks::Task_1<TResult>, TNewResult>* continuationFunction, mscorlib::System::Threading::Tasks::TaskScheduler* scheduler, mscorlib::System::Threading::CancellationToken cancellationToken, mscorlib::System::Threading::Tasks::TaskContinuationOptions continuationOptions, mscorlib::System::Threading::StackCrawlMark& stackMark)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContinueWith", std::vector<std::string> { "System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>", "System.Threading.Tasks.TaskScheduler", "System.Threading.CancellationToken", "System.Threading.Tasks.TaskContinuationOptions", "System.Threading.StackCrawlMark&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TNewResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)continuationFunction;
			params[1] = (intptr_t)scheduler;
			params[2] = (intptr_t)&cancellationToken;
			params[3] = (intptr_t)&continuationOptions;
			params[4] = (intptr_t)&stackMark;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<TNewResult>*)returnValue;
		}
		static void _cctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

