#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct Controller; };

namespace Rewired_Core::Rewired::Interfaces
{
	struct IControllerAssigner
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_enabled();
		void set_enabled(bool value);
		bool CanHandleAssignment(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::Controller* controller);
		void AssignController(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::Controller* controller);
	};
}

