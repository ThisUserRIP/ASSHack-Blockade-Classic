#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_Security_MobileAuthenticatedStream.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net::Security { struct SslStream; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsProvider; };
namespace System::Mono::Net::Security { struct MobileTlsContext; };
namespace mscorlib::System { struct String; };
#include "System_Security_Authentication_SslProtocols.h"
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };

namespace System::Mono::Unity
{
	struct UnityTlsStream : System::Mono::Net::Security::MobileAuthenticatedStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream* owner, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings, Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider);
		System::Mono::Net::Security::MobileTlsContext* CreateContext(bool serverMode, mscorlib::System::String* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert);
	};
}

