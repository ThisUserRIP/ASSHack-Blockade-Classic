#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerTemplate.h"
namespace Rewired_Core::Rewired { struct ControllerTemplate; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired::Data::Mapping { struct IHardwareControllerTemplateMap_Internal; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplate_sShJmYRSpltKUhMIGsmMxuTRJcV : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Controller* OCljOHdKkRpLcEpEKEFeASEafaMy;
		Rewired_Core::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal* JwDWVrogJeGoHabZMEarBiifzYkZ;
		void _ctor(Rewired_Core::Rewired::Controller* controller, Rewired_Core::Rewired::Data::Mapping::IHardwareControllerTemplateMap_Internal* templateMap);
	};
}

