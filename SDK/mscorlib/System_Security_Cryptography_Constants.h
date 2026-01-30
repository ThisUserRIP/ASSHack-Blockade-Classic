#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Security::Cryptography
{
	struct Constants : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t S_OK;
			int32_t NTE_FILENOTFOUND;
			int32_t NTE_NO_KEY;
			int32_t NTE_BAD_KEYSET;
			int32_t NTE_KEYSET_NOT_DEF;
			int32_t KP_IV;
			int32_t KP_MODE;
			int32_t KP_MODE_BITS;
			int32_t KP_EFFECTIVE_KEYLEN;
			int32_t ALG_CLASS_SIGNATURE;
			int32_t ALG_CLASS_DATA_ENCRYPT;
			int32_t ALG_CLASS_HASH;
			int32_t ALG_CLASS_KEY_EXCHANGE;
			int32_t ALG_TYPE_DSS;
			int32_t ALG_TYPE_RSA;
			int32_t ALG_TYPE_BLOCK;
			int32_t ALG_TYPE_STREAM;
			int32_t ALG_TYPE_ANY;
			int32_t CALG_MD5;
			int32_t CALG_SHA1;
			int32_t CALG_SHA_256;
			int32_t CALG_SHA_384;
			int32_t CALG_SHA_512;
			int32_t CALG_RSA_KEYX;
			int32_t CALG_RSA_SIGN;
			int32_t CALG_DSS_SIGN;
			int32_t CALG_DES;
			int32_t CALG_RC2;
			int32_t CALG_3DES;
			int32_t CALG_3DES_112;
			int32_t CALG_AES_128;
			int32_t CALG_AES_192;
			int32_t CALG_AES_256;
			int32_t CALG_RC4;
			int32_t PROV_RSA_FULL;
			int32_t PROV_DSS_DH;
			int32_t PROV_RSA_AES;
			int32_t AT_KEYEXCHANGE;
			int32_t AT_SIGNATURE;
			int32_t PUBLICKEYBLOB;
			int32_t PRIVATEKEYBLOB;
			int32_t CRYPT_OAEP;
			uint32_t CRYPT_VERIFYCONTEXT;
			uint32_t CRYPT_NEWKEYSET;
			uint32_t CRYPT_DELETEKEYSET;
			uint32_t CRYPT_MACHINE_KEYSET;
			uint32_t CRYPT_SILENT;
			uint32_t CRYPT_EXPORTABLE;
			uint32_t CLR_KEYLEN;
			uint32_t CLR_PUBLICKEYONLY;
			uint32_t CLR_EXPORTABLE;
			uint32_t CLR_REMOVABLE;
			uint32_t CLR_HARDWARE;
			uint32_t CLR_ACCESSIBLE;
			uint32_t CLR_PROTECTED;
			uint32_t CLR_UNIQUE_CONTAINER;
			uint32_t CLR_ALGID;
			uint32_t CLR_PP_CLIENT_HWND;
			uint32_t CLR_PP_PIN;
			mscorlib::System::String* OID_RSA_SMIMEalgCMS3DESwrap;
			mscorlib::System::String* OID_RSA_MD5;
			mscorlib::System::String* OID_RSA_RC2CBC;
			mscorlib::System::String* OID_RSA_DES_EDE3_CBC;
			mscorlib::System::String* OID_OIWSEC_desCBC;
			mscorlib::System::String* OID_OIWSEC_SHA1;
			mscorlib::System::String* OID_OIWSEC_SHA256;
			mscorlib::System::String* OID_OIWSEC_SHA384;
			mscorlib::System::String* OID_OIWSEC_SHA512;
			mscorlib::System::String* OID_OIWSEC_RIPEMD160;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
	};
}

