#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_IO_BaseOutputStream.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_CmsAuthenticatedDataStreamGenerator.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsAuthenticatedDataStreamGenerator; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IMac; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct BerSequenceGenerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::BaseOutputStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* macStream;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* authGen;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen;
		void _ctor(mscorlib::System::IO::Stream* macStream, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* authGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);
		void WriteByte(uint8_t b);
		void Write(IL2CPP::Array<uint8_t>* bytes, int32_t off, int32_t len);
		void Close();
	};
}

