#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap; };
#include "Rewired_Data_Mapping_AlternateAxisCalibrationType.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct AxisCalibrationInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_AxisCalibrationInfoEntry; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_AxisCalibrationInfoEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Data::Mapping::AlternateAxisCalibrationType key;
		Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo* calibration;
		void _ctor(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry* original);
		mscorlib::System::Object* DeepClone();
		void ImportVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry* source);
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Rewired_Core::Rewired::Data::Mapping::AxisCalibrationInfo>* ToDictionary(IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_AxisCalibrationInfoEntry*>* calibrations, bool deepClone);
	};
}

