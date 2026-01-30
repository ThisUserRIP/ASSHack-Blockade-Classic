#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_Axis2D.h"
#include "Rewired_PlayerController.h"
namespace Rewired_Core::Rewired { struct PlayerController; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_MouseAxis2D_Definition; };
namespace Rewired_Core::Rewired { struct PlayerController_MouseAxis; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_MouseAxis2D : Rewired_Core::Rewired::PlayerController_Axis2D
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_MouseAxis2D_Definition* definition);
		Rewired_Core::Rewired::PlayerController_MouseAxis* get_xAxis();
		Rewired_Core::Rewired::PlayerController_MouseAxis* get_yAxis();
	};
}

