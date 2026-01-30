#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_XInput_Base_Element.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_XInput_Base.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_XInput_Base; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Pole.h"
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_AxisCalibrationInfoEntry; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareAxisInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_XInput_Base_Element; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_XInput_Base_Axis : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_XInput_Base_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool invert;
		Rewired_Core::Rewired::Pole buttonAxisContribution;
		Rewired_Core::Rewired::AxisRange sourceAxisRange;
		bool calibrateAxis;
		float axisZero;
		float axisMin;
		float axisMax;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry*>* alternateCalibrations;
		Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo* axisInfo;
		void _ctor();
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_XInput_Base_Element* destination);
	};
}

