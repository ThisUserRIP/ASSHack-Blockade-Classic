#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SignalR::Authentication { struct OnAuthenticationSuccededDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR::Authentication { struct OnAuthenticationFailedDelegate; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
#include "BestHTTP_SignalR_RequestTypes.h"

namespace Assembly_CSharp::BestHTTP::SignalR::Authentication
{
	struct IAuthenticationProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_IsPreAuthRequired();
		void add_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate* value);
		void remove_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate* value);
		void add_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate* value);
		void remove_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate* value);
		void StartAuthentication();
		void PrepareRequest(Assembly_CSharp::BestHTTP::HTTPRequest* request, Assembly_CSharp::BestHTTP::SignalR::RequestTypes type);
	};
}

