#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Demos_ControlRemappingDemo1_QueueEntry.h"
#include "Rewired_Demos_ControlRemappingDemo1.h"
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1; };
namespace Rewired_Core::Rewired { struct Player; };
#include "..\Rewired_Core\Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct Joystick; };
namespace Rewired_Core::Rewired { struct CalibrationMap; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct ControlRemappingDemo1_Calibration : Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Player* _player_k__BackingField;
		Rewired_Core::Rewired::ControllerType _controllerType_k__BackingField;
		Rewired_Core::Rewired::Joystick* _joystick_k__BackingField;
		Rewired_Core::Rewired::CalibrationMap* _calibrationMap_k__BackingField;
		int32_t selectedElementIdentifierId;
		bool recording;
		Rewired_Core::Rewired::Player* get_player();
		void set_player(Rewired_Core::Rewired::Player* value);
		Rewired_Core::Rewired::ControllerType get_controllerType();
		void set_controllerType(Rewired_Core::Rewired::ControllerType value);
		Rewired_Core::Rewired::Joystick* get_joystick();
		void set_joystick(Rewired_Core::Rewired::Joystick* value);
		Rewired_Core::Rewired::CalibrationMap* get_calibrationMap();
		void set_calibrationMap(Rewired_Core::Rewired::CalibrationMap* value);
		void _ctor(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::Joystick* joystick, Rewired_Core::Rewired::CalibrationMap* calibrationMap);
	};
}

