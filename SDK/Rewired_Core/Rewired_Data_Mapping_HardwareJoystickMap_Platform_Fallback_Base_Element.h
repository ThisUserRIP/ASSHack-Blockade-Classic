#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Fallback_Base.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Fallback_Base; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_Data_Mapping_HardwareElementSourceTypeWithHat.h"
#include "Rewired_Platforms_UnityAxis.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_Platforms_UnityButton.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct CustomCalculation; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Fallback_Base_CustomCalculationSourceData; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_Fallback_Base_Element : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t elementIdentifier;
		Rewired_Core::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat sourceType;
		Rewired_Core::Rewired::Platforms::UnityAxis sourceAxis;
		float axisDeadZone;
		Rewired_Core::Rewired::Platforms::UnityButton sourceButton;
		UnityEngine_CoreModule::UnityEngine::KeyCode sourceKeyCode;
		Rewired_Core::Rewired::Data::Mapping::CustomCalculation* customCalculation;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback_Base_CustomCalculationSourceData*>* customCalculationSourceData;
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback_Base_Element* destination);
		void _ctor();
	};
}

