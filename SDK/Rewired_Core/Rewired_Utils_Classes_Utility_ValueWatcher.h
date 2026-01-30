#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_Utils_Classes_Utility_ValueWatcher_PIGieQCwEpxlLHevmhHcEcwiNkz.h"
namespace mscorlib::System { struct Delegate; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct ValueWatcher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_changed();
		bool get_autoTriggerEvent();
		void set_autoTriggerEvent(bool value);
		bool Update();
		bool Use();
		bool TriggerEvent();
		void AddEventListener(Rewired_Core::Rewired::Utils::Classes::Utility::ValueWatcher_PIGieQCwEpxlLHevmhHcEcwiNkz eventType, mscorlib::System::Delegate* listener);
		void RemoveEventListener(Rewired_Core::Rewired::Utils::Classes::Utility::ValueWatcher_PIGieQCwEpxlLHevmhHcEcwiNkz eventType, mscorlib::System::Delegate* listener);
		void _ctor();
	};
}

