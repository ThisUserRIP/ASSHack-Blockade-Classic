#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_BridgedControllerHWInfo.h"
namespace Rewired_Core::Rewired::Interfaces { struct IInputManagerJoystickPublic; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct UnknownControllerHat; };
namespace Rewired_Core::Rewired::Platforms::Custom { struct CustomInputSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct BridgedController : Rewired_Core::Rewired::BridgedControllerHWInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Interfaces::IInputManagerJoystickPublic* sourceJoystick;
		Rewired_Core::Rewired::HardwareControllerMap_Game* gameHardwareMap;
		mscorlib::System::Guid controllerTypeGuid;
		Rewired_Core::Rewired::Controller_Extension* controllerExtension;
		mscorlib::System::String* instanceName;
		mscorlib::System::String* productName;
		bool isXInputDevice;
		int32_t axisCount;
		int32_t buttonCount;
		IL2CPP::Array<bool>* isButtonPressureSensitive;
		IL2CPP::Array<Rewired_Core::Rewired::UnknownControllerHat*>* unknownControllerHats;
		Rewired_Core::Rewired::Platforms::Custom::CustomInputSource* customInputSource;
		bool get_isUnknownController();
		void _ctor();
	};
}

