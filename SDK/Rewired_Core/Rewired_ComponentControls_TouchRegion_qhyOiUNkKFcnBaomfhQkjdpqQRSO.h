#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Events_UnityEvent_1.h"
#include "Rewired_ComponentControls_TouchRegion.h"
namespace Rewired_Core::Rewired::ComponentControls { struct TouchRegion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchRegion_qhyOiUNkKFcnBaomfhQkjdpqQRSO : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

