#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "BestHTTP_SignalRCore_Messages_MessageTypes.h"

namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages
{
	struct CancelInvocationMessage
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* invocationId;
		Assembly_CSharp::BestHTTP::SignalRCore::Messages::MessageTypes get_type();
	};
}

