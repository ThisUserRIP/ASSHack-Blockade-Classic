#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_TouchInteractable.h"
namespace Rewired_Core::Rewired::ComponentControls { struct TouchInteractable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchInteractable_InteractionStateTransitionArgs; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchInteractable_IInteractionStateTransitionHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnInteractionStateTransition(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs* data);
	};
}

