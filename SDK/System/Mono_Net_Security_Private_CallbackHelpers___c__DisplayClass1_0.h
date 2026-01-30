#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Net_Security_Private_CallbackHelpers.h"
namespace System::Mono::Net::Security::Private { struct CallbackHelpers; };
namespace System::System::Net::Security { struct LocalCertificateSelectionCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace mscorlib::System { struct String; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };

namespace System::Mono::Net::Security::Private
{
	struct CallbackHelpers___c__DisplayClass1_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::Security::LocalCertificateSelectionCallback* callback;
		void _ctor();
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* _PublicToMono_b__0(mscorlib::System::String* t, System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* rc, IL2CPP::Array<mscorlib::System::String*>* ai);
	};
}

