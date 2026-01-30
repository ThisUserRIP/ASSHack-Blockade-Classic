#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "UTsiDltkMfrsEEHHJEydOZPBsEE.h"
namespace Rewired_Core { struct UTsiDltkMfrsEEHHJEydOZPBsEE; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_Platforms_XboxOne_XboxOneGamepadMotorType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core::Rewired::Platforms::XboxOne
{
	struct IXboxOneInputSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t GetXboxOneUserIdFromUnityJoystick(int32_t unityJoystickId);
		bool SetXboxOneVibration(uint64_t xboxOneJoystickId, Rewired_Core::UTsiDltkMfrsEEHHJEydOZPBsEE vibration);
		void PulseVibrateMotor(uint64_t xboxOneJoystickId, Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float startLevel, float endLevel, float duration);
	};
}

