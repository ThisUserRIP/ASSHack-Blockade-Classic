#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_Element_Definition.h"
#include "Rewired_PlayerController_CompoundElement.h"
namespace Rewired_Core::Rewired { struct PlayerController_CompoundElement; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_CompoundElement_Definition : Rewired_Core::Rewired::PlayerController_Element_Definition
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

