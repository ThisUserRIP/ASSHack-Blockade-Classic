#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct Hub; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct OnMethodResultDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct OnMethodFailedDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR::Hubs { struct OnMethodProgressDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SignalR::Messages
{
	struct ClientMessage
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* Hub;
		mscorlib::System::String* Method;
		IL2CPP::Array<mscorlib::System::Object*>* Args;
		uint64_t CallIdx;
		Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* ResultCallback;
		Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate* ResultErrorCallback;
		Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate* ProgressCallback;
		void _ctor(Assembly_CSharp::BestHTTP::SignalR::Hubs::Hub* hub, mscorlib::System::String* method, IL2CPP::Array<mscorlib::System::Object*>* args, uint64_t callIdx, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodResultDelegate* resultCallback, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodFailedDelegate* resultErrorCallback, Assembly_CSharp::BestHTTP::SignalR::Hubs::OnMethodProgressDelegate* progressCallback);
	};
}

