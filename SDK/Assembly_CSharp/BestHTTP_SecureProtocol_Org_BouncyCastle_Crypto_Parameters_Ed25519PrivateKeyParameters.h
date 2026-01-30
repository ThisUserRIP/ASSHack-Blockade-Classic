#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_AsymmetricKeyParameter.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct Ed25519PublicKeyParameters; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Rfc8032_Ed25519_Algorithm.h"

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	struct Ed25519PrivateKeyParameters : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* data;
		struct StaticFields
		{
			int32_t KeySize;
			int32_t SignatureSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random);
		void _ctor(IL2CPP::Array<uint8_t>* buf, int32_t off);
		void _ctor(mscorlib::System::IO::Stream* input);
		void Encode(IL2CPP::Array<uint8_t>* buf, int32_t off);
		IL2CPP::Array<uint8_t>* GetEncoded();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* GeneratePublicKey();
		void Sign(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_Algorithm algorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey, IL2CPP::Array<uint8_t>* ctx, IL2CPP::Array<uint8_t>* msg, int32_t msgOff, int32_t msgLen, IL2CPP::Array<uint8_t>* sig, int32_t sigOff);
		static void _cctor();
	};
}

