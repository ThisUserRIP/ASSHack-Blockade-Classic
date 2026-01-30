#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IVerifierFactory; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Operators
{
	struct Asn1VerifierFactoryProvider : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory* CreateVerifierFactory(mscorlib::System::Object* algorithmDetails);
		mscorlib::System::Collections::IEnumerable* get_SignatureAlgNames();
	};
}

