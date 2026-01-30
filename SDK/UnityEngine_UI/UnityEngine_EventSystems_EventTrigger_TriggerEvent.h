#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
#include "..\UnityEngine_CoreModule\UnityEngine_Events_UnityEvent_1.h"
#include "UnityEngine_EventSystems_EventTrigger.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct EventTrigger; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct EventTrigger_TriggerEvent : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<UnityEngine_UI::UnityEngine::EventSystems::BaseEventData>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

