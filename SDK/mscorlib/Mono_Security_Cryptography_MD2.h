#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_HashAlgorithm.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Security::Cryptography
{
	struct MD2 : mscorlib::System::Security::Cryptography::HashAlgorithm
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static mscorlib::Mono::Security::Cryptography::MD2* Create();
	};
}

