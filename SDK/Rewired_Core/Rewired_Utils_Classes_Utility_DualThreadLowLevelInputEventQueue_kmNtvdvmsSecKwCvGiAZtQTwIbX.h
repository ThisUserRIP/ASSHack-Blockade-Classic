#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_LowLevelInputEvent.h"
namespace Rewired_Core::Rewired { struct LowLevelInputEvent; };
#include "Rewired_Utils_Classes_Utility_LockedObject_1.h"
#include "Rewired_Utils_Classes_Utility_DualThreadLowLevelInputEventQueue.h"
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct DualThreadLowLevelInputEventQueue; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct DualThreadLowLevelInputEventQueue_kmNtvdvmsSecKwCvGiAZtQTwIbX : Rewired_Core::Rewired::Utils::Classes::Utility::LockedObject_1<Rewired_Core::Rewired::LowLevelInputEvent>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::LowLevelInputEvent get_Event();
		void set_Event(Rewired_Core::Rewired::LowLevelInputEvent value);
		void _ctor(mscorlib::System::Object* lockObject);
	};
}

