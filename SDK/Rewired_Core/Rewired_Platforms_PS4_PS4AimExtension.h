#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Platforms_PS4_PS4ControllerExtension.h"
namespace Rewired_Core::Rewired::Platforms::PS4 { struct IPS4AimExtensionSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_Platforms_PS4_PS4AimMotorType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::Platforms::PS4
{
	struct PS4AimExtension : Rewired_Core::Rewired::Platforms::PS4::PS4ControllerExtension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Platforms::PS4::IPS4AimExtensionSource* get_Source();
		void _ctor(Rewired_Core::Rewired::Platforms::PS4::IPS4AimExtensionSource* source);
		void _ctor(Rewired_Core::Rewired::Platforms::PS4::PS4AimExtension* source);
		float GetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4AimMotorType motor);
		void SetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4AimMotorType motor, float motorLevel);
		void SetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4AimMotorType motor, float motorLevel, bool stopOtherMotors);
		void SetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4AimMotorType motor, float motorLevel, float duration, bool stopOtherMotors);
		void SetVibration(float strongMotorLevel, float weakMotorLevel);
		void SetVibration(float strongMotorLevel, float weakMotorLevel, float strongMotorDuration, float weakMotorDuration);
		Rewired_Core::Rewired::Controller_Extension* Clone();
		static int32_t nvtTmFsynmNJTZRapKATvOnbsmp(Rewired_Core::Rewired::Platforms::PS4::PS4AimMotorType A_0);
	};
}

