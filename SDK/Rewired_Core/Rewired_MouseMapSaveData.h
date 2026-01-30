#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerMapSaveData.h"
namespace Rewired_Core::Rewired { struct MouseMap; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct Mouse; };

namespace Rewired_Core::Rewired
{
	struct MouseMapSaveData : Rewired_Core::Rewired::ControllerMapSaveData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::MouseMap* get_keyboardMap();
		void _ctor(Rewired_Core::Rewired::Mouse* mouse, Rewired_Core::Rewired::MouseMap* map);
	};
}

