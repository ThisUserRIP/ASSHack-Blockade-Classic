#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct DHParameters; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct DHPublicKeyParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct DHPrivateKeyParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricCipherKeyPair; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsDHVerifier; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsDHUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Two;
			mscorlib::System::String* draft_ffdhe2432_p;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe2432;
			mscorlib::System::String* draft_ffdhe3072_p;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe3072;
			mscorlib::System::String* draft_ffdhe4096_p;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe4096;
			mscorlib::System::String* draft_ffdhe6144_p;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe6144;
			mscorlib::System::String* draft_ffdhe8192_p;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* draft_ffdhe8192;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* FromHex(mscorlib::System::String* hex);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* FromSafeP(mscorlib::System::String* hexP);
		static void AddNegotiatedDheGroupsClientExtension(mscorlib::System::Collections::IDictionary* extensions, IL2CPP::Array<uint8_t>* dheGroups);
		static void AddNegotiatedDheGroupsServerExtension(mscorlib::System::Collections::IDictionary* extensions, uint8_t dheGroup);
		static IL2CPP::Array<uint8_t>* GetNegotiatedDheGroupsClientExtension(mscorlib::System::Collections::IDictionary* extensions);
		static int16_t GetNegotiatedDheGroupsServerExtension(mscorlib::System::Collections::IDictionary* extensions);
		static IL2CPP::Array<uint8_t>* CreateNegotiatedDheGroupsClientExtension(IL2CPP::Array<uint8_t>* dheGroups);
		static IL2CPP::Array<uint8_t>* CreateNegotiatedDheGroupsServerExtension(uint8_t dheGroup);
		static IL2CPP::Array<uint8_t>* ReadNegotiatedDheGroupsClientExtension(IL2CPP::Array<uint8_t>* extensionData);
		static uint8_t ReadNegotiatedDheGroupsServerExtension(IL2CPP::Array<uint8_t>* extensionData);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* GetParametersForDHEGroup(int16_t dheGroup);
		static bool ContainsDheCipherSuites(IL2CPP::Array<int32_t>* cipherSuites);
		static bool IsDheCipherSuite(int32_t cipherSuite);
		static bool AreCompatibleParameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* a, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* b);
		static IL2CPP::Array<uint8_t>* CalculateDHBasicAgreement(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* publicKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKey);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateDHKeyPair(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* GenerateEphemeralClientKeyExchange(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams, mscorlib::System::IO::Stream* output);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* GenerateEphemeralServerKeyExchange(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams, mscorlib::System::IO::Stream* output);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ReadDHParameter(mscorlib::System::IO::Stream* input);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* ReadDHParameters(mscorlib::System::IO::Stream* input);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* ReceiveDHParameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* dhVerifier, mscorlib::System::IO::Stream* input);
		static void WriteDHParameter(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x, mscorlib::System::IO::Stream* output);
		static void WriteDHParameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParameters, mscorlib::System::IO::Stream* output);
		void _ctor();
		static void _cctor();
	};
}

