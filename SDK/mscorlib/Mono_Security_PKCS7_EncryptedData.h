#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Security_PKCS7.h"
namespace mscorlib::Mono::Security { struct PKCS7; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::Mono::Security { struct PKCS7_ContentInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::Mono::Security { struct ASN1; };

namespace mscorlib::Mono::Security
{
	struct PKCS7_EncryptedData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t _version;
		mscorlib::Mono::Security::PKCS7_ContentInfo* _content;
		mscorlib::Mono::Security::PKCS7_ContentInfo* _encryptionAlgorithm;
		IL2CPP::Array<uint8_t>* _encrypted;
		void _ctor();
		void _ctor(mscorlib::Mono::Security::ASN1* asn1);
		mscorlib::Mono::Security::PKCS7_ContentInfo* get_EncryptionAlgorithm();
		IL2CPP::Array<uint8_t>* get_EncryptedContent();
	};
}

