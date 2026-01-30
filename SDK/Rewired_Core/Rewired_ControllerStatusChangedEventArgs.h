#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct ControllerStatusChangedEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* zChKajbhRtCfjSPFRgSGEUIuXlt;
		int32_t CvbQaJoobigmAGNWGnAzDUbEQcN;
		Rewired_Core::Rewired::ControllerType EBtabYCMVXBsRbYhFnfqdjKXqLQ;
		mscorlib::System::String* get_name();
		int32_t get_controllerId();
		Rewired_Core::Rewired::ControllerType get_controllerType();
		Rewired_Core::Rewired::Controller* get_controller();
		void _ctor(mscorlib::System::String* name, int32_t uniqueId, Rewired_Core::Rewired::ControllerType controllerType);
	};
}

