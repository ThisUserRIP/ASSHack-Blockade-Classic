#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IDictionary; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro { struct Gost3410ParamSetParameters; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
namespace mscorlib::System::Collections { struct IEnumerable; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro
{
	struct Gost3410NamedParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::IDictionary* objIds;
			mscorlib::System::Collections::IDictionary* parameters;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* cryptoProA;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* cryptoProB;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* cryptoProXchA;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* GetByOid(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
		static mscorlib::System::Collections::IEnumerable* get_Names();
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* GetByName(mscorlib::System::String* name);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(mscorlib::System::String* name);
	};
}

