#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::Drivers::Interfaces
{
	struct IControllerDriver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_AxisCount();
		int32_t get_ButtonCount();
		int32_t get_HatCount();
		int32_t get_AccelerometerCount();
		int32_t get_GyroscopeCount();
		int32_t get_TouchpadCount();
		int32_t get_LightCount();
		int32_t get_VibrationMotorCount();
	};
}

