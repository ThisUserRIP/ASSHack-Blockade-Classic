#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Mono_Security::Mono::Security::Interface { struct ValidationResult; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };

namespace Mono_Security::Mono::Security::Interface
{
	struct ICertificateValidator2
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::Interface::ValidationResult* ValidateCertificate(mscorlib::System::String* targetHost, bool serverMode, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::System::Security::Cryptography::X509Certificates::X509Chain* chain);
	};
}

