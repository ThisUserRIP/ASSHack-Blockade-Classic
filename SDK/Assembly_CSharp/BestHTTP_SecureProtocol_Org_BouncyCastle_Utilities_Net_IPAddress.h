#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Net
{
	struct IPAddress : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool IsValid(mscorlib::System::String* address);
		static bool IsValidWithNetMask(mscorlib::System::String* address);
		static bool IsValidIPv4(mscorlib::System::String* address);
		static bool unsafeIsValidIPv4(mscorlib::System::String* address);
		static bool IsValidIPv4WithNetmask(mscorlib::System::String* address);
		static bool IsValidIPv6WithNetmask(mscorlib::System::String* address);
		static bool IsMaskValue(mscorlib::System::String* component, int32_t size);
		static bool IsValidIPv6(mscorlib::System::String* address);
		static bool unsafeIsValidIPv6(mscorlib::System::String* address);
		void _ctor();
	};
}

