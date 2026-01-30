#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509CertificatePair; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct X509CertStoreSelector; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	struct X509CertPairStoreSelector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* certPair;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* forwardSelector;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* reverseSelector;
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* CloneSelector(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* s);
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector* o);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* get_CertPair();
		void set_CertPair(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* get_ForwardSelector();
		void set_ForwardSelector(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* get_ReverseSelector();
		void set_ReverseSelector(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* value);
		bool Match(mscorlib::System::Object* obj);
		mscorlib::System::Object* Clone();
	};
}

