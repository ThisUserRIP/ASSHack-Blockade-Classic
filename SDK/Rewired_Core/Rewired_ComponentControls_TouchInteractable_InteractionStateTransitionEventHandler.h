#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchInteractable_InteractionStateTransitionArgs; };
#include "..\UnityEngine_CoreModule\UnityEngine_Events_UnityEvent_1.h"
#include "Rewired_ComponentControls_TouchInteractable.h"
namespace Rewired_Core::Rewired::ComponentControls { struct TouchInteractable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchInteractable_InteractionStateTransitionEventHandler : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

