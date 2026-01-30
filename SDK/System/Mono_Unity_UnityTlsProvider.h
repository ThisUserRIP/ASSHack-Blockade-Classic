#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Mono_Security\Mono_Security_Interface_MonoTlsProvider.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Security_Authentication_SslProtocols.h"
namespace Mono_Security::Mono::Security::Interface { struct IMonoSslStream; };
namespace mscorlib::System::IO { struct Stream; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
namespace System::System::Net::Security { struct SslStream; };
namespace Mono_Security::Mono::Security::Interface { struct ICertificateValidator2; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
#include "..\Mono_Security\Mono_Security_Interface_MonoSslPolicyErrors.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::Mono::Unity
{
	struct UnityTlsProvider : Mono_Security::Mono::Security::Interface::MonoTlsProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_Name();
		mscorlib::System::Guid get_ID();
		bool get_SupportsSslStream();
		bool get_SupportsMonoExtensions();
		bool get_SupportsConnectionInfo();
		bool get_SupportsCleanShutdown();
		System::Security::Authentication::SslProtocols get_SupportedProtocols();
		Mono_Security::Mono::Security::Interface::IMonoSslStream* CreateSslStream(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings);
		Mono_Security::Mono::Security::Interface::IMonoSslStream* CreateSslStreamInternal(System::Net::Security::SslStream* sslStream, mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings);
		bool ValidateCertificate(Mono_Security::Mono::Security::Interface::ICertificateValidator2* validator, mscorlib::System::String* targetHost, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain, System::Security::Cryptography::X509Certificates::X509Chain& chain, Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors& errors, int32_t& status11);
		void _ctor();
	};
}

