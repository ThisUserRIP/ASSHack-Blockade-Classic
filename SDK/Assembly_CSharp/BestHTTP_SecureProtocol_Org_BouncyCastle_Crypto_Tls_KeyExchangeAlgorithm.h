#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct KeyExchangeAlgorithm : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t NULL_;
			int32_t RSA;
			int32_t RSA_EXPORT;
			int32_t DHE_DSS;
			int32_t DHE_DSS_EXPORT;
			int32_t DHE_RSA;
			int32_t DHE_RSA_EXPORT;
			int32_t DH_DSS;
			int32_t DH_DSS_EXPORT;
			int32_t DH_RSA;
			int32_t DH_RSA_EXPORT;
			int32_t DH_anon;
			int32_t DH_anon_EXPORT;
			int32_t PSK;
			int32_t DHE_PSK;
			int32_t RSA_PSK;
			int32_t ECDH_ECDSA;
			int32_t ECDHE_ECDSA;
			int32_t ECDH_RSA;
			int32_t ECDHE_RSA;
			int32_t ECDH_anon;
			int32_t SRP;
			int32_t SRP_DSS;
			int32_t SRP_RSA;
			int32_t ECDHE_PSK;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
	};
}

