#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_Futures_FutureState.h"
namespace mscorlib::System { struct Exception; };
namespace Assembly_CSharp::BestHTTP::Futures { template <typename T> struct IFuture_1; };
namespace Assembly_CSharp::BestHTTP::Futures { template <typename T> struct FutureValueCallback_1; };
namespace Assembly_CSharp::BestHTTP::Futures { struct FutureErrorCallback; };
namespace Assembly_CSharp::BestHTTP::Futures { template <typename T> struct FutureCallback_1; };

namespace Assembly_CSharp::BestHTTP::Futures
{
	template <typename T> struct IFuture_1
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.Futures", "IFuture`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
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
		T* get_value()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_value");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
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
		Assembly_CSharp::BestHTTP::Futures::IFuture_1<T>* OnItem(Assembly_CSharp::BestHTTP::Futures::FutureValueCallback_1<T>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnItem", std::vector<std::string> { "BestHTTP.Futures.FutureValueCallback`1<T>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<T>*)returnValue;
		}
		Assembly_CSharp::BestHTTP::Futures::IFuture_1<T>* OnSuccess(Assembly_CSharp::BestHTTP::Futures::FutureValueCallback_1<T>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSuccess", std::vector<std::string> { "BestHTTP.Futures.FutureValueCallback`1<T>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<T>*)returnValue;
		}
		Assembly_CSharp::BestHTTP::Futures::IFuture_1<T>* OnError(Assembly_CSharp::BestHTTP::Futures::FutureErrorCallback* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnError", std::vector<std::string> { "BestHTTP.Futures.FutureErrorCallback" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<T>*)returnValue;
		}
		Assembly_CSharp::BestHTTP::Futures::IFuture_1<T>* OnComplete(Assembly_CSharp::BestHTTP::Futures::FutureCallback_1<T>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnComplete", std::vector<std::string> { "BestHTTP.Futures.FutureCallback`1<T>" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<T>*)returnValue;
		}
	};
}

