#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsProvider; };
namespace System::System::Net { struct ServerCertValidationCallback; };
namespace System::System::Net::Security { struct LocalCertSelectionCallback; };
namespace System::Mono::Net::Security { struct ServerCertValidationCallbackWrapper; };
namespace System::Mono::Net::Security { struct MonoTlsStream; };
namespace System::System::Net { struct HttpWebRequest; };
namespace Mono_Security::Mono::Security::Interface { struct ICertificateValidator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace mscorlib::System { struct String; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace Mono_Security::Mono::Security::Interface { struct ValidationResult; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
#include "System_Net_Security_SslPolicyErrors.h"

namespace System::Mono::Net::Security
{
	struct ChainValidationHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* sender;
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings;
		Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider;
		System::Net::ServerCertValidationCallback* certValidationCallback;
		System::Net::Security::LocalCertSelectionCallback* certSelectionCallback;
		System::Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper;
		System::Mono::Net::Security::MonoTlsStream* tlsStream;
		System::Net::HttpWebRequest* request;
		static Mono_Security::Mono::Security::Interface::ICertificateValidator* GetInternalValidator(Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings);
		static System::Mono::Net::Security::ChainValidationHelper* Create(Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider, Mono_Security::Mono::Security::Interface::MonoTlsSettings& settings, System::Mono::Net::Security::MonoTlsStream* stream);
		void _ctor(Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings, bool cloneSettings, System::Mono::Net::Security::MonoTlsStream* stream, System::Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper);
		static mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* DefaultSelectionCallback(mscorlib::System::String* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers);
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* get_Settings();
		bool SelectClientCertificate(mscorlib::System::String* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate& clientCertificate);
		Mono_Security::Mono::Security::Interface::ValidationResult* ValidateCertificate(mscorlib::System::String* host, bool serverMode, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain);
		Mono_Security::Mono::Security::Interface::ValidationResult* ValidateChain(mscorlib::System::String* host, bool server, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, System::Net::Security::SslPolicyErrors errors);
		Mono_Security::Mono::Security::Interface::ValidationResult* ValidateChain(mscorlib::System::String* host, bool server, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain& chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, System::Net::Security::SslPolicyErrors errors);
	};
}

