#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct CipherKeyGenerator; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IAsymmetricCipherKeyPairGenerator; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	struct GeneratorUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::IDictionary* kgAlgorithms;
			mscorlib::System::Collections::IDictionary* kpgAlgorithms;
			mscorlib::System::Collections::IDictionary* defaultKeySizes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
		static void AddDefaultKeySizeEntries(int32_t size, IL2CPP::Array<mscorlib::System::String*>* algorithms);
		static void AddKgAlgorithm(mscorlib::System::String* canonicalName, IL2CPP::Array<mscorlib::System::Object*>* aliases);
		static void AddKpgAlgorithm(mscorlib::System::String* canonicalName, IL2CPP::Array<mscorlib::System::Object*>* aliases);
		static void AddHMacKeyGenerator(mscorlib::System::String* algorithm, IL2CPP::Array<mscorlib::System::Object*>* aliases);
		static mscorlib::System::String* GetCanonicalKeyGeneratorAlgorithm(mscorlib::System::String* algorithm);
		static mscorlib::System::String* GetCanonicalKeyPairGeneratorAlgorithm(mscorlib::System::String* algorithm);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator* GetKeyGenerator(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator* GetKeyGenerator(mscorlib::System::String* algorithm);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* GetKeyPairGenerator(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator* GetKeyPairGenerator(mscorlib::System::String* algorithm);
		static int32_t GetDefaultKeySize(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
		static int32_t GetDefaultKeySize(mscorlib::System::String* algorithm);
		static int32_t FindDefaultKeySize(mscorlib::System::String* canonicalName);
	};
}

