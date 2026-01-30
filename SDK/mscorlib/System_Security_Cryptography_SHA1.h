#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_HashAlgorithm.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Security::Cryptography
{
	struct SHA1 : mscorlib::System::Security::Cryptography::HashAlgorithm
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static mscorlib::System::Security::Cryptography::SHA1* Create();
		static mscorlib::System::Security::Cryptography::SHA1* Create(mscorlib::System::String* hashName);
	};
}

