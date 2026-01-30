#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Mono_Security_Protocol_Ntlm_NtlmFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Mono_Security::Mono::Security::Protocol::Ntlm
{
	struct MessageBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _type;
		Mono_Security::Mono::Security::Protocol::Ntlm::NtlmFlags _flags;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* header;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t messageType);
		Mono_Security::Mono::Security::Protocol::Ntlm::NtlmFlags get_Flags();
		void set_Flags(Mono_Security::Mono::Security::Protocol::Ntlm::NtlmFlags value);
		int32_t get_Type();
		IL2CPP::Array<uint8_t>* PrepareMessage(int32_t messageSize);
		void Decode(IL2CPP::Array<uint8_t>* message);
		bool CheckHeader(IL2CPP::Array<uint8_t>* message);
		IL2CPP::Array<uint8_t>* GetBytes();
		static void _cctor();
	};
}

