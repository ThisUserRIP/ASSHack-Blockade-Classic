#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_RawOrDirectInput_Elements_Platform_Base.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_RawInput_Base.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawInput_Base; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawInput_Base_Axis; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawInput_Base_Button; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput_Axis_Base; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base; };
#include "Rewired_ControllerElementType.h"
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_AxisRange.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Elements_Base; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_RawInput_Base_Elements : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Elements_Platform_Base
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawInput_Base_Axis*>* axes;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawInput_Base_Button*>* buttons;
		int32_t get_buttonCount();
		int32_t get_axisCount();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Axis_Base* GetAxis(int32_t axisIndex);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Axis_Base>* get_Axes();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base>* get_Buttons();
		Rewired_Core::Rewired::ControllerElementType GetEffectiveElementIdentifierType(Rewired_Core::Rewired::ControllerElementIdentifier* elementIdentifier);
		bool GetEffectiveAxisRange(Rewired_Core::Rewired::ControllerElementIdentifier* elementIdentifier, Rewired_Core::Rewired::AxisRange& axisRange);
		mscorlib::System::Object* DeepClone();
		void CopyVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base* destination);
		void _ctor();
	};
}

