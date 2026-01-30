#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_EventSystems_PointerInputModule.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerInputModule; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerInputModule_ButtonState; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_EventSystems_PointerEventData_InputButton.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_EventSystems_PointerEventData_FramePressState.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct PointerInputModule_MouseState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState>* m_TrackedButtons;
		bool AnyPressesThisFrame();
		bool AnyReleasesThisFrame();
		UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_ButtonState* GetButtonState(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton button);
		void SetButtonState(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_InputButton button, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState stateForMouseButton, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* data);
		void _ctor();
	};
}

