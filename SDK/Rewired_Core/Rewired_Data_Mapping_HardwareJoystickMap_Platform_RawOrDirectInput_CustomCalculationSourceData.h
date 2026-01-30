#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_RawOrDirectInput.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Data_Mapping_AxisCalibrationType.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_RawOrDirectInput_CustomCalculationSourceData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t sourceType;
		int32_t sourceAxis;
		int32_t sourceButton;
		int32_t sourceOtherAxis;
		Rewired_Core::Rewired::AxisRange sourceAxisRange;
		float axisDeadZone;
		bool invert;
		Rewired_Core::Rewired::Data::Mapping::AxisCalibrationType axisCalibrationType;
		float axisZero;
		float axisMin;
		float axisMax;
		mscorlib::System::Object* DeepClone();
		void _ctor();
	};
}

