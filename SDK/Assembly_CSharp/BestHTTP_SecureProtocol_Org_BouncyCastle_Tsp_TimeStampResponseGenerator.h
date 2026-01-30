#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_Cmp_PkiStatus.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1EncodableVector; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { struct TimeStampTokenGenerator; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { struct PkiStatusInfo; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { struct TimeStampResponse; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp { struct TimeStampRequest; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { struct DateTimeObject; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	struct TimeStampResponseGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus status;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* statusStrings;
		int32_t failInfo;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator;
		mscorlib::System::Collections::IList* acceptedAlgorithms;
		mscorlib::System::Collections::IList* acceptedPolicies;
		mscorlib::System::Collections::IList* acceptedExtensions;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, mscorlib::System::Collections::IList* acceptedAlgorithms);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, mscorlib::System::Collections::IList* acceptedAlgorithms, mscorlib::System::Collections::IList* acceptedPolicy);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampTokenGenerator* tokenGenerator, mscorlib::System::Collections::IList* acceptedAlgorithms, mscorlib::System::Collections::IList* acceptedPolicies, mscorlib::System::Collections::IList* acceptedExtensions);
		void AddStatusString(mscorlib::System::String* statusString);
		void SetFailInfoField(int32_t field);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* GetPkiStatusInfo();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampResponse* Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* request, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* serialNumber, mscorlib::System::DateTime genTime);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampResponse* Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampRequest* request, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* serialNumber, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* genTime);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp::TimeStampResponse* GenerateFailResponse(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatus status, int32_t failInfoField, mscorlib::System::String* statusString);
	};
}

