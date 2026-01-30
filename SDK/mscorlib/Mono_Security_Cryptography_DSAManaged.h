#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_DSA.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::Mono::Math { struct BigInteger; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
namespace mscorlib::Mono::Security::Cryptography { struct DSAManaged_KeyGeneratedEventHandler; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "System_Security_Cryptography_DSAParameters.h"
namespace mscorlib::System::Security::Cryptography { struct DSAParameters; };

namespace mscorlib::Mono::Security::Cryptography
{
	struct DSAManaged : mscorlib::System::Security::Cryptography::DSA
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool keypairGenerated;
		bool m_disposed;
		mscorlib::Mono::Math::BigInteger* p;
		mscorlib::Mono::Math::BigInteger* q;
		mscorlib::Mono::Math::BigInteger* g;
		mscorlib::Mono::Math::BigInteger* x;
		mscorlib::Mono::Math::BigInteger* y;
		mscorlib::Mono::Math::BigInteger* j;
		mscorlib::Mono::Math::BigInteger* seed;
		int32_t counter;
		bool j_missing;
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng;
		mscorlib::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* KeyGenerated;
		void _ctor(int32_t dwKeySize);
		void Finalize();
		void Generate();
		void GenerateKeyPair();
		void add(IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b, int32_t value);
		void GenerateParams(int32_t keyLength);
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* get_Random();
		int32_t get_KeySize();
		mscorlib::System::String* get_KeyExchangeAlgorithm();
		bool get_PublicOnly();
		mscorlib::System::String* get_SignatureAlgorithm();
		IL2CPP::Array<uint8_t>* NormalizeArray(IL2CPP::Array<uint8_t>* array);
		mscorlib::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);
		void ImportParameters(mscorlib::System::Security::Cryptography::DSAParameters parameters);
		IL2CPP::Array<uint8_t>* CreateSignature(IL2CPP::Array<uint8_t>* rgbHash);
		bool VerifySignature(IL2CPP::Array<uint8_t>* rgbHash, IL2CPP::Array<uint8_t>* rgbSignature);
		void Dispose(bool disposing);
		void add_KeyGenerated(mscorlib::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* value);
		void remove_KeyGenerated(mscorlib::Mono::Security::Cryptography::DSAManaged_KeyGeneratedEventHandler* value);
	};
}

