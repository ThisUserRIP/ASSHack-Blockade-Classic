#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_UnsafeNclNativeMethods.h"
namespace System::System::Net { struct UnsafeNclNativeMethods; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security { struct SecureString; };

namespace System::System::Net
{
	struct UnsafeNclNativeMethods_SecureStringHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* CreateString(mscorlib::System::Security::SecureString* secureString);
		static mscorlib::System::Security::SecureString* CreateSecureString(mscorlib::System::String* plainString);
	};
}

