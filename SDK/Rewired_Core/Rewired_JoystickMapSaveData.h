#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerMapSaveData.h"
namespace Rewired_Core::Rewired { struct Joystick; };
namespace Rewired_Core::Rewired { struct JoystickMap; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct JoystickMapSaveData : Rewired_Core::Rewired::ControllerMapSaveData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Joystick* get_joystick();
		Rewired_Core::Rewired::JoystickMap* get_joystickMap();
		mscorlib::System::Guid get_joystickHardwareTypeGuid();
		void _ctor(Rewired_Core::Rewired::Joystick* joystick, Rewired_Core::Rewired::JoystickMap* map);
	};
}

