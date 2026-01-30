#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::Mono::Security { struct ASN1; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };

namespace mscorlib::Mono::Security
{
	struct ASN1Convert : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::Mono::Security::ASN1* FromInt32(int32_t value);
		static mscorlib::Mono::Security::ASN1* FromOid(mscorlib::System::String* oid);
		static int32_t ToInt32(mscorlib::Mono::Security::ASN1* asn1);
		static mscorlib::System::String* ToOid(mscorlib::Mono::Security::ASN1* asn1);
		static mscorlib::System::DateTime ToDateTime(mscorlib::Mono::Security::ASN1* time);
	};
}

