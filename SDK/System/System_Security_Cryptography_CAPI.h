#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Security_Cryptography_OidGroup.h"

namespace System::System::Security::Cryptography
{
	struct CAPI : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* CryptFindOIDInfoNameFromKey(mscorlib::System::String* key, System::Security::Cryptography::OidGroup oidGroup);
		static mscorlib::System::String* CryptFindOIDInfoKeyFromName(mscorlib::System::String* name, System::Security::Cryptography::OidGroup oidGroup);
	};
}

