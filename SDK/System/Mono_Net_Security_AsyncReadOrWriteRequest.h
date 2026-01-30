#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_Security_AsyncProtocolRequest.h"
namespace System::Mono::Net::Security { struct BufferOffsetSize; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::Mono::Net::Security { struct MobileAuthenticatedStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };

namespace System::Mono::Net::Security
{
	struct AsyncReadOrWriteRequest : System::Mono::Net::Security::AsyncProtocolRequest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Mono::Net::Security::BufferOffsetSize* _UserBuffer_k__BackingField;
		int32_t _CurrentSize_k__BackingField;
		System::Mono::Net::Security::BufferOffsetSize* get_UserBuffer();
		int32_t get_CurrentSize();
		void set_CurrentSize(int32_t value);
		void _ctor(System::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		mscorlib::System::String* ToString();
	};
}

