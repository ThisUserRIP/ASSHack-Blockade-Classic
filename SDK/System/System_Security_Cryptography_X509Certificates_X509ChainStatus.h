#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_X509Certificates_X509ChainStatusFlags.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509ChainStatus
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status;
		mscorlib::System::String* info;
		void _ctor(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag);
		static mscorlib::System::String* GetInformation(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags);
	};
}

