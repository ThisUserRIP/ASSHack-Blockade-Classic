#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_ServerCertValidationCallback.h"
namespace System::System::Net { struct ServerCertValidationCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
#include "System_Net_Security_SslPolicyErrors.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct ServerCertValidationCallback_CallbackContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* request;
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate;
		System::Security::Cryptography::X509Certificates::X509Chain* chain;
		System::Net::Security::SslPolicyErrors sslPolicyErrors;
		bool result;
		void _ctor(mscorlib::System::Object* request, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Net::Security::SslPolicyErrors sslPolicyErrors);
	};
}

