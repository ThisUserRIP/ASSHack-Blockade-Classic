#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_CmsEnvelopedGenerator.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsEnvelopedData; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsProcessable; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct CipherKeyGenerator; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsEnvelopedDataGenerator : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedGenerator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* rand);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* content, mscorlib::System::String* encryptionOid, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* content, mscorlib::System::String* encryptionOid);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsProcessable* content, mscorlib::System::String* encryptionOid, int32_t keySize);
	};
}

