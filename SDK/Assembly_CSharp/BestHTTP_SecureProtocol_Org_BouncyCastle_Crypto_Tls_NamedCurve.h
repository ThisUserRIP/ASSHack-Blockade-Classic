#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct NamedCurve : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t sect163k1;
			int32_t sect163r1;
			int32_t sect163r2;
			int32_t sect193r1;
			int32_t sect193r2;
			int32_t sect233k1;
			int32_t sect233r1;
			int32_t sect239k1;
			int32_t sect283k1;
			int32_t sect283r1;
			int32_t sect409k1;
			int32_t sect409r1;
			int32_t sect571k1;
			int32_t sect571r1;
			int32_t secp160k1;
			int32_t secp160r1;
			int32_t secp160r2;
			int32_t secp192k1;
			int32_t secp192r1;
			int32_t secp224k1;
			int32_t secp224r1;
			int32_t secp256k1;
			int32_t secp256r1;
			int32_t secp384r1;
			int32_t secp521r1;
			int32_t brainpoolP256r1;
			int32_t brainpoolP384r1;
			int32_t brainpoolP512r1;
			int32_t arbitrary_explicit_prime_curves;
			int32_t arbitrary_explicit_char2_curves;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool IsValid(int32_t namedCurve);
		static bool RefersToASpecificNamedCurve(int32_t namedCurve);
		void _ctor();
	};
}

