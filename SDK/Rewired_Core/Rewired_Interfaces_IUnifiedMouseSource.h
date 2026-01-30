#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };

namespace Rewired_Core::Rewired::Interfaces
{
	struct IUnifiedMouseSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::InputSource get_inputSource();
		Rewired_Core::Rewired::HardwareControllerMap_Game* get_hardwareMap();
		int32_t get_axisCount();
		int32_t get_buttonCount();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_mousePosition();
		Rewired_Core::Rewired::Controller_Extension* get_controllerExtension();
		void UpdateInputData(Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		void Clear();
	};
}

