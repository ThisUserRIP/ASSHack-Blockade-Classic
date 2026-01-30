#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Mono_Security::Mono::Security::Interface { struct ICertificateValidator2; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsProvider; };

namespace Mono_Security::Mono::Security::Interface
{
	struct CertificateValidationHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool noX509Chain;
			bool supportsTrustAnchors;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static Mono_Security::Mono::Security::Interface::ICertificateValidator2* GetInternalValidator(Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings, Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider);
	};
}

