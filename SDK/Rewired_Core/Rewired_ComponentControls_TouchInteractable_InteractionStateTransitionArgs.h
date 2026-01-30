#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ComponentControls_TouchInteractable.h"
namespace Rewired_Core::Rewired::ComponentControls { struct TouchInteractable; };
#include "Rewired_ComponentControls_TouchInteractable_InteractionState.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchInteractable_InteractionStateTransitionArgs : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::TouchInteractable* aIQRtRTvgNUeyMnrIiSCVKRwCbuD;
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState AUAkIHdyWtlIQvYYpQtiOvbKUMo;
		float zYWHKazIJaZxAEjHyFvUPBoNRmP;
		Rewired_Core::Rewired::ComponentControls::TouchInteractable* get_sender();
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState get_state();
		float get_duration();
		void _ctor();
		void MjXoIGnuqPKtRkGyqidueJiQoOK(Rewired_Core::Rewired::ComponentControls::TouchInteractable* A_1, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState A_2, float A_3);
	};
}

