#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Security_Cryptography_X509Certificates_X509KeyUsageFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };

namespace System::Mono::Net::Security
{
	struct SystemCertificateValidator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool is_macosx;
			System::Security::Cryptography::X509Certificates::X509KeyUsageFlags s_flags;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static System::Security::Cryptography::X509Certificates::X509Chain* CreateX509Chain(System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs);
		static bool NeedsChain(Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings);
	};
}

