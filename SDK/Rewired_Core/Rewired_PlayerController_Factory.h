#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_PlayerController.h"
namespace Rewired_Core::Rewired { struct PlayerController; };
namespace Rewired_Core::Rewired { struct PlayerController_Definition; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_Factory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Rewired_Core::Rewired::PlayerController* Create(Rewired_Core::Rewired::PlayerController_Definition* definition);
	};
}

