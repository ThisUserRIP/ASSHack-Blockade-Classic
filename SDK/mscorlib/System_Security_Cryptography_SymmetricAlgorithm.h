#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Security::Cryptography { struct KeySizes; };
#include "System_Security_Cryptography_CipherMode.h"
#include "System_Security_Cryptography_PaddingMode.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::Cryptography { struct ICryptoTransform; };

namespace mscorlib::System::Security::Cryptography
{
	struct SymmetricAlgorithm : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t BlockSizeValue;
		int32_t FeedbackSizeValue;
		IL2CPP::Array<uint8_t>* IVValue;
		IL2CPP::Array<uint8_t>* KeyValue;
		IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* LegalBlockSizesValue;
		IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* LegalKeySizesValue;
		int32_t KeySizeValue;
		mscorlib::System::Security::Cryptography::CipherMode ModeValue;
		mscorlib::System::Security::Cryptography::PaddingMode PaddingValue;
		void _ctor();
		void Dispose();
		void Clear();
		void Dispose(bool disposing);
		int32_t get_BlockSize();
		void set_BlockSize(int32_t value);
		int32_t get_FeedbackSize();
		void set_FeedbackSize(int32_t value);
		IL2CPP::Array<uint8_t>* get_IV();
		void set_IV(IL2CPP::Array<uint8_t>* value);
		IL2CPP::Array<uint8_t>* get_Key();
		void set_Key(IL2CPP::Array<uint8_t>* value);
		IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* get_LegalBlockSizes();
		IL2CPP::Array<mscorlib::System::Security::Cryptography::KeySizes*>* get_LegalKeySizes();
		int32_t get_KeySize();
		void set_KeySize(int32_t value);
		mscorlib::System::Security::Cryptography::CipherMode get_Mode();
		void set_Mode(mscorlib::System::Security::Cryptography::CipherMode value);
		mscorlib::System::Security::Cryptography::PaddingMode get_Padding();
		void set_Padding(mscorlib::System::Security::Cryptography::PaddingMode value);
		bool ValidKeySize(int32_t bitLength);
		static mscorlib::System::Security::Cryptography::SymmetricAlgorithm* Create();
		static mscorlib::System::Security::Cryptography::SymmetricAlgorithm* Create(mscorlib::System::String* algName);
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateEncryptor();
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(IL2CPP::Array<uint8_t>* rgbKey, IL2CPP::Array<uint8_t>* rgbIV);
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateDecryptor();
		mscorlib::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(IL2CPP::Array<uint8_t>* rgbKey, IL2CPP::Array<uint8_t>* rgbIV);
		void GenerateKey();
		void GenerateIV();
	};
}

