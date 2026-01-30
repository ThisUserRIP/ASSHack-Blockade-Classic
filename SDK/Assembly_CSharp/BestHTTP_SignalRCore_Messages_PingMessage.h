#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SignalRCore_Messages_MessageTypes.h"

namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages
{
	struct PingMessage
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SignalRCore::Messages::MessageTypes get_type();
	};
}

