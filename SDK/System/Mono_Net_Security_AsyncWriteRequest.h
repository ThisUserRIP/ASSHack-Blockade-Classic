#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_Security_AsyncReadOrWriteRequest.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::Mono::Net::Security { struct MobileAuthenticatedStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Mono_Net_Security_AsyncOperationStatus.h"

namespace System::Mono::Net::Security
{
	struct AsyncWriteRequest : System::Mono::Net::Security::AsyncReadOrWriteRequest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		System::Mono::Net::Security::AsyncOperationStatus Run(System::Mono::Net::Security::AsyncOperationStatus status);
	};
}

