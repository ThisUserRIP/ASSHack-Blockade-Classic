#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_RawOrDirectInput_Element.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_RawOrDirectInput.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_Data_Mapping_HardwareElementSourceTypeWithHat.h"
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareAxisInfo; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_AxisCalibrationInfoEntry; };
#include "Rewired_Pole.h"
#include "Rewired_Data_Mapping_AxisDirection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_RawOrDirectInput_Axis_Base : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t elementIdentifier;
		Rewired_Core::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat sourceType;
		int32_t sourceAxis;
		Rewired_Core::Rewired::AxisRange sourceAxisRange;
		bool invert;
		float axisDeadZone;
		bool calibrateAxis;
		float axisZero;
		float axisMin;
		float axisMax;
		Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo* axisInfo;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry*>* alternateCalibrations;
		int32_t sourceButton;
		Rewired_Core::Rewired::Pole buttonAxisContribution;
		int32_t sourceHat;
		Rewired_Core::Rewired::Data::Mapping::AxisDirection sourceHatDirection;
		Rewired_Core::Rewired::AxisRange sourceHatRange;
		void _ctor();
		void ImportVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Axis_Base* source);
	};
}

