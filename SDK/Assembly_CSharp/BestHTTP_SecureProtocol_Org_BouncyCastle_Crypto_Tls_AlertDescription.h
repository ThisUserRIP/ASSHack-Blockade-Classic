#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct AlertDescription : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint8_t close_notify;
			uint8_t unexpected_message;
			uint8_t bad_record_mac;
			uint8_t decryption_failed;
			uint8_t record_overflow;
			uint8_t decompression_failure;
			uint8_t handshake_failure;
			uint8_t no_certificate;
			uint8_t bad_certificate;
			uint8_t unsupported_certificate;
			uint8_t certificate_revoked;
			uint8_t certificate_expired;
			uint8_t certificate_unknown;
			uint8_t illegal_parameter;
			uint8_t unknown_ca;
			uint8_t access_denied;
			uint8_t decode_error;
			uint8_t decrypt_error;
			uint8_t export_restriction;
			uint8_t protocol_version;
			uint8_t insufficient_security;
			uint8_t internal_error;
			uint8_t user_canceled;
			uint8_t no_renegotiation;
			uint8_t unsupported_extension;
			uint8_t certificate_unobtainable;
			uint8_t unrecognized_name;
			uint8_t bad_certificate_status_response;
			uint8_t bad_certificate_hash_value;
			uint8_t unknown_psk_identity;
			uint8_t inappropriate_fallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* GetName(uint8_t alertDescription);
		static mscorlib::System::String* GetText(uint8_t alertDescription);
		void _ctor();
	};
}

