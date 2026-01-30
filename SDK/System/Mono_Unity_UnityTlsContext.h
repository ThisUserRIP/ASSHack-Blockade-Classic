#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_Security_MobileTlsContext.h"
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx; };
namespace System::Mono::Unity { struct UnityTls_unitytls_x509list; };
namespace System::Mono::Unity { struct UnityTls_unitytls_x509list; };
namespace System::Mono::Unity { struct UnityTls_unitytls_key; };
namespace System::Mono::Unity { struct UnityTls_unitytls_key; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx_read_callback; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx_write_callback; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx_certificate_callback; };
namespace System::Mono::Unity { struct UnityTls_unitytls_tlsctx_x509verify_callback; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsConnectionInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Runtime_InteropServices_GCHandle.h"
namespace mscorlib::System::Runtime::InteropServices { struct GCHandle; };
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::Mono::Net::Security { struct MobileAuthenticatedStream; };
namespace mscorlib::System { struct String; };
#include "System_Security_Authentication_SslProtocols.h"
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_ValueTuple_2.h"
namespace mscorlib::System { template <typename T1, typename T2> struct ValueTuple_2; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "Mono_Unity_UnityTls_unitytls_x509verify_result.h"
#include "Mono_Unity_UnityTls_unitytls_x509list_ref.h"
namespace System::Mono::Unity { struct UnityTls_unitytls_x509list_ref; };
namespace System::Mono::Unity { struct UnityTls_unitytls_x509name; };
namespace System::Mono::Unity { struct UnityTls_unitytls_x509name; };
namespace System::Mono::Unity { struct UnityTls_unitytls_key_ref; };
namespace System::Mono::Unity { struct UnityTls_unitytls_key_ref; };

namespace System::Mono::Unity
{
	struct UnityTlsContext : System::Mono::Net::Security::MobileTlsContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Mono::Unity::UnityTls_unitytls_tlsctx* tlsContext;
		System::Mono::Unity::UnityTls_unitytls_x509list* requestedClientCertChain;
		System::Mono::Unity::UnityTls_unitytls_key* requestedClientKey;
		System::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* readCallback;
		System::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* writeCallback;
		System::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* certificateCallback;
		System::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* verifyCallback;
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* localClientCertificate;
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate;
		Mono_Security::Mono::Security::Interface::MonoTlsConnectionInfo* connectioninfo;
		bool isAuthenticated;
		bool hasContext;
		bool closedGraceful;
		IL2CPP::Array<uint8_t>* writeBuffer;
		IL2CPP::Array<uint8_t>* readBuffer;
		mscorlib::System::Runtime::InteropServices::GCHandle handle;
		mscorlib::System::Exception* lastException;
		void _ctor(System::Mono::Net::Security::MobileAuthenticatedStream* parent, bool serverMode, mscorlib::System::String* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert);
		static void ExtractNativeKeyAndChainFromManagedCertificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* cert, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState, System::Mono::Unity::UnityTls_unitytls_x509list& nativeCertChain, System::Mono::Unity::UnityTls_unitytls_key& nativeKey);
		bool get_IsAuthenticated();
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate();
		mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void Shutdown();
		void Dispose(bool disposing);
		void StartHandshake();
		bool ProcessHandshake();
		void FinishHandshake();
		static intptr_t WriteCallback(void* userData, uint8_t* data, intptr_t bufferLen, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		intptr_t WriteCallback(uint8_t* data, intptr_t bufferLen, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		static intptr_t ReadCallback(void* userData, uint8_t* buffer, intptr_t bufferLen, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		intptr_t ReadCallback(uint8_t* buffer, intptr_t bufferLen, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		static System::Mono::Unity::UnityTls_unitytls_x509verify_result VerifyCallback(void* userData, System::Mono::Unity::UnityTls_unitytls_x509list_ref chain, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		System::Mono::Unity::UnityTls_unitytls_x509verify_result VerifyCallback(System::Mono::Unity::UnityTls_unitytls_x509list_ref chain, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		static void CertificateCallback(void* userData, System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* cn, intptr_t cnLen, System::Mono::Unity::UnityTls_unitytls_x509name* caList, intptr_t caListLen, System::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, System::Mono::Unity::UnityTls_unitytls_key_ref* key, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		void CertificateCallback(System::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, uint8_t* cn, intptr_t cnLen, System::Mono::Unity::UnityTls_unitytls_x509name* caList, intptr_t caListLen, System::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, System::Mono::Unity::UnityTls_unitytls_key_ref* key, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
	};
}

