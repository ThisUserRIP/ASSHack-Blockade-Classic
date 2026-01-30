#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
namespace Rewired_Core::Rewired::Interfaces { struct IInputManagerJoystickPublic; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct UpdateControllerInfoEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Interfaces::IInputManagerJoystickPublic* sourceJoystick;
		void _ctor(Rewired_Core::Rewired::Interfaces::IInputManagerJoystickPublic* sourceJoystick);
	};
}

