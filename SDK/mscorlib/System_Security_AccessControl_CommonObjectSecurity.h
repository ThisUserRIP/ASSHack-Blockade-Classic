#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_AccessControl_ObjectSecurity.h"

namespace mscorlib::System::Security::AccessControl
{
	struct CommonObjectSecurity : mscorlib::System::Security::AccessControl::ObjectSecurity
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
	};
}

