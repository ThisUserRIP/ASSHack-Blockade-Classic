#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_EventSystems_EventTrigger.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct EventTrigger; };
#include "UnityEngine_EventSystems_EventTriggerType.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct EventTrigger_TriggerEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct EventTrigger_Entry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::EventSystems::EventTriggerType eventID;
		UnityEngine_UI::UnityEngine::EventSystems::EventTrigger_TriggerEvent* callback;
		void _ctor();
	};
}

