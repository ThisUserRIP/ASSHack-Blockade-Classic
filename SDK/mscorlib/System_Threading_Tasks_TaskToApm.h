#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace mscorlib::System::Threading::Tasks
{
	struct TaskToApm : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::IAsyncResult* Begin(mscorlib::System::Threading::Tasks::Task* task, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		static void End(mscorlib::System::IAsyncResult* asyncResult);
		template <typename TResult> static TResult* End(mscorlib::System::IAsyncResult* asyncResult)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "End", std::vector<std::string> { "System.IAsyncResult" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)asyncResult;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TResult>(returnValue);;
		}
		static void InvokeCallbackWhenTaskCompletes(mscorlib::System::Threading::Tasks::Task* antecedent, mscorlib::System::AsyncCallback* callback, mscorlib::System::IAsyncResult* asyncResult);
	};
}

