#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct ServerCertValidationCallback; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
#include "..\Mono_Security\Mono_Security_Interface_MonoSslPolicyErrors.h"
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace System::Mono::Net::Security
{
	struct ServerCertValidationCallbackWrapper : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		bool Invoke(System::Net::ServerCertValidationCallback* callback, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors);
		mscorlib::System::IAsyncResult* BeginInvoke(System::Net::ServerCertValidationCallback* callback, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors, mscorlib::System::AsyncCallback* __callback, mscorlib::System::Object* object);
		bool EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

