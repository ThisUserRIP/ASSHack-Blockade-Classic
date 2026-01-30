#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Security::Cryptography::X509Certificates { struct X509Certificate2Collection; };
namespace Mono_Security::Mono::Security::X509 { struct X509Store; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509Store : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Security::Cryptography::X509Certificates::X509Certificate2Collection* list;
		Mono_Security::Mono::Security::X509::X509Store* store;
		void Close();
	};
}

