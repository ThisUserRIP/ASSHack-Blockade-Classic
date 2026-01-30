#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct TaskCompletionSource_1; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPRequestAsyncExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Threading::Tasks::Task_1<Assembly_CSharp::BestHTTP::HTTPResponse>* GetHTTPResponseAsync(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::Threading::CancellationToken token);
		static mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::String>* GetAsStringAsync(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::Threading::CancellationToken token);
		static mscorlib::System::Threading::Tasks::Task_1<UnityEngine_CoreModule::UnityEngine::Texture2D>* GetAsTexture2DAsync(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::Threading::CancellationToken token);
		static mscorlib::System::Threading::Tasks::Task_1<IL2CPP::Array<mscorlib::System::Byte>>* GetRawDataAsync(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::Threading::CancellationToken token);
		template <typename T> static mscorlib::System::Threading::Tasks::Task_1<T>* CreateTask(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::Threading::CancellationToken token, mscorlib::System::Action_3<Assembly_CSharp::BestHTTP::HTTPRequest, Assembly_CSharp::BestHTTP::HTTPResponse, mscorlib::System::Threading::Tasks::TaskCompletionSource_1<T>>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateTask", std::vector<std::string> { "BestHTTP.HTTPRequest", "System.Threading.CancellationToken", "System.Action`3<BestHTTP.HTTPRequest,BestHTTP.HTTPResponse,System.Threading.Tasks.TaskCompletionSource`1<T>>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)request;
			params[1] = (intptr_t)&token;
			params[2] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Threading::Tasks::Task_1<T>*)returnValue;
		}
		static void VerboseLogging(Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::String* str);
	};
}

