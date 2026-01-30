#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename TResult> struct UploadItemController_1; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	struct UploadItemControllerExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		template <typename TResult, typename P1> static void Upload(Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* controller, P1* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upload", std::vector<std::string> { "BestHTTP.SignalRCore.UploadItemController`1<TResult>", GetGenericTypeName<P1>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = P1::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)controller;
			params[1] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TResult, typename P1, typename P2> static void Upload(Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* controller, P1* param1, P2* param2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upload", std::vector<std::string> { "BestHTTP.SignalRCore.UploadItemController`1<TResult>", GetGenericTypeName<P1>(), GetGenericTypeName<P2>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = P1::GetIl2CppType();
			typeArguments->vector[2] = P2::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)controller;
			params[1] = (intptr_t)param1;
			params[2] = (intptr_t)param2;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TResult, typename P1, typename P2, typename P3> static void Upload(Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* controller, P1* param1, P2* param2, P3* param3)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upload", std::vector<std::string> { "BestHTTP.SignalRCore.UploadItemController`1<TResult>", GetGenericTypeName<P1>(), GetGenericTypeName<P2>(), GetGenericTypeName<P3>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(4);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = P1::GetIl2CppType();
			typeArguments->vector[2] = P2::GetIl2CppType();
			typeArguments->vector[3] = P3::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)controller;
			params[1] = (intptr_t)param1;
			params[2] = (intptr_t)param2;
			params[3] = (intptr_t)param3;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TResult, typename P1, typename P2, typename P3, typename P4> static void Upload(Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* controller, P1* param1, P2* param2, P3* param3, P4* param4)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upload", std::vector<std::string> { "BestHTTP.SignalRCore.UploadItemController`1<TResult>", GetGenericTypeName<P1>(), GetGenericTypeName<P2>(), GetGenericTypeName<P3>(), GetGenericTypeName<P4>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(5);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = P1::GetIl2CppType();
			typeArguments->vector[2] = P2::GetIl2CppType();
			typeArguments->vector[3] = P3::GetIl2CppType();
			typeArguments->vector[4] = P4::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)controller;
			params[1] = (intptr_t)param1;
			params[2] = (intptr_t)param2;
			params[3] = (intptr_t)param3;
			params[4] = (intptr_t)param4;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TResult, typename P1, typename P2, typename P3, typename P4, typename P5> static void Upload(Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* controller, P1* param1, P2* param2, P3* param3, P4* param4, P5* param5)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upload", std::vector<std::string> { "BestHTTP.SignalRCore.UploadItemController`1<TResult>", GetGenericTypeName<P1>(), GetGenericTypeName<P2>(), GetGenericTypeName<P3>(), GetGenericTypeName<P4>(), GetGenericTypeName<P5>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(6);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = P1::GetIl2CppType();
			typeArguments->vector[2] = P2::GetIl2CppType();
			typeArguments->vector[3] = P3::GetIl2CppType();
			typeArguments->vector[4] = P4::GetIl2CppType();
			typeArguments->vector[5] = P5::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)controller;
			params[1] = (intptr_t)param1;
			params[2] = (intptr_t)param2;
			params[3] = (intptr_t)param3;
			params[4] = (intptr_t)param4;
			params[5] = (intptr_t)param5;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

