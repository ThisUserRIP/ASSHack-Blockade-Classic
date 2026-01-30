#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::Mono::Unity { struct UnityTls_unitytls_x509list; };
namespace System::Mono::Unity { struct UnityTls_unitytls_x509list; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
namespace System::Mono::Unity { struct UnityTls_unitytls_errorstate; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };

namespace System::Mono::Unity
{
	struct CertHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void AddCertificatesToNativeChain(System::Mono::Unity::UnityTls_unitytls_x509list* nativeCertificateChain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
		static void AddCertificateToNativeChain(System::Mono::Unity::UnityTls_unitytls_x509list* nativeCertificateChain, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Mono::Unity::UnityTls_unitytls_errorstate* errorState);
	};
}

