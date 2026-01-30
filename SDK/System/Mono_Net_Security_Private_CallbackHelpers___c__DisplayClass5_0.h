#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Net_Security_Private_CallbackHelpers.h"
namespace System::Mono::Net::Security::Private { struct CallbackHelpers; };
namespace Mono_Security::Mono::Security::Interface { struct MonoRemoteCertificateValidationCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
#include "System_Net_Security_SslPolicyErrors.h"

namespace System::Mono::Net::Security::Private
{
	struct CallbackHelpers___c__DisplayClass5_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* callback;
		void _ctor();
		bool _MonoToPublic_b__0(mscorlib::System::Object* t, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* c, System::Security::Cryptography::X509Certificates::X509Chain* ch, System::Net::Security::SslPolicyErrors e);
	};
}

