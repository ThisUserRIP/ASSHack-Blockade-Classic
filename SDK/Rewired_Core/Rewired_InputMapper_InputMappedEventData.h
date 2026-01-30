#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_InputMapper_EventData.h"
#include "Rewired_InputMapper.h"
namespace Rewired_Core::Rewired { struct InputMapper; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct InputMapper_InputMappedEventData : Rewired_Core::Rewired::InputMapper_EventData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ActionElementMap* actionElementMap;
		void _ctor(Rewired_Core::Rewired::InputMapper* mapper, Rewired_Core::Rewired::ActionElementMap* actionElementMap);
	};
}

