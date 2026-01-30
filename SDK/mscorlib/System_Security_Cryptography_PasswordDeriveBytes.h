#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_DeriveBytes.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithm; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct CspParameters; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Cryptography { struct CryptoStream; };

namespace mscorlib::System::Security::Cryptography
{
	struct PasswordDeriveBytes : mscorlib::System::Security::Cryptography::DeriveBytes
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _extraCount;
		int32_t _prefix;
		int32_t _iterations;
		IL2CPP::Array<uint8_t>* _baseValue;
		IL2CPP::Array<uint8_t>* _extra;
		IL2CPP::Array<uint8_t>* _salt;
		mscorlib::System::String* _hashName;
		IL2CPP::Array<uint8_t>* _password;
		mscorlib::System::Security::Cryptography::HashAlgorithm* _hash;
		void _ctor(mscorlib::System::String* strPassword, IL2CPP::Array<uint8_t>* rgbSalt);
		void _ctor(IL2CPP::Array<uint8_t>* password, IL2CPP::Array<uint8_t>* salt);
		void _ctor(mscorlib::System::String* strPassword, IL2CPP::Array<uint8_t>* rgbSalt, mscorlib::System::String* strHashName, int32_t iterations);
		void _ctor(IL2CPP::Array<uint8_t>* password, IL2CPP::Array<uint8_t>* salt, mscorlib::System::String* hashName, int32_t iterations);
		void _ctor(mscorlib::System::String* strPassword, IL2CPP::Array<uint8_t>* rgbSalt, mscorlib::System::Security::Cryptography::CspParameters* cspParams);
		void _ctor(IL2CPP::Array<uint8_t>* password, IL2CPP::Array<uint8_t>* salt, mscorlib::System::Security::Cryptography::CspParameters* cspParams);
		void _ctor(mscorlib::System::String* strPassword, IL2CPP::Array<uint8_t>* rgbSalt, mscorlib::System::String* strHashName, int32_t iterations, mscorlib::System::Security::Cryptography::CspParameters* cspParams);
		void _ctor(IL2CPP::Array<uint8_t>* password, IL2CPP::Array<uint8_t>* salt, mscorlib::System::String* hashName, int32_t iterations, mscorlib::System::Security::Cryptography::CspParameters* cspParams);
		mscorlib::System::String* get_HashName();
		void set_HashName(mscorlib::System::String* value);
		int32_t get_IterationCount();
		void set_IterationCount(int32_t value);
		IL2CPP::Array<uint8_t>* get_Salt();
		void set_Salt(IL2CPP::Array<uint8_t>* value);
		IL2CPP::Array<uint8_t>* GetBytes(int32_t cb);
		void Reset();
		void Dispose(bool disposing);
		IL2CPP::Array<uint8_t>* CryptDeriveKey(mscorlib::System::String* algname, mscorlib::System::String* alghashname, int32_t keySize, IL2CPP::Array<uint8_t>* rgbIV);
		IL2CPP::Array<uint8_t>* ComputeBaseValue();
		IL2CPP::Array<uint8_t>* ComputeBytes(int32_t cb);
		void HashPrefix(mscorlib::System::Security::Cryptography::CryptoStream* cs);
	};
}

