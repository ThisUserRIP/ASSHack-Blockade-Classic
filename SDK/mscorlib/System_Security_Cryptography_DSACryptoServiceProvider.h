#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_DSA.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::Mono::Security::Cryptography { struct KeyPairPersistence; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::Mono::Security::Cryptography { struct DSAManaged; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct CspParameters; };
namespace mscorlib::System { struct String; };
#include "System_Security_Cryptography_DSAParameters.h"
namespace mscorlib::System::Security::Cryptography { struct DSAParameters; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct Stream; };
#include "System_Security_Cryptography_HashAlgorithmName.h"
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithmName; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct EventArgs; };
namespace mscorlib::System::Security::Cryptography { struct CspKeyContainerInfo; };

namespace mscorlib::System::Security::Cryptography
{
	struct DSACryptoServiceProvider : mscorlib::System::Security::Cryptography::DSA
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::Security::Cryptography::KeyPairPersistence* store;
		bool persistKey;
		bool persisted;
		bool privateKeyExportable;
		bool m_disposed;
		mscorlib::Mono::Security::Cryptography::DSAManaged* dsa;
		struct StaticFields
		{
			int32_t PROV_DSS_DH;
			bool useMachineKeyStore;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Security::Cryptography::CspParameters* parameters);
		void _ctor(int32_t dwKeySize);
		void _ctor(int32_t dwKeySize, mscorlib::System::Security::Cryptography::CspParameters* parameters);
		void Common(int32_t dwKeySize, bool parameters);
		void Common(mscorlib::System::Security::Cryptography::CspParameters* parameters);
		void Finalize();
		mscorlib::System::String* get_KeyExchangeAlgorithm();
		int32_t get_KeySize();
		bool get_PersistKeyInCsp();
		void set_PersistKeyInCsp(bool value);
		bool get_PublicOnly();
		mscorlib::System::String* get_SignatureAlgorithm();
		static bool get_UseMachineKeyStore();
		static void set_UseMachineKeyStore(bool value);
		mscorlib::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);
		void ImportParameters(mscorlib::System::Security::Cryptography::DSAParameters parameters);
		IL2CPP::Array<uint8_t>* CreateSignature(IL2CPP::Array<uint8_t>* rgbHash);
		IL2CPP::Array<uint8_t>* SignData(IL2CPP::Array<uint8_t>* buffer);
		IL2CPP::Array<uint8_t>* SignData(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		IL2CPP::Array<uint8_t>* SignData(mscorlib::System::IO::Stream* inputStream);
		IL2CPP::Array<uint8_t>* SignHash(IL2CPP::Array<uint8_t>* rgbHash, mscorlib::System::String* str);
		bool VerifyData(IL2CPP::Array<uint8_t>* rgbData, IL2CPP::Array<uint8_t>* rgbSignature);
		bool VerifyHash(IL2CPP::Array<uint8_t>* rgbHash, mscorlib::System::String* str, IL2CPP::Array<uint8_t>* rgbSignature);
		bool VerifySignature(IL2CPP::Array<uint8_t>* rgbHash, IL2CPP::Array<uint8_t>* rgbSignature);
		IL2CPP::Array<uint8_t>* HashData(IL2CPP::Array<uint8_t>* data, int32_t offset, int32_t count, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		IL2CPP::Array<uint8_t>* HashData(mscorlib::System::IO::Stream* data, mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		void Dispose(bool disposing);
		void OnKeyGenerated(mscorlib::System::Object* sender, mscorlib::System::EventArgs* e);
		mscorlib::System::Security::Cryptography::CspKeyContainerInfo* get_CspKeyContainerInfo();
		IL2CPP::Array<uint8_t>* ExportCspBlob(bool includePrivateParameters);
		void ImportCspBlob(IL2CPP::Array<uint8_t>* keyBlob);
	};
}

