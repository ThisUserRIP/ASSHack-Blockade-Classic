#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };

namespace Mono_Security::Mono::Security::Interface
{
	struct ICertificateValidator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* get_Settings();
		bool SelectClientCertificate(mscorlib::System::String* targetHost, System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, IL2CPP::Array<mscorlib::System::String*>* acceptableIssuers, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate& clientCertificate);
	};
}

