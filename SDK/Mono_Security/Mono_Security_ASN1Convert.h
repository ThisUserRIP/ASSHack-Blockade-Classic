#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Mono_Security::Mono::Security { struct ASN1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };

namespace Mono_Security::Mono::Security
{
	struct ASN1Convert : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Mono_Security::Mono::Security::ASN1* FromInt32(int32_t value);
		static Mono_Security::Mono::Security::ASN1* FromOid(mscorlib::System::String* oid);
		static Mono_Security::Mono::Security::ASN1* FromUnsignedBigInteger(IL2CPP::Array<uint8_t>* big);
		static int32_t ToInt32(Mono_Security::Mono::Security::ASN1* asn1);
		static mscorlib::System::String* ToOid(Mono_Security::Mono::Security::ASN1* asn1);
		static mscorlib::System::DateTime ToDateTime(Mono_Security::Mono::Security::ASN1* time);
	};
}

