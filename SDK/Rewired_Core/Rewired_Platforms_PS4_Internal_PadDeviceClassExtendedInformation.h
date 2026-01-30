#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace Rewired_Core::Rewired::Platforms::PS4::Internal
{
	struct PadDeviceClassExtendedInformation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t deviceClass;
		int32_t reserved;
		uint8_t capability;
		uint8_t quantityOfSelectorSwitch;
		uint16_t maxPhysicalWheelAngle;
	};
}

