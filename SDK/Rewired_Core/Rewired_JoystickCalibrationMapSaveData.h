#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_CalibrationMapSaveData.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct CalibrationMap; };
#include "Rewired_ControllerType.h"
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired
{
	struct JoystickCalibrationMapSaveData : Rewired_Core::Rewired::CalibrationMapSaveData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Guid ZKiAULwEeIIlYfewxBgOXiRbuOtH;
		mscorlib::System::Guid get_joystickHardwareTypeGuid();
		void _ctor(Rewired_Core::Rewired::CalibrationMap* calibrationMap, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* hardwareIdentifier, mscorlib::System::Guid joystickHardwareTypeGuid);
	};
}

