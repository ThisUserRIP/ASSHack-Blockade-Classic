#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_Rijndael.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct ICryptoTransform; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Security_Cryptography_CipherMode.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Security_Cryptography_RijndaelManagedTransformMode.h"

namespace mscorlib::System::Security::Cryptography
{
	struct RijndaelManaged : mscorlib::System::Security::Cryptography::Rijndael
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(IL2CPP::Array<uint8_t>* rgbKey, IL2CPP::Array<uint8_t>* rgbIV);
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(IL2CPP::Array<uint8_t>* rgbKey, IL2CPP::Array<uint8_t>* rgbIV);
		void GenerateKey();
		void GenerateIV();
		mscorlib::System::Security::Cryptography::ICryptoTransform* NewEncryptor(IL2CPP::Array<uint8_t>* rgbKey, mscorlib::System::Security::Cryptography::CipherMode mode, IL2CPP::Array<uint8_t>* rgbIV, int32_t feedbackSize, mscorlib::System::Security::Cryptography::RijndaelManagedTransformMode encryptMode);
	};
}

