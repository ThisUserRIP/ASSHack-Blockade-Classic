#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "Rewired_ControllerIdentifier.h"
namespace Rewired_Core::Rewired { struct ControllerIdentifier; };

namespace Rewired_Core::Rewired::Interfaces
{
	struct IControllerMapStore
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void SaveControllerMap(int32_t playerId, Rewired_Core::Rewired::ControllerMap* controllerMap);
		Rewired_Core::Rewired::ControllerMap* LoadControllerMap(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t categoryId, int32_t layoutId);
	};
}

