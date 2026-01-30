#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\System\System_Security_Authentication_SslProtocols.h"
namespace Mono_Security::Mono::Security::Interface { struct IMonoSslStream; };
namespace mscorlib::System::IO { struct Stream; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
namespace System::System::Net::Security { struct SslStream; };
namespace Mono_Security::Mono::Security::Interface { struct ICertificateValidator2; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
#include "Mono_Security_Interface_MonoSslPolicyErrors.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };

namespace Mono_Security::Mono::Security::Interface
{
	struct MonoTlsProvider : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::Guid get_ID();
		mscorlib::System::String* get_Name();
		bool get_SupportsSslStream();
		bool get_SupportsConnectionInfo();
		bool get_SupportsMonoExtensions();
		System::System::Security::Authentication::SslProtocols get_SupportedProtocols();
		Mono_Security::Mono::Security::Interface::IMonoSslStream* CreateSslStream(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings);
		Mono_Security::Mono::Security::Interface::IMonoSslStream* CreateSslStreamInternal(System::System::Net::Security::SslStream* sslStream, mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings);
		bool ValidateCertificate(Mono_Security::Mono::Security::Interface::ICertificateValidator2* validator, mscorlib::System::String* targetHost, bool serverMode, System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain, System::System::Security::Cryptography::X509Certificates::X509Chain& chain, Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors& errors, int32_t& status11);
		bool get_SupportsCleanShutdown();
	};
}

