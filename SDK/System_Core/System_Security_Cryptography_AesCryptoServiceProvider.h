#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Security_Cryptography_Aes.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct ICryptoTransform; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Security_Cryptography_CipherMode.h"
#include "..\mscorlib\System_Security_Cryptography_PaddingMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Core::System::Security::Cryptography
{
	struct AesCryptoServiceProvider : mscorlib::System::Security::Cryptography::Aes
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void GenerateIV();
		void GenerateKey();
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* iv);
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* iv);
		IL2CPP::Array<uint8_t>* get_IV();
		void set_IV(IL2CPP::Array<uint8_t>* value);
		IL2CPP::Array<uint8_t>* get_Key();
		void set_Key(IL2CPP::Array<uint8_t>* value);
		int32_t get_KeySize();
		void set_KeySize(int32_t value);
		int32_t get_FeedbackSize();
		void set_FeedbackSize(int32_t value);
		mscorlib::System::Security::Cryptography::CipherMode get_Mode();
		void set_Mode(mscorlib::System::Security::Cryptography::CipherMode value);
		mscorlib::System::Security::Cryptography::PaddingMode get_Padding();
		void set_Padding(mscorlib::System::Security::Cryptography::PaddingMode value);
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateDecryptor();
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateEncryptor();
		void Dispose(bool disposing);
	};
}

