#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	struct PbeParametersGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* mPassword;
		IL2CPP::Array<uint8_t>* mSalt;
		int32_t mIterationCount;
		void _ctor();
		void Init(IL2CPP::Array<uint8_t>* password, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount);
		IL2CPP::Array<uint8_t>* get_Password();
		IL2CPP::Array<uint8_t>* GetPassword();
		IL2CPP::Array<uint8_t>* get_Salt();
		IL2CPP::Array<uint8_t>* GetSalt();
		int32_t get_IterationCount();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(mscorlib::System::String* algorithm, int32_t keySize);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize, int32_t ivSize);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(mscorlib::System::String* algorithm, int32_t keySize, int32_t ivSize);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int32_t keySize);
		static IL2CPP::Array<uint8_t>* Pkcs5PasswordToBytes(IL2CPP::Array<wchar_t>* password);
		static IL2CPP::Array<uint8_t>* Pkcs5PasswordToBytes(mscorlib::System::String* password);
		static IL2CPP::Array<uint8_t>* Pkcs5PasswordToUtf8Bytes(IL2CPP::Array<wchar_t>* password);
		static IL2CPP::Array<uint8_t>* Pkcs5PasswordToUtf8Bytes(mscorlib::System::String* password);
		static IL2CPP::Array<uint8_t>* Pkcs12PasswordToBytes(IL2CPP::Array<wchar_t>* password);
		static IL2CPP::Array<uint8_t>* Pkcs12PasswordToBytes(IL2CPP::Array<wchar_t>* password, bool wrongPkcs12Zero);
	};
}

