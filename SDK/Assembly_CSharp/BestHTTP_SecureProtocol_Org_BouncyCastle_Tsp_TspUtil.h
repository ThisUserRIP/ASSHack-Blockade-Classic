#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct SignerInformation; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Certificate; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDigest; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509Extensions; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	struct TspUtil : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* EmptySet;
			mscorlib::System::Collections::IList* EmptyList;
			mscorlib::System::Collections::IDictionary* digestLengths;
			mscorlib::System::Collections::IDictionary* digestNames;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static mscorlib::System::Collections::ICollection* GetSignatureTimestamps(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* signerInfo);
		static void ValidateCertificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert);
		static mscorlib::System::String* GetDigestAlgName(mscorlib::System::String* digestAlgOID);
		static int32_t GetDigestLength(mscorlib::System::String* digestAlgOID);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* CreateDigestInstance(mscorlib::System::String* digestAlgOID);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetCriticalExtensionOids(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetNonCriticalExtensionOids(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);
		static mscorlib::System::Collections::IList* GetExtensionOids(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);
		void _ctor();
	};
}

