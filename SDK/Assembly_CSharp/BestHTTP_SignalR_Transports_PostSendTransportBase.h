#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalR_Transports_TransportBase.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SignalR { struct Connection; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp::BestHTTP::SignalR::Transports
{
	struct PostSendTransportBase : Assembly_CSharp::BestHTTP::SignalR::Transports::TransportBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::HTTPRequest>* sendRequestQueue;
		void _ctor(mscorlib::System::String* name, Assembly_CSharp::BestHTTP::SignalR::Connection* con);
		void SendImpl(mscorlib::System::String* json);
		void OnSendRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
	};
}

