#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_RSA.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::Mono::Math { struct BigInteger; };
namespace mscorlib::Mono::Security::Cryptography { struct RSAManaged_KeyGeneratedEventHandler; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Security_Cryptography_RSAParameters.h"
namespace mscorlib::System::Security::Cryptography { struct RSAParameters; };

namespace mscorlib::Mono::Security::Cryptography
{
	struct RSAManaged : mscorlib::System::Security::Cryptography::RSA
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isCRTpossible;
		bool keyBlinding;
		bool keypairGenerated;
		bool m_disposed;
		mscorlib::Mono::Math::BigInteger* d;
		mscorlib::Mono::Math::BigInteger* p;
		mscorlib::Mono::Math::BigInteger* q;
		mscorlib::Mono::Math::BigInteger* dp;
		mscorlib::Mono::Math::BigInteger* dq;
		mscorlib::Mono::Math::BigInteger* qInv;
		mscorlib::Mono::Math::BigInteger* n;
		mscorlib::Mono::Math::BigInteger* e;
		mscorlib::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* KeyGenerated;
		void _ctor(int32_t keySize);
		void Finalize();
		void GenerateKeyPair();
		int32_t get_KeySize();
		mscorlib::System::String* get_KeyExchangeAlgorithm();
		bool get_PublicOnly();
		mscorlib::System::String* get_SignatureAlgorithm();
		IL2CPP::Array<uint8_t>* DecryptValue(IL2CPP::Array<uint8_t>* rgb);
		IL2CPP::Array<uint8_t>* EncryptValue(IL2CPP::Array<uint8_t>* rgb);
		mscorlib::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);
		void ImportParameters(mscorlib::System::Security::Cryptography::RSAParameters parameters);
		void Dispose(bool disposing);
		void add_KeyGenerated(mscorlib::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* value);
		void remove_KeyGenerated(mscorlib::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* value);
		mscorlib::System::String* ToXmlString(bool includePrivateParameters);
		bool get_IsCrtPossible();
		IL2CPP::Array<uint8_t>* GetPaddedValue(mscorlib::Mono::Math::BigInteger* value, int32_t length);
	};
}

