#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp { struct TimeStampResp; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { struct TimeStampToken; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1InputStream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { struct PkiFailureInfo; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { struct TimeStampRequest; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	struct TimeStampResponse : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampToken* timeStampToken;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* resp);
		void _ctor(IL2CPP::Array<uint8_t>* resp);
		void _ctor(mscorlib::System::IO::Stream* input);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* readTimeStampResp(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream* input);
		int32_t get_Status();
		mscorlib::System::String* GetStatusString();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* GetFailInfo();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampToken* get_TimeStampToken();
		void Validate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* request);
		IL2CPP::Array<uint8_t>* GetEncoded();
	};
}

