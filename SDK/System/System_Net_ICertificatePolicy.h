#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct ServicePoint; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Net { struct WebRequest; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::Net
{
	struct ICertificatePolicy
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool CheckValidationResult(System::Net::ServicePoint* srvPoint, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Net::WebRequest* request, int32_t certificateProblem);
	};
}

