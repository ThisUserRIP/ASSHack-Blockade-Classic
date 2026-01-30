#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct HubConnection; };
namespace Assembly_CSharp::BestHTTP::Futures { template <typename T> struct IFuture_1; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "BestHTTP_Futures_FutureState.h"
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename TResult, typename T> struct UploadChannel_2; };
namespace Assembly_CSharp::BestHTTP::Futures { template <typename T> struct FutureValueCallback_1; };
namespace Assembly_CSharp::BestHTTP::Futures { struct FutureErrorCallback; };
namespace Assembly_CSharp::BestHTTP::Futures { template <typename T> struct FutureCallback_1; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	template <typename TResult> struct UploadItemController_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TResult::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SignalRCore", "UploadItemController`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		int64_t invocationId;
		IL2CPP::Array<int32_t>* streamingIds;
		Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hubConnection;
		Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>* future;
		IL2CPP::Array<mscorlib::System::Object*>* streams;
		bool isFinished;
		Assembly_CSharp::BestHTTP::Futures::FutureState get_state()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_state");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Assembly_CSharp::BestHTTP::Futures::FutureState ret;
				std::memset(&ret, 0, sizeof(Assembly_CSharp::BestHTTP::Futures::FutureState));
				return ret;
			}
			return static_cast<Assembly_CSharp::BestHTTP::Futures::FutureState>(*(Assembly_CSharp::BestHTTP::Futures::FutureState*)il2cpp_object_unbox(returnValue));
		}
		TResult* get_value()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_value");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<TResult>(returnValue);;
		}
		mscorlib::System::Exception* get_error()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_error");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Exception*)returnValue;
		}
		void _ctor(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub, int64_t iId, IL2CPP::Array<int32_t>* sIds, Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>* future)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SignalRCore.HubConnection", "System.Int64", "System.Int32[]", "BestHTTP.Futures.IFuture`1<TResult>" });
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)hub;
			params[1] = (intptr_t)&iId;
			params[2] = (intptr_t)sIds;
			params[3] = (intptr_t)future;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> Assembly_CSharp::BestHTTP::SignalRCore::UploadChannel_2<TResult, T>* GetUploadChannel(int32_t paramIdx)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUploadChannel", std::vector<std::string> { "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&paramIdx;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadChannel_2<TResult, T>*)returnValue;
		}
		template <typename T> void UploadParam(int32_t streamId, T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadParam", std::vector<std::string> { "System.Int32", GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&streamId;
			params[1] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Finish()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finish");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void Cancel()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Cancel");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void System_IDisposable_Dispose()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IDisposable.Dispose");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>* OnItem(Assembly_CSharp::BestHTTP::Futures::FutureValueCallback_1<TResult>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnItem", std::vector<std::string> { "BestHTTP.Futures.FutureValueCallback`1<TResult>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>*)returnValue;
		}
		Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>* OnSuccess(Assembly_CSharp::BestHTTP::Futures::FutureValueCallback_1<TResult>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSuccess", std::vector<std::string> { "BestHTTP.Futures.FutureValueCallback`1<TResult>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>*)returnValue;
		}
		Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>* OnError(Assembly_CSharp::BestHTTP::Futures::FutureErrorCallback* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnError", std::vector<std::string> { "BestHTTP.Futures.FutureErrorCallback" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>*)returnValue;
		}
		Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>* OnComplete(Assembly_CSharp::BestHTTP::Futures::FutureCallback_1<TResult>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnComplete", std::vector<std::string> { "BestHTTP.Futures.FutureCallback`1<TResult>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>*)returnValue;
		}
	};
}

