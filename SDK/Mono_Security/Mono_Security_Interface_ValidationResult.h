#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Mono_Security_Interface_MonoSslPolicyErrors.h"
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Mono_Security::Mono::Security::Interface
{
	struct ValidationResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool trusted;
		bool user_denied;
		int32_t error_code;
		mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors;
		void _ctor(bool trusted, bool user_denied, int32_t error_code, mscorlib::System::Nullable_1<Mono_Security::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors);
		bool get_Trusted();
		bool get_UserDenied();
	};
}

