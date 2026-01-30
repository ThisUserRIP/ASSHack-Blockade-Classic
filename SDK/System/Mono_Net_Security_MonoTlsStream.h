#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsProvider; };
namespace System::System::Net::Sockets { struct NetworkStream; };
namespace System::System::Net { struct HttpWebRequest; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
namespace Mono_Security::Mono::Security::Interface { struct IMonoSslStream; };
#include "System_Net_WebExceptionStatus.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace System::System::Net { struct WebConnectionTunnel; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };

namespace System::Mono::Net::Security
{
	struct MonoTlsStream : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider;
		System::Net::Sockets::NetworkStream* networkStream;
		System::Net::HttpWebRequest* request;
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings;
		Mono_Security::Mono::Security::Interface::IMonoSslStream* sslStream;
		System::Net::WebExceptionStatus status;
		bool _CertificateValidationFailed_k__BackingField;
		System::Net::HttpWebRequest* get_Request();
		System::Net::WebExceptionStatus get_ExceptionStatus();
		bool get_CertificateValidationFailed();
		void set_CertificateValidationFailed(bool value);
		void _ctor(System::Net::HttpWebRequest* request, System::Net::Sockets::NetworkStream* networkStream);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::IO::Stream>* CreateStream(System::Net::WebConnectionTunnel* tunnel, mscorlib::System::Threading::CancellationToken cancellationToken);
	};
}

