#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct AttributeCertificateHolder; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct AttributeCertificateIssuer; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Attribute; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	struct IX509AttributeCertificate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_Version();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();
		mscorlib::System::DateTime get_NotBefore();
		mscorlib::System::DateTime get_NotAfter();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder* get_Holder();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer* get_Issuer();
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Attribute*>* GetAttributes();
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Attribute*>* GetAttributes(mscorlib::System::String* oid);
		IL2CPP::Array<bool>* GetIssuerUniqueID();
		bool get_IsValidNow();
		bool IsValid(mscorlib::System::DateTime date);
		void CheckValidity();
		void CheckValidity(mscorlib::System::DateTime date);
		IL2CPP::Array<uint8_t>* GetSignature();
		void Verify(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);
		IL2CPP::Array<uint8_t>* GetEncoded();
	};
}

