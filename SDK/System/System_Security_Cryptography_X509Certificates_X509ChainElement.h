#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Security::Cryptography::X509Certificates { struct X509Certificate2; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509ChainElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Security::Cryptography::X509Certificates::X509Certificate2* certificate;
		mscorlib::System::String* info;
		void _ctor(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
		System::Security::Cryptography::X509Certificates::X509Certificate2* get_Certificate();
	};
}

