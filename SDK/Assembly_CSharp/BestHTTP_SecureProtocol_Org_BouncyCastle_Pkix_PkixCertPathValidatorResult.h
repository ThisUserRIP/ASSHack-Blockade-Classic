#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct TrustAnchor; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixPolicyNode; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	struct PkixCertPathValidatorResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* get_PolicyTree();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* get_TrustAnchor();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_SubjectPublicKey();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey);
		mscorlib::System::Object* Clone();
		mscorlib::System::String* ToString();
	};
}

