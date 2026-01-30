#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509CertificatePair; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	struct X509CertPairParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* currentStream;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* ReadDerCrossCertificatePair(mscorlib::System::IO::Stream* inStream);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* ReadCertPair(IL2CPP::Array<uint8_t>* input);
		mscorlib::System::Collections::ICollection* ReadCertPairs(IL2CPP::Array<uint8_t>* input);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* ReadCertPair(mscorlib::System::IO::Stream* inStream);
		mscorlib::System::Collections::ICollection* ReadCertPairs(mscorlib::System::IO::Stream* inStream);
		void _ctor();
	};
}

