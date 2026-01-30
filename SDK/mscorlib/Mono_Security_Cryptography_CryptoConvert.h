#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Security::Cryptography { struct RSA; };
namespace mscorlib::System::Security::Cryptography { struct DSA; };

namespace mscorlib::Mono::Security::Cryptography
{
	struct CryptoConvert : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t ToInt32LE(IL2CPP::Array<uint8_t>* bytes, int32_t offset);
		static uint32_t ToUInt32LE(IL2CPP::Array<uint8_t>* bytes, int32_t offset);
		static IL2CPP::Array<uint8_t>* GetBytesLE(int32_t val);
		static IL2CPP::Array<uint8_t>* Trim(IL2CPP::Array<uint8_t>* array);
		static mscorlib::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(IL2CPP::Array<uint8_t>* blob, int32_t offset);
		static mscorlib::System::Security::Cryptography::DSA* FromCapiPrivateKeyBlobDSA(IL2CPP::Array<uint8_t>* blob, int32_t offset);
		static IL2CPP::Array<uint8_t>* ToCapiPrivateKeyBlob(mscorlib::System::Security::Cryptography::RSA* rsa);
		static IL2CPP::Array<uint8_t>* ToCapiPrivateKeyBlob(mscorlib::System::Security::Cryptography::DSA* dsa);
		static mscorlib::System::Security::Cryptography::RSA* FromCapiPublicKeyBlob(IL2CPP::Array<uint8_t>* blob, int32_t offset);
		static mscorlib::System::Security::Cryptography::DSA* FromCapiPublicKeyBlobDSA(IL2CPP::Array<uint8_t>* blob, int32_t offset);
		static IL2CPP::Array<uint8_t>* ToCapiPublicKeyBlob(mscorlib::System::Security::Cryptography::RSA* rsa);
		static IL2CPP::Array<uint8_t>* ToCapiPublicKeyBlob(mscorlib::System::Security::Cryptography::DSA* dsa);
		static mscorlib::System::Security::Cryptography::RSA* FromCapiKeyBlob(IL2CPP::Array<uint8_t>* blob);
		static mscorlib::System::Security::Cryptography::RSA* FromCapiKeyBlob(IL2CPP::Array<uint8_t>* blob, int32_t offset);
		static mscorlib::System::Security::Cryptography::DSA* FromCapiKeyBlobDSA(IL2CPP::Array<uint8_t>* blob);
		static mscorlib::System::Security::Cryptography::DSA* FromCapiKeyBlobDSA(IL2CPP::Array<uint8_t>* blob, int32_t offset);
	};
}

