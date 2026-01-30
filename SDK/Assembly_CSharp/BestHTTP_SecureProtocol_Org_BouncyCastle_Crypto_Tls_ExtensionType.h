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
	struct ExtensionType : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t server_name;
			int32_t max_fragment_length;
			int32_t client_certificate_url;
			int32_t trusted_ca_keys;
			int32_t truncated_hmac;
			int32_t status_request;
			int32_t user_mapping;
			int32_t client_authz;
			int32_t server_authz;
			int32_t cert_type;
			int32_t supported_groups;
			int32_t elliptic_curves;
			int32_t ec_point_formats;
			int32_t srp;
			int32_t signature_algorithms;
			int32_t use_srtp;
			int32_t heartbeat;
			int32_t application_layer_protocol_negotiation;
			int32_t status_request_v2;
			int32_t signed_certificate_timestamp;
			int32_t client_certificate_type;
			int32_t server_certificate_type;
			int32_t padding;
			int32_t encrypt_then_mac;
			int32_t extended_master_secret;
			int32_t DRAFT_token_binding;
			int32_t cached_info;
			int32_t session_ticket;
			int32_t negotiated_ff_dhe_groups;
			int32_t renegotiation_info;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
	};
}

