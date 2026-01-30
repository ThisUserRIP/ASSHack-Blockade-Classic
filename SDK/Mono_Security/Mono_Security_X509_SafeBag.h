#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Mono_Security::Mono::Security { struct ASN1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Mono_Security::Mono::Security::X509
{
	struct SafeBag : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _bagOID;
		Mono_Security::Mono::Security::ASN1* _asn1;
		void _ctor(mscorlib::System::String* bagOID, Mono_Security::Mono::Security::ASN1* asn1);
		mscorlib::System::String* get_BagOID();
		Mono_Security::Mono::Security::ASN1* get_ASN1();
	};
}

