#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Data_Mapping_HardwareJoystickMap_Elements_Base.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_RawOrDirectInput.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput_Axis_Base; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_RawOrDirectInput_Elements_Platform_Base : Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Elements_Base
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Axis_Base* GetAxis(int32_t axisIndex);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Axis_Base>* get_Axes();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Button_Base>* get_Buttons();
		void _ctor();
	};
}

