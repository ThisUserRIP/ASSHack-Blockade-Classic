#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Threading_Tasks_VoidTaskResult.h"
namespace mscorlib::System::Threading::Tasks { struct VoidTaskResult; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "System_Runtime_CompilerServices_AsyncTaskMethodBuilder_1.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct AsyncTaskMethodBuilder_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { struct Exception; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct AsyncTaskMethodBuilder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<mscorlib::System::Threading::Tasks::VoidTaskResult> m_builder;
		static mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder Create();
		template <typename TStateMachine> void Start(TStateMachine& stateMachine)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Start", std::vector<std::string> { GetGenericTypeName<TStateMachine>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TStateMachine::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&stateMachine;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
		template <typename TAwaiter, typename TStateMachine> void AwaitOnCompleted(TAwaiter& awaiter, TStateMachine& stateMachine)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AwaitOnCompleted", std::vector<std::string> { GetGenericTypeName<TAwaiter>() + (std::string)"&", GetGenericTypeName<TStateMachine>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = TAwaiter::GetIl2CppType();
			typeArguments->vector[1] = TStateMachine::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&awaiter;
			params[1] = (intptr_t)&stateMachine;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TAwaiter, typename TStateMachine> void AwaitUnsafeOnCompleted(TAwaiter& awaiter, TStateMachine& stateMachine)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AwaitUnsafeOnCompleted", std::vector<std::string> { GetGenericTypeName<TAwaiter>() + (std::string)"&", GetGenericTypeName<TStateMachine>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = TAwaiter::GetIl2CppType();
			typeArguments->vector[1] = TStateMachine::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&awaiter;
			params[1] = (intptr_t)&stateMachine;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Threading::Tasks::Task* get_Task();
		void SetResult();
		void SetException(mscorlib::System::Exception* exception);
		static void _cctor();
	};
}

