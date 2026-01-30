#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "Mono_MonoAssemblyName__public_key_token_e__FixedBuffer.h"
namespace mscorlib::Mono { struct MonoAssemblyName__public_key_token_e__FixedBuffer; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace mscorlib::Mono
{
	struct MonoAssemblyName
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t name;
		intptr_t culture;
		intptr_t hash_value;
		intptr_t public_key;
		mscorlib::Mono::MonoAssemblyName__public_key_token_e__FixedBuffer public_key_token;
		uint32_t hash_alg;
		uint32_t hash_len;
		uint32_t flags;
		uint16_t major;
		uint16_t minor;
		uint16_t build;
		uint16_t revision;
		uint16_t arch;
	};
}

