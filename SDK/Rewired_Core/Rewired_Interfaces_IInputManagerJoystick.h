#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace Rewired_Core::Rewired { struct BridgedController; };
namespace Rewired_Core::Rewired { struct ControllerDisconnectedEventArgs; };

namespace Rewired_Core::Rewired::Interfaces
{
	struct IInputManagerJoystick
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Update();
		void FillData(Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		Rewired_Core::Rewired::BridgedController* ToBridgedController();
		Rewired_Core::Rewired::ControllerDisconnectedEventArgs* ToControllerDisconnectedEventArgs();
	};
}

