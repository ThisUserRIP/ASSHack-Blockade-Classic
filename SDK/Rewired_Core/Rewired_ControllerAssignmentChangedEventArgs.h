#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired { struct Player; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct ControllerAssignmentChangedEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool AUAkIHdyWtlIQvYYpQtiOvbKUMo;
		int32_t LvBsMepMzQujePFYUrpFdNOUHkai;
		int32_t CvbQaJoobigmAGNWGnAzDUbEQcN;
		Rewired_Core::Rewired::ControllerType EBtabYCMVXBsRbYhFnfqdjKXqLQ;
		bool get_state();
		Rewired_Core::Rewired::Controller* get_controller();
		Rewired_Core::Rewired::Player* get_player();
		void _ctor(int32_t playerId, int32_t controllerId, Rewired_Core::Rewired::ControllerType controllerType, bool state);
	};
}

