#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_WebRequest.h"
namespace System::System::Net { struct WebRequest; };
namespace System::System::Net { struct WebProxy; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct ICredentials; };

namespace System::System::Net
{
	struct WebRequest_WebProxyWrapperOpaque : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::WebProxy* webProxy;
		System::Uri* GetProxy(System::Uri* destination);
		bool IsBypassed(System::Uri* host);
		System::Net::ICredentials* get_Credentials();
	};
}

