#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_Axis2D_Definition.h"
#include "Rewired_PlayerController_MouseAxis2D.h"
namespace Rewired_Core::Rewired { struct PlayerController_MouseAxis2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_MouseAxis_Definition; };
namespace Rewired_Core::Rewired { struct PlayerController_Element; };
namespace Rewired_Core::Rewired { struct PlayerController; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_MouseAxis2D_Definition : Rewired_Core::Rewired::PlayerController_Axis2D_Definition
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		Rewired_Core::Rewired::PlayerController_MouseAxis_Definition* get_xAxis();
		void set_xAxis(Rewired_Core::Rewired::PlayerController_MouseAxis_Definition* value);
		Rewired_Core::Rewired::PlayerController_MouseAxis_Definition* get_yAxis();
		void set_yAxis(Rewired_Core::Rewired::PlayerController_MouseAxis_Definition* value);
		Rewired_Core::Rewired::PlayerController_Element* CreateElement(Rewired_Core::Rewired::PlayerController* A_1);
	};
}

