#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SignalR::Authentication { struct OnAuthenticationSuccededDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR::Authentication { struct OnAuthenticationFailedDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
#include "BestHTTP_SignalR_RequestTypes.h"

namespace Assembly_CSharp::BestHTTP::SignalR::Authentication
{
	struct HeaderAuthenticator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _User_k__BackingField;
		mscorlib::System::String* _Roles_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate* OnAuthenticationSucceded;
		Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate* OnAuthenticationFailed;
		mscorlib::System::String* get_User();
		void set_User(mscorlib::System::String* value);
		mscorlib::System::String* get_Roles();
		void set_Roles(mscorlib::System::String* value);
		bool get_IsPreAuthRequired();
		void add_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate* value);
		void remove_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate* value);
		void add_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate* value);
		void remove_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate* value);
		void _ctor(mscorlib::System::String* user, mscorlib::System::String* roles);
		void StartAuthentication();
		void PrepareRequest(Assembly_CSharp::BestHTTP::HTTPRequest* request, Assembly_CSharp::BestHTTP::SignalR::RequestTypes type);
	};
}

