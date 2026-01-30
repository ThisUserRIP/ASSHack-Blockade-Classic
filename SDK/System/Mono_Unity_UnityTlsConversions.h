#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Unity_UnityTls_unitytls_protocol.h"
#include "System_Security_Authentication_SslProtocols.h"
#include "..\Mono_Security\Mono_Security_Interface_TlsProtocols.h"
#include "..\Mono_Security\Mono_Security_Interface_AlertDescription.h"
#include "Mono_Unity_UnityTls_unitytls_x509verify_result.h"
#include "..\Mono_Security\Mono_Security_Interface_MonoSslPolicyErrors.h"
#include "System_Security_Cryptography_X509Certificates_X509ChainStatusFlags.h"

namespace System::Mono::Unity
{
	struct UnityTlsConversions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static System::Mono::Unity::UnityTls_unitytls_protocol GetMinProtocol(System::Security::Authentication::SslProtocols protocols);
		static System::Mono::Unity::UnityTls_unitytls_protocol GetMaxProtocol(System::Security::Authentication::SslProtocols protocols);
		static Mono_Security::Mono::Security::Interface::TlsProtocols ConvertProtocolVersion(System::Mono::Unity::UnityTls_unitytls_protocol protocol);
		static Mono_Security::Mono::Security::Interface::AlertDescription VerifyResultToAlertDescription(System::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult, Mono_Security::Mono::Security::Interface::AlertDescription defaultAlert);
		static Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors VerifyResultToPolicyErrror(System::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult);
		static System::Security::Cryptography::X509Certificates::X509ChainStatusFlags VerifyResultToChainStatus(System::Mono::Unity::UnityTls_unitytls_x509verify_result verifyResult);
	};
}

