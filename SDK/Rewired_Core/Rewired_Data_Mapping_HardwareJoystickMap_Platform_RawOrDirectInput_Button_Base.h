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
#include "Rewired_Pole.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_Data_Mapping_HatType.h"
#include "Rewired_Data_Mapping_HatDirection.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareButtonInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t elementIdentifier;
		Rewired_Core::Rewired::Data::Mapping::HardwareElementSourceTypeWithHat sourceType;
		int32_t sourceButton;
		int32_t sourceAxis;
		Rewired_Core::Rewired::Pole sourceAxisPole;
		float axisDeadZone;
		int32_t sourceHat;
		Rewired_Core::Rewired::Data::Mapping::HatType sourceHatType;
		Rewired_Core::Rewired::Data::Mapping::HatDirection sourceHatDirection;
		bool requireMultipleButtons;
		IL2CPP::Array<int32_t>* requiredButtons;
		bool ignoreIfButtonsActive;
		IL2CPP::Array<int32_t>* ignoreIfButtonsActiveButtons;
		Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo* buttonInfo;
		void _ctor();
		void ImportVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base* source);
	};
}

