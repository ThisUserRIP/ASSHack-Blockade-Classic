#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct OnAuthenticationSuccededDelegate; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { struct OnAuthenticationFailedDelegate; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct PreAuthAccessTokenAuthenticator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SignalRCore::OnAuthenticationSuccededDelegate* OnAuthenticationSucceded;
		Assembly_CSharp::BestHTTP::SignalRCore::OnAuthenticationFailedDelegate* OnAuthenticationFailed;
		System::System::Uri* authenticationUri;
		mscorlib::System::String* _Token_k__BackingField;
		bool get_IsPreAuthRequired();
		void add_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalRCore::OnAuthenticationSuccededDelegate* value);
		void remove_OnAuthenticationSucceded(Assembly_CSharp::BestHTTP::SignalRCore::OnAuthenticationSuccededDelegate* value);
		void add_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalRCore::OnAuthenticationFailedDelegate* value);
		void remove_OnAuthenticationFailed(Assembly_CSharp::BestHTTP::SignalRCore::OnAuthenticationFailedDelegate* value);
		mscorlib::System::String* get_Token();
		void set_Token(mscorlib::System::String* value);
		void _ctor(System::System::Uri* authUri);
		void StartAuthentication();
		void OnAuthenticationRequestFinished(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void AuthenticationFailed(mscorlib::System::String* reason);
		void PrepareRequest(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		System::System::Uri* PrepareUri(System::System::Uri* uri);
	};
}

