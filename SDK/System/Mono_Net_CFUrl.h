#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_CFObject.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace System::Mono::Net
{
	struct CFUrl : System::Mono::Net::CFObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(intptr_t handle, bool own);
		static intptr_t CFURLCreateWithString(intptr_t allocator, intptr_t str, intptr_t baseURL);
		static System::Mono::Net::CFUrl* Create(mscorlib::System::String* absolute);
	};
}

