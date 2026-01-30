#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_PlayerController_Element.h"
namespace Rewired_Core::Rewired { struct PlayerController_Element; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_Element_Definition : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool enabled;
		mscorlib::System::String* name;
		void _ctor();
		Rewired_Core::Rewired::PlayerController_Element* CreateElement(Rewired_Core::Rewired::PlayerController* A_1);
	};
}

