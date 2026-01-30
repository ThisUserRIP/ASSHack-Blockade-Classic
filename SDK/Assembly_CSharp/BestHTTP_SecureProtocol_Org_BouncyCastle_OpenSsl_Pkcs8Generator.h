#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { struct PemObject; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl
{
	struct Pkcs8Generator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<wchar_t>* password;
		mscorlib::System::String* algorithm;
		int32_t iterationCount;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random;
		struct StaticFields
		{
			mscorlib::System::String* PbeSha1_RC4_128;
			mscorlib::System::String* PbeSha1_RC4_40;
			mscorlib::System::String* PbeSha1_3DES;
			mscorlib::System::String* PbeSha1_2DES;
			mscorlib::System::String* PbeSha1_RC2_128;
			mscorlib::System::String* PbeSha1_RC2_40;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, mscorlib::System::String* algorithm);
		void set_SecureRandom(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* value);
		void set_Password(IL2CPP::Array<wchar_t>* value);
		void set_IterationCount(int32_t value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate();
		static void _cctor();
	};
}

