#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SignalR::Authentication { struct OnAuthenticationSuccededDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalR::Authentication { struct OnAuthenticationFailedDelegate; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP::Cookies { struct Cookie; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "BestHTTP_SignalR_RequestTypes.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp::BestHTTP::SignalR::Authentication
{
	struct SampleCookieAuthentication : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* _AuthUri_k__BackingField;
		mscorlib::System::String* _UserName_k__BackingField;
		mscorlib::System::String* _Password_k__BackingField;
		mscorlib::System::String* _UserRoles_k__BackingField;
		bool _IsPreAuthRequired_k__BackingField;
		Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate* OnAuthenticationSucceded;
		Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate* OnAuthenticationFailed;
		Assembly_CSharp::BestHTTP::HTTPRequest* AuthRequest;
		Assembly_CSharp::BestHTTP::Cookies::Cookie* Cookie;
		System::System::Uri* get_AuthUri();
		void set_AuthUri(System::System::Uri* value);
		mscorlib::System::String* get_UserName();
		void set_UserName(mscorlib::System::String* value);
		mscorlib::System::String* get_Password();
		void set_Password(mscorlib::System::String* value);
		mscorlib::System::String* get_UserRoles();
		void set_UserRoles(mscorlib::System::String* value);
		bool get_IsPreAuthRequired();
		void set_IsPreAuthRequired(bool value);
		void add_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate* value);
		void remove_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationSuccededDelegate* value);
		void add_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate* value);
		void remove_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalR::Authentication::OnAuthenticationFailedDelegate* value);
		void _ctor(System::System::Uri* authUri, mscorlib::System::String* user, mscorlib::System::String* passwd, mscorlib::System::String* roles);
		void StartAuthentication();
		void PrepareRequest(Assembly_CSharp::BestHTTP::HTTPRequest* request, Assembly_CSharp::BestHTTP::SignalR::RequestTypes type);
		void OnAuthRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
	};
}

