#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Permissions_CodeAccessSecurityAttribute.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Security::Permissions
{
	struct PermissionSetAttribute : mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* xml;
		void set_XML(mscorlib::System::String* value);
	};
}

