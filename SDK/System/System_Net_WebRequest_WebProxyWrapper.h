#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebRequest_WebProxyWrapperOpaque.h"
#include "System_Net_WebRequest.h"
namespace System::System::Net { struct WebRequest; };
namespace System::System::Net { struct WebProxy; };

namespace System::System::Net
{
	struct WebRequest_WebProxyWrapper : System::Net::WebRequest_WebProxyWrapperOpaque
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::WebProxy* get_WebProxy();
	};
}

