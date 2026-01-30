#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Security_Cryptography_SymmetricTransform.h"
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct RC2; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Security::Cryptography
{
	struct RC2Transform : mscorlib::Mono::Security::Cryptography::SymmetricTransform
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint16_t R0;
		uint16_t R1;
		uint16_t R2;
		uint16_t R3;
		IL2CPP::Array<uint16_t>* K;
		int32_t j;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* pitable;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Security::Cryptography::RC2* rc2Algo, bool encryption, IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* iv);
		void ECB(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		static void _cctor();
	};
}

