#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Net_Security_Private_CallbackHelpers.h"
namespace System::Mono::Net::Security::Private { struct CallbackHelpers; };
namespace System::System::Net::Security { struct RemoteCertificateValidationCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
#include "..\Mono_Security\Mono_Security_Interface_MonoSslPolicyErrors.h"

namespace System::Mono::Net::Security::Private
{
	struct CallbackHelpers___c__DisplayClass0_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::Security::RemoteCertificateValidationCallback* callback;
		void _ctor();
		bool _PublicToMono_b__0(mscorlib::System::String* h, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* c, System::Security::Cryptography::X509Certificates::X509Chain* ch, Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors e);
	};
}

