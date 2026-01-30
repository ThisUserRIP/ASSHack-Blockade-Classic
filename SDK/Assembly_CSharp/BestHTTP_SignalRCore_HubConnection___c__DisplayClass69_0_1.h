#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SignalRCore_HubConnection.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct HubConnection; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename T> struct StreamItemContainer_1; };
namespace Assembly_CSharp::BestHTTP::Futures { template <typename T> struct Future_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "BestHTTP_SignalRCore_Messages_Message.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages { struct Message; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	template <typename TResult> struct HubConnection___c__DisplayClass69_0_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TResult::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(Assembly_CSharp::BestHTTP::SignalRCore::HubConnection::GetIl2CppClass(), "<>c__DisplayClass69_0`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		Assembly_CSharp::BestHTTP::Futures::Future_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>* future;
		Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* __4__this;
		void _ctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _UploadStreamWithDownStream_b__0(Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<UploadStreamWithDownStream>b__0", std::vector<std::string> { "BestHTTP.SignalRCore.Messages.Message" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&message;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

