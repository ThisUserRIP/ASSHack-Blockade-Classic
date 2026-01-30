#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::Mono::Net::Security { struct MobileAuthenticatedStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "System_Security_Authentication_SslProtocols.h"
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace Mono_Security::Mono::Security::Interface { struct ICertificateValidator2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_ValueTuple_2.h"
namespace mscorlib::System { template <typename T1, typename T2> struct ValueTuple_2; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };

namespace System::Mono::Net::Security
{
	struct MobileTlsContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Mono::Net::Security::MobileAuthenticatedStream* parent;
		bool serverMode;
		mscorlib::System::String* targetHost;
		mscorlib::System::String* serverName;
		System::Security::Authentication::SslProtocols enabledProtocols;
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate;
		System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates;
		bool askForClientCert;
		Mono_Security::Mono::Security::Interface::ICertificateValidator2* certificateValidator;
		void _ctor(System::Mono::Net::Security::MobileAuthenticatedStream* parent, bool serverMode, mscorlib::System::String* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert);
		System::Mono::Net::Security::MobileAuthenticatedStream* get_Parent();
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* get_Settings();
		bool get_IsAuthenticated();
		bool get_IsServer();
		mscorlib::System::String* get_TargetHost();
		mscorlib::System::String* get_ServerName();
		System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();
		void StartHandshake();
		bool ProcessHandshake();
		void FinishHandshake();
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalServerCertificate();
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate();
		mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void Shutdown();
		bool ValidateCertificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain);
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* SelectClientCertificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers);
		void Dispose();
		void Dispose(bool disposing);
		void Finalize();
	};
}

