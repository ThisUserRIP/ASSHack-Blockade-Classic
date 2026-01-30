#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_HttpWebRequest.h"
namespace System::System::Net { struct HttpWebRequest; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Net_HttpWebRequest_NtlmAuthState.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct WebResponse; };
#include "System_Net_HttpStatusCode.h"
namespace mscorlib::System { struct String; };

namespace System::System::Net
{
	struct HttpWebRequest_AuthorizationState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::HttpWebRequest* request;
		bool isProxy;
		bool isCompleted;
		System::Net::HttpWebRequest_NtlmAuthState ntlm_auth_state;
		bool get_IsCompleted();
		System::Net::HttpWebRequest_NtlmAuthState get_NtlmAuthState();
		bool get_IsNtlmAuthenticated();
		void _ctor(System::Net::HttpWebRequest* request, bool isProxy);
		bool CheckAuthorization(System::Net::WebResponse* response, System::Net::HttpStatusCode code);
		void Reset();
		mscorlib::System::String* ToString();
	};
}

