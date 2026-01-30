#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::Interfaces
{
	struct IControllerVibrator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_vibrationMotorCount();
		void SetVibration(int32_t motorIndex, float motorLevel);
		void SetVibration(int32_t motorIndex, float motorLevel, float duration);
		void SetVibration(int32_t motorIndex, float motorLevel, bool stopOtherMotors);
		void SetVibration(int32_t motorIndex, float motorLevel, float duration, bool stopOtherMotors);
		float GetVibration(int32_t motorIndex);
		void StopVibration();
	};
}

