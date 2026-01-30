#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename T> struct StreamItemContainer_1; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename TResult> struct UploadItemController_1; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct HubConnection; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	struct HubConnectionExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		template <typename TResult, typename T1> static Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>* UploadStreamWithDownStream(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadStreamWithDownStream", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>*)returnValue;
		}
		template <typename TResult, typename T1, typename T2> static Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>* UploadStreamWithDownStream(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadStreamWithDownStream", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			typeArguments->vector[2] = T2::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>*)returnValue;
		}
		template <typename TResult, typename T1, typename T2, typename T3> static Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>* UploadStreamWithDownStream(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadStreamWithDownStream", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(4);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			typeArguments->vector[2] = T2::GetIl2CppType();
			typeArguments->vector[3] = T3::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>*)returnValue;
		}
		template <typename TResult, typename T1, typename T2, typename T3, typename T4> static Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>* UploadStreamWithDownStream(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadStreamWithDownStream", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(5);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			typeArguments->vector[2] = T2::GetIl2CppType();
			typeArguments->vector[3] = T3::GetIl2CppType();
			typeArguments->vector[4] = T4::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>*)returnValue;
		}
		template <typename TResult, typename T1, typename T2, typename T3, typename T4, typename T5> static Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>* UploadStreamWithDownStream(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadStreamWithDownStream", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(6);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			typeArguments->vector[2] = T2::GetIl2CppType();
			typeArguments->vector[3] = T3::GetIl2CppType();
			typeArguments->vector[4] = T4::GetIl2CppType();
			typeArguments->vector[5] = T5::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>*)returnValue;
		}
		template <typename TResult, typename T1> static Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* Upload(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upload", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>*)returnValue;
		}
		template <typename TResult, typename T1, typename T2> static Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* UploadStream(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadStream", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			typeArguments->vector[2] = T2::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>*)returnValue;
		}
		template <typename TResult, typename T1, typename T2, typename T3> static Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* Upload(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upload", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(4);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			typeArguments->vector[2] = T2::GetIl2CppType();
			typeArguments->vector[3] = T3::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>*)returnValue;
		}
		template <typename TResult, typename T1, typename T2, typename T3, typename T4> static Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* Upload(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upload", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(5);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			typeArguments->vector[2] = T2::GetIl2CppType();
			typeArguments->vector[3] = T3::GetIl2CppType();
			typeArguments->vector[4] = T4::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>*)returnValue;
		}
		template <typename TResult, typename T1, typename T2, typename T3, typename T4, typename T5> static Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* Upload(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, mscorlib::System::String* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upload", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(6);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			typeArguments->vector[1] = T1::GetIl2CppType();
			typeArguments->vector[2] = T2::GetIl2CppType();
			typeArguments->vector[3] = T3::GetIl2CppType();
			typeArguments->vector[4] = T4::GetIl2CppType();
			typeArguments->vector[5] = T5::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>*)returnValue;
		}
	};
}

