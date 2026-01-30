#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap_Platform_RawOrDirectInput.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput; };
namespace Rewired_Core::Rewired::Data::Mapping { struct CustomCalculation; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawOrDirectInput_CustomCalculationSourceData; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_Platform_RawOrDirectInput_Element : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Data::Mapping::CustomCalculation* customCalculation;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_CustomCalculationSourceData*>* customCalculationSourceData;
		mscorlib::System::Object* DeepClone();
		void ImportVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawOrDirectInput_Element* source);
		void _ctor();
	};
}

