#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerMapSaveData.h"
namespace Rewired_Core::Rewired { struct KeyboardMap; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct Keyboard; };

namespace Rewired_Core::Rewired
{
	struct KeyboardMapSaveData : Rewired_Core::Rewired::ControllerMapSaveData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::KeyboardMap* get_keyboardMap();
		void _ctor(Rewired_Core::Rewired::Keyboard* keyboard, Rewired_Core::Rewired::KeyboardMap* map);
	};
}

