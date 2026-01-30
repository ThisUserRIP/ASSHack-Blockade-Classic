#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_PlayerMouse.h"
namespace Rewired_Core::Rewired { struct PlayerMouse; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct PlayerMouse_Definition; };

namespace Rewired_Core::Rewired
{
	struct PlayerMouse_Factory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Rewired_Core::Rewired::PlayerMouse* Create();
		static Rewired_Core::Rewired::PlayerMouse* zTufJcQfUjAbtihMoqeFKhxXYGv(int32_t A_0, int32_t A_1);
		static Rewired_Core::Rewired::PlayerMouse* Create(Rewired_Core::Rewired::PlayerMouse_Definition* definition);
	};
}

