#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_EventSystems_PointerInputModule.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerInputModule; };
#include "UnityEngine_EventSystems_PointerEventData_InputButton.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerInputModule_MouseButtonEventData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct PointerInputModule_ButtonState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton m_Button;
		UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* m_EventData;
		UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* get_eventData();
		void set_eventData(UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* value);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton get_button();
		void set_button(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton value);
		void _ctor();
	};
}

