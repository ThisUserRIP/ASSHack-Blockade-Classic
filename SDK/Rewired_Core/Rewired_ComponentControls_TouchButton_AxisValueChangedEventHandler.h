#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Events_UnityEvent_1.h"
#include "Rewired_ComponentControls_TouchButton.h"
namespace Rewired_Core::Rewired::ComponentControls { struct TouchButton; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchButton_AxisValueChangedEventHandler : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<mscorlib::System::Single>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

