#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Security_PKCS7.h"
namespace mscorlib::Mono::Security { struct PKCS7; };
namespace mscorlib::System { struct String; };
namespace mscorlib::Mono::Security { struct ASN1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::Mono::Security
{
	struct PKCS7_ContentInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* contentType;
		mscorlib::Mono::Security::ASN1* content;
		void _ctor();
		void _ctor(mscorlib::System::String* oid);
		void _ctor(IL2CPP::Array<uint8_t>* data);
		void _ctor(mscorlib::Mono::Security::ASN1* asn1);
		mscorlib::Mono::Security::ASN1* get_ASN1();
		mscorlib::Mono::Security::ASN1* get_Content();
		void set_Content(mscorlib::Mono::Security::ASN1* value);
		mscorlib::System::String* get_ContentType();
		void set_ContentType(mscorlib::System::String* value);
		mscorlib::Mono::Security::ASN1* GetASN1();
	};
}

