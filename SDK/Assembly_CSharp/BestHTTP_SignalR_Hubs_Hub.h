#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct OnMethodCallDelegate; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "BestHTTP_SignalR_Messages_ClientMessage.h"
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct ClientMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct OnMethodCallCallbackDelegate; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct OnMethodResultDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct OnMethodFailedDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct OnMethodProgressDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct MethodCallMessage; };
namespace Assembly_CSharp::BestHTTP::SignalR::Messages { struct IServerMessage; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };

namespace Assembly_CSharp::BestHTTP::SignalR::Hubs
{
	struct Hub : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Name_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* state;
		Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodCallDelegate* OnMethodCall;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt64, Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage>* SentMessages;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodCallCallbackDelegate>* MethodTable;
		mscorlib::System::Text::StringBuilder* builder;
		Assembly_CSharp::BestHTTP::SignalR::Connection* _BestHTTP_SignalR_Hubs_IHub_Connection_k__BackingField;
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* get_State();
		void add_OnMethodCall(Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodCallDelegate* value);
		void remove_OnMethodCall(Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodCallDelegate* value);
		Assembly_CSharp::BestHTTP::SignalR::Connection* BestHTTP_SignalR_Hubs_IHub_get_Connection();
		void BestHTTP_SignalR_Hubs_IHub_set_Connection(Assembly_CSharp::BestHTTP::SignalR::Connection* value);
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, Assembly_CSharp::BestHTTP::SignalR::Connection* manager);
		void On(mscorlib::System::String* method, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodCallCallbackDelegate* callback);
		void Off(mscorlib::System::String* method);
		bool Call(mscorlib::System::String* method, IL2CPP::Array<mscorlib::System::Object*>* args);
		bool Call(mscorlib::System::String* method, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* onResult, IL2CPP::Array<mscorlib::System::Object*>* args);
		bool Call(mscorlib::System::String* method, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* onResult, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate* onResultError, IL2CPP::Array<mscorlib::System::Object*>* args);
		bool Call(mscorlib::System::String* method, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* onResult, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate* onProgress, IL2CPP::Array<mscorlib::System::Object*>* args);
		bool Call(mscorlib::System::String* method, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* onResult, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate* onResultError, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate* onProgress, IL2CPP::Array<mscorlib::System::Object*>* args);
		bool BestHTTP_SignalR_Hubs_IHub_Call(Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg);
		bool BestHTTP_SignalR_Hubs_IHub_HasSentMessageId(uint64_t id);
		void BestHTTP_SignalR_Hubs_IHub_Close();
		void BestHTTP_SignalR_Hubs_IHub_OnMethod(Assembly_CSharp::BestHTTP::SignalR::Messages::MethodCallMessage* msg);
		void BestHTTP_SignalR_Hubs_IHub_OnMessage(Assembly_CSharp::BestHTTP::SignalR::Messages::IServerMessage* msg);
		void MergeState(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* state);
		mscorlib::System::String* BuildMessage(Assembly_CSharp::BestHTTP::SignalR::Messages::ClientMessage msg);
	};
}

