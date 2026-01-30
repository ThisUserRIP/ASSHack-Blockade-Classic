#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
#include "..\Rewired_Core\Rewired_AxisCalibrationData.h"
namespace Rewired_Core::Rewired { struct AxisCalibrationData; };
namespace Rewired_Core::Rewired { struct Joystick; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct Controller_Axis; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_AxisCalibrator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::AxisCalibrationData data;
		Rewired_Core::Rewired::Joystick* joystick;
		int32_t axisIndex;
		Rewired_Core::Rewired::Controller_Axis* axis;
		bool firstRun;
		bool get_isValid();
		void _ctor(Rewired_Core::Rewired::Joystick* joystick, int32_t axisIndex);
		void RecordMinMax();
		void RecordZero();
		void Commit();
	};
}

