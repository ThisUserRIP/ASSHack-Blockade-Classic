#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages { struct SupportedTransport; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct HubConnection; };

namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages
{
	struct NegotiationResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _ConnectionId_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::SupportedTransport>* _SupportedTransports_k__BackingField;
		System::System::Uri* _Url_k__BackingField;
		mscorlib::System::String* _AccessToken_k__BackingField;
		mscorlib::System::String* get_ConnectionId();
		void set_ConnectionId(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::SupportedTransport>* get_SupportedTransports();
		void set_SupportedTransports(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SignalRCore::Messages::SupportedTransport>* value);
		System::System::Uri* get_Url();
		void set_Url(System::System::Uri* value);
		mscorlib::System::String* get_AccessToken();
		void set_AccessToken(mscorlib::System::String* value);
		static Assembly_CSharp::BestHTTP::SignalRCore::Messages::NegotiationResult* Parse(mscorlib::System::String* json, mscorlib::System::String& error, Assembly_CSharp::BestHTTP::SignalRCore::HubConnection* hub);
		void _ctor();
	};
}

