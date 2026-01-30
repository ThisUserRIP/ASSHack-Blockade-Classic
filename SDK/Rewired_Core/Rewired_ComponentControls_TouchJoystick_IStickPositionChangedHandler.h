#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_TouchJoystick.h"
namespace Rewired_Core::Rewired::ComponentControls { struct TouchJoystick; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchJoystick_IStickPositionChangedHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnStickPositionChanged(UnityEngine_CoreModule::UnityEngine::Vector2 value);
	};
}

