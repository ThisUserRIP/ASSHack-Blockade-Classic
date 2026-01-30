#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct HandshakeType : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint8_t hello_request;
			uint8_t client_hello;
			uint8_t server_hello;
			uint8_t certificate;
			uint8_t server_key_exchange;
			uint8_t certificate_request;
			uint8_t server_hello_done;
			uint8_t certificate_verify;
			uint8_t client_key_exchange;
			uint8_t finished;
			uint8_t certificate_url;
			uint8_t certificate_status;
			uint8_t hello_verify_request;
			uint8_t supplemental_data;
			uint8_t session_ticket;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
	};
}

