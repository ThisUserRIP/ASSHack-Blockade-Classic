#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct OnAuthenticationSuccededDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct OnAuthenticationFailedDelegate; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace System::System { struct Uri; };

namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	struct IAuthenticationProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_IsPreAuthRequired();
		void add_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalRCore::OnAuthenticationSuccededDelegate* value);
		void remove_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalRCore::OnAuthenticationSuccededDelegate* value);
		void add_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalRCore::OnAuthenticationFailedDelegate* value);
		void remove_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalRCore::OnAuthenticationFailedDelegate* value);
		void StartAuthentication();
		void PrepareRequest(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		System::System::Uri* PrepareUri(System::System::Uri* uri);
	};
}

