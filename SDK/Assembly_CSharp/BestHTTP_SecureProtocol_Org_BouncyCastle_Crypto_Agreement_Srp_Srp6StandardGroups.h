#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct Srp6GroupParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp
{
	struct Srp6StandardGroups : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* rfc5054_1024_N;
			mscorlib::System::String* rfc5054_1024_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_1024;
			mscorlib::System::String* rfc5054_1536_N;
			mscorlib::System::String* rfc5054_1536_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_1536;
			mscorlib::System::String* rfc5054_2048_N;
			mscorlib::System::String* rfc5054_2048_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_2048;
			mscorlib::System::String* rfc5054_3072_N;
			mscorlib::System::String* rfc5054_3072_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_3072;
			mscorlib::System::String* rfc5054_4096_N;
			mscorlib::System::String* rfc5054_4096_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_4096;
			mscorlib::System::String* rfc5054_6144_N;
			mscorlib::System::String* rfc5054_6144_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_6144;
			mscorlib::System::String* rfc5054_8192_N;
			mscorlib::System::String* rfc5054_8192_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* rfc5054_8192;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* FromHex(mscorlib::System::String* hex);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* FromNG(mscorlib::System::String* hexN, mscorlib::System::String* hexG);
		void _ctor();
		static void _cctor();
	};
}

