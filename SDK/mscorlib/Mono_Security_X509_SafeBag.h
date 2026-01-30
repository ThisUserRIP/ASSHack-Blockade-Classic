#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::Mono::Security { struct ASN1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Security::X509
{
	struct SafeBag : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _bagOID;
		mscorlib::Mono::Security::ASN1* _asn1;
		void _ctor(mscorlib::System::String* bagOID, mscorlib::Mono::Security::ASN1* asn1);
		mscorlib::System::String* get_BagOID();
		mscorlib::Mono::Security::ASN1* get_ASN1();
	};
}

