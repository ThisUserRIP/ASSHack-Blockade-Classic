#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace System::System { struct Uri; };
#include "BestHTTP_SignalRCore_ConnectionStates.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct ITransport; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct IProtocol; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "BestHTTP_SignalRCore_Messages_Message.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages { struct Message; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct IAuthenticationProvider; };
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages { struct NegotiationResult; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct HubOptions; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct Subscription; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename T> struct StreamItemContainer_1; };
namespace Assembly_CSharp::BestHTTP::Futures { template <typename T> struct IFuture_1; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename TResult> struct UploadItemController_1; };
namespace mscorlib::System { struct Action; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename T4> struct Action_4; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "BestHTTP_SignalRCore_TransportStates.h"
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	struct HubConnection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* _Uri_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates _State_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalRCore::ITransport* _Transport_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalRCore::IProtocol* _Protocol_k__BackingField;
		mscorlib::System::Action_3<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, System::System::Uri, System::System::Uri>* OnRedirected;
		mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection>* OnConnected;
		mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, mscorlib::System::String>* OnError;
		mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection>* OnClosed;
		mscorlib::System::Func_3<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message, mscorlib::System::Boolean>* OnMessage;
		Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* _AuthenticationProvider_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalRCore::Messages::NegotiationResult* _NegotiationResult_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalRCore::HubOptions* _Options_k__BackingField;
		int32_t _RedirectCount_k__BackingField;
		int64_t lastInvocationId;
		int32_t lastStreamId;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int64, mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message>>* invocations;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::BestHTTP::SignalRCore::Subscription>* subscriptions;
		mscorlib::System::DateTime lastMessageSent;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Object*>* EmptyArgs;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System::System::Uri* get_Uri();
		void set_Uri(System::System::Uri* value);
		Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates get_State();
		void set_State(Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates value);
		Assembly_CSharp::BestHTTP::SignalRCore::ITransport* get_Transport();
		void set_Transport(Assembly_CSharp::BestHTTP::SignalRCore::ITransport* value);
		Assembly_CSharp::BestHTTP::SignalRCore::IProtocol* get_Protocol();
		void set_Protocol(Assembly_CSharp::BestHTTP::SignalRCore::IProtocol* value);
		void add_OnRedirected(mscorlib::System::Action_3<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, System::System::Uri, System::System::Uri>* value);
		void remove_OnRedirected(mscorlib::System::Action_3<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, System::System::Uri, System::System::Uri>* value);
		void add_OnConnected(mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection>* value);
		void remove_OnConnected(mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection>* value);
		void add_OnError(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, mscorlib::System::String>* value);
		void remove_OnError(mscorlib::System::Action_2<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, mscorlib::System::String>* value);
		void add_OnClosed(mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection>* value);
		void remove_OnClosed(mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection>* value);
		void add_OnMessage(mscorlib::System::Func_3<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message, mscorlib::System::Boolean>* value);
		void remove_OnMessage(mscorlib::System::Func_3<Assembly_CSharp::BestHTTP::SignalRCore::HubConnection, Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message, mscorlib::System::Boolean>* value);
		Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* get_AuthenticationProvider();
		void set_AuthenticationProvider(Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* value);
		Assembly_CSharp::BestHTTP::SignalRCore::Messages::NegotiationResult* get_NegotiationResult();
		void set_NegotiationResult(Assembly_CSharp::BestHTTP::SignalRCore::Messages::NegotiationResult* value);
		Assembly_CSharp::BestHTTP::SignalRCore::HubOptions* get_Options();
		void set_Options(Assembly_CSharp::BestHTTP::SignalRCore::HubOptions* value);
		int32_t get_RedirectCount();
		void set_RedirectCount(int32_t value);
		void _ctor(System::System::Uri* hubUri, Assembly_CSharp::BestHTTP::SignalRCore::IProtocol* protocol);
		void _ctor(System::System::Uri* hubUri, Assembly_CSharp::BestHTTP::SignalRCore::IProtocol* protocol, Assembly_CSharp::BestHTTP::SignalRCore::HubOptions* options);
		void StartConnect();
		void OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* provider);
		void OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalRCore::IAuthenticationProvider* provider, mscorlib::System::String* reason);
		void StartNegotiation();
		void ConnectImpl();
		bool IsTransportSupported(mscorlib::System::String* transportName);
		void OnNegotiationRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void StartClose();
		template <typename TResult> Assembly_CSharp::BestHTTP::Futures::IFuture_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>* Stream(mscorlib::System::String* target, IL2CPP::Array<mscorlib::System::Object*>* args)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Stream", std::vector<std::string> { "System.String", "System.Object[]" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)target;
			params[1] = (intptr_t)args;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>*)returnValue;
		}
		template <typename T> void CancelStream(Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<T>* container)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CancelStream", std::vector<std::string> { "BestHTTP.SignalRCore.StreamItemContainer`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)container;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TResult> Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>* Invoke(mscorlib::System::String* target, IL2CPP::Array<mscorlib::System::Object*>* args)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.String", "System.Object[]" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)target;
			params[1] = (intptr_t)args;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::Futures::IFuture_1<TResult>*)returnValue;
		}
		Assembly_CSharp::BestHTTP::Futures::IFuture_1<mscorlib::System::Boolean>* Send(mscorlib::System::String* target, IL2CPP::Array<mscorlib::System::Object*>* args);
		int64_t InvokeImp(mscorlib::System::String* target, IL2CPP::Array<mscorlib::System::Object*>* args, mscorlib::System::Action_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message>* callback, bool isStreamingInvocation);
		void SendMessage(Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message message);
		template <typename TResult> Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>* UploadStreamWithDownStream(mscorlib::System::String* target, int32_t paramCount)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadStreamWithDownStream", std::vector<std::string> { "System.String", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)target;
			params[1] = (intptr_t)&paramCount;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<TResult>>*)returnValue;
		}
		template <typename TResult> Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>* Upload(mscorlib::System::String* target, int32_t paramCount)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upload", std::vector<std::string> { "System.String", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TResult::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)target;
			params[1] = (intptr_t)&paramCount;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<TResult>*)returnValue;
		}
		void On(mscorlib::System::String* methodName, mscorlib::System::Action* callback);
		template <typename T1> void On(mscorlib::System::String* methodName, mscorlib::System::Action_1<T1>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "On", std::vector<std::string> { "System.String", "System.Action`1<T1>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T1::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)methodName;
			params[1] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T1, typename T2> void On(mscorlib::System::String* methodName, mscorlib::System::Action_2<T1, T2>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "On", std::vector<std::string> { "System.String", "System.Action`2<T1,T2>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)methodName;
			params[1] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T1, typename T2, typename T3> void On(mscorlib::System::String* methodName, mscorlib::System::Action_3<T1, T2, T3>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "On", std::vector<std::string> { "System.String", "System.Action`3<T1,T2,T3>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(3);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = T3::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)methodName;
			params[1] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T1, typename T2, typename T3, typename T4> void On(mscorlib::System::String* methodName, mscorlib::System::Action_4<T1, T2, T3, T4>* callback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "On", std::vector<std::string> { "System.String", "System.Action`4<T1,T2,T3,T4>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(4);
			typeArguments->vector[0] = T1::GetIl2CppType();
			typeArguments->vector[1] = T2::GetIl2CppType();
			typeArguments->vector[2] = T3::GetIl2CppType();
			typeArguments->vector[3] = T4::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)methodName;
			params[1] = (intptr_t)callback;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void On(mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Type*>* paramTypes, mscorlib::System::Action_1<IL2CPP::Array<mscorlib::System::Object*>>* callback);
		void OnMessages(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::Message>* messages);
		void Transport_OnStateChanged(Assembly_CSharp::BestHTTP::SignalRCore::TransportStates oldState, Assembly_CSharp::BestHTTP::SignalRCore::TransportStates newState);
		void SetState(Assembly_CSharp::BestHTTP::SignalRCore::ConnectionStates state, mscorlib::System::String* errorReason);
		void BestHTTP_Extensions_IHeartbeat_OnHeartbeatUpdate(mscorlib::System::TimeSpan dif);
		static void _cctor();
	};
}

