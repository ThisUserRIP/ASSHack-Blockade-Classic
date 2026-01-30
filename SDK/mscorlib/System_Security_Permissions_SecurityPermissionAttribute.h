#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Permissions_CodeAccessSecurityAttribute.h"
#include "System_Security_Permissions_SecurityPermissionFlag.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Security::Permissions
{
	struct SecurityPermissionAttribute : mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Permissions::SecurityPermissionFlag m_Flags;
		void set_SkipVerification(bool value);
	};
}

