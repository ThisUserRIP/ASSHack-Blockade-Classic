#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_PointerInputModule.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct TouchInputModule : UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2 m_LastMousePosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_MousePosition;
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;
		bool m_ForceModuleActive;
		void _ctor();
		bool get_allowActivationOnStandalone();
		void set_allowActivationOnStandalone(bool value);
		bool get_forceModuleActive();
		void set_forceModuleActive(bool value);
		void UpdateModule();
		bool IsModuleSupported();
		bool ShouldActivateModule();
		bool UseFakeInput();
		void Process();
		void FakeTouches();
		void ProcessTouchEvents();
		void ProcessTouchPress(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);
		void DeactivateModule();
		mscorlib::System::String* ToString();
	};
}

