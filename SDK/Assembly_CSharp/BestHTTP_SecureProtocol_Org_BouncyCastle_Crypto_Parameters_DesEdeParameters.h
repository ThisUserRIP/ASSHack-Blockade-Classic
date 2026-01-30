#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Parameters_DesParameters.h"
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
	struct DesEdeParameters : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DesParameters
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t DesEdeKeyLength;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<uint8_t>* FixKey(IL2CPP::Array<uint8_t>* key, int32_t keyOff, int32_t keyLen);
		void _ctor(IL2CPP::Array<uint8_t>* key);
		void _ctor(IL2CPP::Array<uint8_t>* key, int32_t keyOff, int32_t keyLen);
		static bool IsWeakKey(IL2CPP::Array<uint8_t>* key, int32_t offset, int32_t length);
		static bool IsWeakKey(IL2CPP::Array<uint8_t>* key, int32_t offset);
		static bool IsWeakKey(IL2CPP::Array<uint8_t>* key);
		static bool IsRealEdeKey(IL2CPP::Array<uint8_t>* key, int32_t offset);
		static bool IsReal2Key(IL2CPP::Array<uint8_t>* key, int32_t offset);
		static bool IsReal3Key(IL2CPP::Array<uint8_t>* key, int32_t offset);
	};
}

