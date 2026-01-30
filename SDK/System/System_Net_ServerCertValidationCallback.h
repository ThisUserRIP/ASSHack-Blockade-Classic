#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net::Security { struct RemoteCertificateValidationCallback; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
#include "System_Net_Security_SslPolicyErrors.h"

namespace System::System::Net
{
	struct ServerCertValidationCallback : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::Security::RemoteCertificateValidationCallback* m_ValidationCallback;
		mscorlib::System::Threading::ExecutionContext* m_Context;
		void _ctor(System::Net::Security::RemoteCertificateValidationCallback* validationCallback);
		void Callback(mscorlib::System::Object* state);
		bool Invoke(mscorlib::System::Object* request, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Net::Security::SslPolicyErrors sslPolicyErrors);
	};
}

