#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Custom_Element.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Custom.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Custom; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_AxisRange.h"
#include "Rewired_Pole.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_AxisCalibrationInfoEntry; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareAxisInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Custom_Element; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_Custom_Axis : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool invert;
		Rewired_Core::Rewired::AxisRange sourceAxisRange;
		Rewired_Core::Rewired::Pole buttonAxisContribution;
		bool calibrateAxis;
		float axisZero;
		float axisMin;
		float axisMax;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry*>* alternateCalibrations;
		Rewired_Core::Rewired::Data::Mapping::HardwareAxisInfo* axisInfo;
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Element* destination);
		void _ctor();
	};
}

