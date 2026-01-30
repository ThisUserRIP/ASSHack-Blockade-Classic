#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Controller.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_InputSource.h"
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerType.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };

namespace Rewired_Core::Rewired
{
	struct ControllerWithMap : Rewired_Core::Rewired::Controller
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(int32_t controllerId, Rewired_Core::Rewired::InputSource inputSource, mscorlib::System::String* name, mscorlib::System::String* hardwareName, mscorlib::System::String* hardwareIdentifier, Rewired_Core::Rewired::ControllerType type, mscorlib::System::Guid hardwareTypeGuid, int32_t buttonCount, IL2CPP::Array<bool>* isButtonPressureSensitive, Rewired_Core::Rewired::HardwareControllerMap_Game* hardwareMap, Rewired_Core::Rewired::Controller_Extension* extension, Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
	};
}

