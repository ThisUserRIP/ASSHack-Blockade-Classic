#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Certificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct IX509Store; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct OriginatorInfo; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct OriginatorInfoGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IList* origCerts;
		mscorlib::System::Collections::IList* origCrls;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* origCert);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* origCerts);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* origCerts, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* origCrls);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Generate();
	};
}

