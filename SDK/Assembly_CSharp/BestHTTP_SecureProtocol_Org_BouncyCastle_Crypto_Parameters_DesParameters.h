#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_KeyParameter.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	struct DesParameters : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t DesKeyLength;
			int32_t N_DES_WEAK_KEYS;
			IL2CPP::Array<uint8_t>* DES_weak_keys;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<uint8_t>* key);
		void _ctor(IL2CPP::Array<uint8_t>* key, int32_t keyOff, int32_t keyLen);
		static bool IsWeakKey(IL2CPP::Array<uint8_t>* key, int32_t offset);
		static bool IsWeakKey(IL2CPP::Array<uint8_t>* key);
		static uint8_t SetOddParity(uint8_t b);
		static void SetOddParity(IL2CPP::Array<uint8_t>* bytes);
		static void SetOddParity(IL2CPP::Array<uint8_t>* bytes, int32_t off, int32_t len);
		static void _cctor();
	};
}

