#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Security_Cryptography_OidGroup.h"

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509Utils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* FindOidInfo(uint32_t keyType, mscorlib::System::String* keyValue, System::Security::Cryptography::OidGroup oidGroup);
		static mscorlib::System::String* FindOidInfoWithFallback(uint32_t key, mscorlib::System::String* value, System::Security::Cryptography::OidGroup group);
	};
}

