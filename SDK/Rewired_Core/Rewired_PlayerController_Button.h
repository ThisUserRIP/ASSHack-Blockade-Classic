#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_ElementWithSource.h"
#include "Rewired_PlayerController.h"
namespace Rewired_Core::Rewired { struct PlayerController; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_Button_Definition; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_Button : Rewired_Core::Rewired::PlayerController_ElementWithSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(Rewired_Core::Rewired::PlayerController* parent, Rewired_Core::Rewired::PlayerController_Button_Definition* definition);
		bool get_value();
		bool get_valuePrev();
		bool get_justPressed();
		bool get_justReleased();
	};
}

