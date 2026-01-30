#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_AbstractEventData.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct EventSystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseInputModule; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct BaseEventData : UnityEngine_UI::UnityEngine::EventSystems::AbstractEventData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::EventSystems::EventSystem* m_EventSystem;
		void _ctor(UnityEngine_UI::UnityEngine::EventSystems::EventSystem* eventSystem);
		UnityEngine_UI::UnityEngine::EventSystems::BaseInputModule* get_currentInputModule();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_selectedObject();
		void set_selectedObject(UnityEngine_CoreModule::UnityEngine::GameObject* value);
	};
}

