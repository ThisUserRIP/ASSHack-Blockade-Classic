#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SignalR_Transports_ServerSentEventsTransport.h"
namespace Assembly_CSharp::BestHTTP::SignalR::Transports { struct ServerSentEventsTransport; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct OnRetryDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::ServerSentEvents { struct EventSource; };

namespace Assembly_CSharp::BestHTTP::SignalR::Transports
{
	struct ServerSentEventsTransport___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SignalR::Transports::ServerSentEventsTransport___c* __9;
			Assembly_CSharp::BestHTTP::ServerSentEvents::OnRetryDelegate* __9__6_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _Connect_b__6_0(Assembly_CSharp::BestHTTP::ServerSentEvents::EventSource* es);
	};
}

