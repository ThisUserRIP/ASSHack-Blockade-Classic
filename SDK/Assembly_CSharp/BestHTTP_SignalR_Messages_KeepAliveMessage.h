#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SignalR_MessageTypes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SignalR::Messages
{
	struct KeepAliveMessage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SignalR::MessageTypes BestHTTP_SignalR_Messages_IServerMessage_get_Type();
		void BestHTTP_SignalR_Messages_IServerMessage_Parse(mscorlib::System::Object* data);
		void _ctor();
	};
}

