#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\Mono_Security_Cryptography_SymmetricTransform.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct Aes; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Core::System::Security::Cryptography
{
	struct AesTransform : mscorlib::Mono::Security::Cryptography::SymmetricTransform
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint32_t>* expandedKey;
		int32_t Nk;
		int32_t Nr;
		struct StaticFields
		{
			IL2CPP::Array<uint32_t>* Rcon;
			IL2CPP::Array<uint8_t>* SBox;
			IL2CPP::Array<uint8_t>* iSBox;
			IL2CPP::Array<uint32_t>* T0;
			IL2CPP::Array<uint32_t>* T1;
			IL2CPP::Array<uint32_t>* T2;
			IL2CPP::Array<uint32_t>* T3;
			IL2CPP::Array<uint32_t>* iT0;
			IL2CPP::Array<uint32_t>* iT1;
			IL2CPP::Array<uint32_t>* iT2;
			IL2CPP::Array<uint32_t>* iT3;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Security::Cryptography::Aes* algo, bool encryption, IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* iv);
		void ECB(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		uint32_t SubByte(uint32_t a);
		void Encrypt128(IL2CPP::Array<uint8_t>* indata, IL2CPP::Array<uint8_t>* outdata, IL2CPP::Array<uint32_t>* ekey);
		void Decrypt128(IL2CPP::Array<uint8_t>* indata, IL2CPP::Array<uint8_t>* outdata, IL2CPP::Array<uint32_t>* ekey);
		static void _cctor();
	};
}

