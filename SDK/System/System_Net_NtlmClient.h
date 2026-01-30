#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct IAuthenticationModule; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct Authorization; };
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct WebRequest; };
namespace System::System::Net { struct ICredentials; };

namespace System::System::Net
{
	struct NtlmClient : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::IAuthenticationModule* authObject;
		void _ctor();
		System::Net::Authorization* Authenticate(mscorlib::System::String* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
		System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
		mscorlib::System::String* get_AuthenticationType();
	};
}

