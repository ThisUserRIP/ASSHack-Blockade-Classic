#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainElementCollection; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainPolicy; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509ChainImpl : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_IsValid();
		void ThrowIfContextInvalid();
		System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();
		void set_ChainPolicy(System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);
		void Reset();
		void Dispose();
		void Dispose(bool disposing);
		void Finalize();
		void _ctor();
	};
}

