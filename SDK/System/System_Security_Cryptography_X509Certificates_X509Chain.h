#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainImpl; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainElementCollection; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainPolicy; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509Chain : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Security::Cryptography::X509Certificates::X509ChainImpl* impl;
		System::Security::Cryptography::X509Certificates::X509ChainImpl* get_Impl();
		void _ctor();
		void _ctor(bool useMachineContext);
		void _ctor(System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);
		System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();
		void set_ChainPolicy(System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);
		void Dispose();
		void Dispose(bool disposing);
		void Finalize();
	};
}

