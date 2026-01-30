#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Unity_UnityTls.h"
namespace System::Mono::Unity { struct UnityTls; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "Mono_Unity_UnityTls_unitytls_tlsctx_protocolrange.h"
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx_protocolrange; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_key_free_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_x509list_create_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_x509list_free_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t; };
namespace System::Mono::Unity { struct UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::Mono::Unity
{
	struct UnityTls_unitytls_interface_struct : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t UNITYTLS_INVALID_HANDLE;
		System::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t* unitytls_errorstate_create;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t* unitytls_errorstate_raise_error;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_get_ref_t* unitytls_key_get_ref;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_parse_der_t* unitytls_key_parse_der;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t* unitytls_key_parse_pem;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_key_free_t* unitytls_key_free;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509_export_der_t* unitytls_x509_export_der;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t* unitytls_x509list_get_ref;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t* unitytls_x509list_get_x509;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_create_t* unitytls_x509list_create;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_append_t* unitytls_x509list_append;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t* unitytls_x509list_append_der;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_append_der_t* unitytls_x509list_append_pem;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509list_free_t* unitytls_x509list_free;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t* unitytls_x509verify_default_ca;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t* unitytls_x509verify_explicit_ca;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t* unitytls_tlsctx_create_server;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t* unitytls_tlsctx_create_client;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_server_require_client_authentication_t* unitytls_tlsctx_server_require_client_authentication;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_certificate_callback_t* unitytls_tlsctx_set_certificate_callback;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t* unitytls_tlsctx_set_trace_callback;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_x509verify_callback_t* unitytls_tlsctx_set_x509verify_callback;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t* unitytls_tlsctx_set_supported_ciphersuites;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t* unitytls_tlsctx_get_ciphersuite;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_protocol_t* unitytls_tlsctx_get_protocol;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t* unitytls_tlsctx_process_handshake;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_read_t* unitytls_tlsctx_read;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_write_t* unitytls_tlsctx_write;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t* unitytls_tlsctx_notify_close;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t* unitytls_tlsctx_free;
		System::Mono::Unity::UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t* unitytls_random_generate_bytes;
		void _ctor();
	};
}

