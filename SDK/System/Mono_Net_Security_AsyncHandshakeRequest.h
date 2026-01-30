#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_Security_AsyncProtocolRequest.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::Mono::Net::Security { struct MobileAuthenticatedStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Mono_Net_Security_AsyncOperationStatus.h"

namespace System::Mono::Net::Security
{
	struct AsyncHandshakeRequest : System::Mono::Net::Security::AsyncProtocolRequest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync);
		System::Mono::Net::Security::AsyncOperationStatus Run(System::Mono::Net::Security::AsyncOperationStatus status);
	};
}

