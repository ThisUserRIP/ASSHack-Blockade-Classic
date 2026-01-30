#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Mono_Security::Mono::Security::Interface { struct MonoRemoteCertificateValidationCallback; };
namespace System::System::Net::Security { struct RemoteCertificateValidationCallback; };
namespace Mono_Security::Mono::Security::Interface { struct MonoLocalCertificateSelectionCallback; };
namespace System::System::Net::Security { struct LocalCertificateSelectionCallback; };
namespace System::System::Net::Security { struct LocalCertSelectionCallback; };

namespace System::Mono::Net::Security::Private
{
	struct CallbackHelpers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* PublicToMono(System::Net::Security::RemoteCertificateValidationCallback* callback);
		static Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* PublicToMono(System::Net::Security::LocalCertificateSelectionCallback* callback);
		static System::Net::Security::RemoteCertificateValidationCallback* MonoToPublic(Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* callback);
		static System::Net::Security::LocalCertSelectionCallback* MonoToInternal(Mono_Security::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback);
	};
}

