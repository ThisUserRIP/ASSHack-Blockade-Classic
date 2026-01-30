#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Custom_Element.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_Custom.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Custom; };
#include "Rewired_Pole.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareButtonInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Custom_Element; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_Custom_Button : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Element
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Pole sourceAxisPole;
		bool requireMultipleButtons;
		IL2CPP::Array<int32_t>* requiredButtons;
		bool ignoreIfButtonsActive;
		IL2CPP::Array<int32_t>* ignoreIfButtonsActiveButtons;
		Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo* buttonInfo;
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Custom_Element* destination);
		void _ctor();
	};
}

