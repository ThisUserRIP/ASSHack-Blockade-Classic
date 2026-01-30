#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core { struct SKrrZjnCrwAmuNrKjpiWkZtnRmf; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_InputSource.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Rewired_Core
{
	struct ITQWtBptMisufOMQISEmmBICBXFf
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::SKrrZjnCrwAmuNrKjpiWkZtnRmf* get_NativeJoystick();
		int32_t get_JoystickId();
		int32_t get_ButtonCount();
		int32_t get_AxisCount();
		int32_t get_HatCount();
		int32_t get_BallCount();
		bool get_HasElements();
		Rewired_Core::Rewired::InputSource get_InputSource();
		bool get_HasEverReceivedInput();
		float GetAxisValue(int32_t A_1);
		int32_t GetAxisRawValue(int32_t A_1);
		bool GetButtonValue(int32_t A_1);
		int32_t GetHatValue(int32_t A_1);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetBallValue(int32_t A_1);
	};
}

