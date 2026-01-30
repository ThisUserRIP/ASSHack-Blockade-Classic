#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct ICredentials; };

namespace System::System::Net
{
	struct IWebProxy
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Uri* GetProxy(System::Uri* destination);
		bool IsBypassed(System::Uri* host);
		System::Net::ICredentials* get_Credentials();
	};
}

