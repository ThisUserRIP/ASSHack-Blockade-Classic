#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerExtensions_DualSenseExtension.h"
namespace Rewired_Core::Rewired::ControllerExtensions { struct DualSenseExtension; };
namespace Rewired_Core::Rewired::Drivers::Interfaces { struct IDriver_DualSense; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ControllerExtensions
{
	struct DualSenseExtension_dcSoOdatGwaOUatNykwBHflJQje : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Drivers::Interfaces::IDriver_DualSense* OEwGASdRJqFatSUQvRqnopFXLHfA;
		bool JqJfvFKwCJdgbpLKBLFxBdJLzWz;
		int32_t SRtINdmUAFeXLoAzPazrbCefxK;
		void _ctor(Rewired_Core::Rewired::Drivers::Interfaces::IDriver_DualSense* driver, bool supportsVibration, int32_t vibrationMotorCount);
	};
}

