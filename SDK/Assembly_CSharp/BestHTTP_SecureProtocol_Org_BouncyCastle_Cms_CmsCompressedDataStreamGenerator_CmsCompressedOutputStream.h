#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_IO_BaseOutputStream.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_CmsCompressedDataStreamGenerator.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsCompressedDataStreamGenerator; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct ZOutputStream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct BerSequenceGenerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsCompressedDataStreamGenerator_CmsCompressedOutputStream : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::BaseOutputStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* _out;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _sGen;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _cGen;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* _eiGen;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZOutputStream* outStream, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* sGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen);
		void WriteByte(uint8_t b);
		void Write(IL2CPP::Array<uint8_t>* bytes, int32_t off, int32_t len);
		void Close();
	};
}

