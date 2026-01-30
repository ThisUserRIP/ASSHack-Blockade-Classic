#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { struct DHParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement
{
	struct DHStandardGroups : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* rfc2409_768_p;
			mscorlib::System::String* rfc2409_768_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc2409_768;
			mscorlib::System::String* rfc2409_1024_p;
			mscorlib::System::String* rfc2409_1024_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc2409_1024;
			mscorlib::System::String* rfc3526_1536_p;
			mscorlib::System::String* rfc3526_1536_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_1536;
			mscorlib::System::String* rfc3526_2048_p;
			mscorlib::System::String* rfc3526_2048_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_2048;
			mscorlib::System::String* rfc3526_3072_p;
			mscorlib::System::String* rfc3526_3072_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_3072;
			mscorlib::System::String* rfc3526_4096_p;
			mscorlib::System::String* rfc3526_4096_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_4096;
			mscorlib::System::String* rfc3526_6144_p;
			mscorlib::System::String* rfc3526_6144_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_6144;
			mscorlib::System::String* rfc3526_8192_p;
			mscorlib::System::String* rfc3526_8192_g;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_8192;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc4306_768;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc4306_1024;
			mscorlib::System::String* rfc5114_1024_160_p;
			mscorlib::System::String* rfc5114_1024_160_g;
			mscorlib::System::String* rfc5114_1024_160_q;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5114_1024_160;
			mscorlib::System::String* rfc5114_2048_224_p;
			mscorlib::System::String* rfc5114_2048_224_g;
			mscorlib::System::String* rfc5114_2048_224_q;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5114_2048_224;
			mscorlib::System::String* rfc5114_2048_256_p;
			mscorlib::System::String* rfc5114_2048_256_g;
			mscorlib::System::String* rfc5114_2048_256_q;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5114_2048_256;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5996_768;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5996_1024;
			mscorlib::System::String* rfc7919_ffdhe2048_p;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe2048;
			mscorlib::System::String* rfc7919_ffdhe3072_p;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe3072;
			mscorlib::System::String* rfc7919_ffdhe4096_p;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe4096;
			mscorlib::System::String* rfc7919_ffdhe6144_p;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe6144;
			mscorlib::System::String* rfc7919_ffdhe8192_p;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe8192;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* FromHex(mscorlib::System::String* hex);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* FromPG(mscorlib::System::String* hexP, mscorlib::System::String* hexG);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* FromPGQ(mscorlib::System::String* hexP, mscorlib::System::String* hexG, mscorlib::System::String* hexQ);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* Rfc7919Parameters(mscorlib::System::String* hexP, int32_t l);
		void _ctor();
		static void _cctor();
	};
}

