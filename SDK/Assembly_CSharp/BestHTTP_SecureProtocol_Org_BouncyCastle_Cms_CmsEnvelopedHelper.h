#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBufferedCipher; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IWrapper; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct RecipientInformationStore; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Set; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { struct CmsSecureReadable; };
namespace mscorlib::System::Collections { struct IList; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct RecipientInfo; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsEnvelopedHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Instance;
			mscorlib::System::Collections::IDictionary* KeySizes;
			mscorlib::System::Collections::IDictionary* BaseCipherNames;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		mscorlib::System::String* GetAsymmetricEncryptionAlgName(mscorlib::System::String* encryptionAlgOid);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* CreateAsymmetricCipher(mscorlib::System::String* encryptionOid);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IWrapper* CreateWrapper(mscorlib::System::String* encryptionOid);
		mscorlib::System::String* GetRfc3211WrapperName(mscorlib::System::String* oid);
		int32_t GetKeySize(mscorlib::System::String* oid);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformationStore* BuildRecipientInformationStore(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);
		static void ReadRecipientInfo(mscorlib::System::Collections::IList* infos, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::RecipientInfo* info, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);
		void _ctor();
	};
}

