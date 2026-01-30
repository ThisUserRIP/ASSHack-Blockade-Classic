#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_Security_MobileAuthenticatedStream.h"
namespace System::Mono::Net::Security { struct MobileAuthenticatedStream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Runtime_CompilerServices_AsyncTaskMethodBuilder.h"
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncTaskMethodBuilder; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace mscorlib::System { struct String; };
#include "System_Security_Authentication_SslProtocols.h"
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace System::Mono::Net::Security { struct AsyncProtocolResult; };
#include "..\mscorlib\System_Runtime_CompilerServices_ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
namespace mscorlib::System::Runtime::CompilerServices { template <typename TResult> struct ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::CompilerServices { struct IAsyncStateMachine; };

namespace System::Mono::Net::Security
{
	struct MobileAuthenticatedStream__ProcessAuthentication_d__47
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;
		bool serverMode;
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate;
		mscorlib::System::String* targetHost;
		System::Mono::Net::Security::MobileAuthenticatedStream* __4__this;
		bool runSynchronously;
		System::Security::Authentication::SslProtocols enabledProtocols;
		System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates;
		bool clientCertRequired;
		mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<System::Mono::Net::Security::AsyncProtocolResult> __u__1;
		void MoveNext();
		void SetStateMachine(mscorlib::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
	};
}

