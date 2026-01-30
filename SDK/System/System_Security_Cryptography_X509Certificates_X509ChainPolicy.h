#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Security::Cryptography { struct OidCollection; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Certificate2Collection; };
#include "System_Security_Cryptography_X509Certificates_X509RevocationFlag.h"
#include "System_Security_Cryptography_X509Certificates_X509RevocationMode.h"
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_Security_Cryptography_X509Certificates_X509VerificationFlags.h"
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509ChainPolicy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Security::Cryptography::OidCollection* apps;
		System::Security::Cryptography::OidCollection* cert;
		System::Security::Cryptography::X509Certificates::X509CertificateCollection* store;
		System::Security::Cryptography::X509Certificates::X509Certificate2Collection* store2;
		System::Security::Cryptography::X509Certificates::X509RevocationFlag rflag;
		System::Security::Cryptography::X509Certificates::X509RevocationMode mode;
		mscorlib::System::TimeSpan timeout;
		System::Security::Cryptography::X509Certificates::X509VerificationFlags vflags;
		mscorlib::System::DateTime vtime;
		void _ctor();
		void _ctor(System::Security::Cryptography::X509Certificates::X509CertificateCollection* store);
		void Reset();
	};
}

