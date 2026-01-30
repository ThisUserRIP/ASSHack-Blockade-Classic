#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_PointerInputModule.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_EventSystems_StandaloneInputModule_InputMode.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerInputModule_MouseButtonEventData; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct StandaloneInputModule : UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_PrevActionTime;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_LastMoveVector;
		int32_t m_ConsecutiveMoveCount;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_LastMousePosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_MousePosition;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_CurrentFocusedGameObject;
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;
		mscorlib::System::String* m_HorizontalAxis;
		mscorlib::System::String* m_VerticalAxis;
		mscorlib::System::String* m_SubmitButton;
		mscorlib::System::String* m_CancelButton;
		float m_InputActionsPerSecond;
		float m_RepeatDelay;
		bool m_ForceModuleActive;
		void _ctor();
		UnityEngine_UI::UnityEngine::EventSystems::StandaloneInputModule_InputMode get_inputMode();
		bool get_allowActivationOnMobileDevice();
		void set_allowActivationOnMobileDevice(bool value);
		bool get_forceModuleActive();
		void set_forceModuleActive(bool value);
		float get_inputActionsPerSecond();
		void set_inputActionsPerSecond(float value);
		float get_repeatDelay();
		void set_repeatDelay(float value);
		mscorlib::System::String* get_horizontalAxis();
		void set_horizontalAxis(mscorlib::System::String* value);
		mscorlib::System::String* get_verticalAxis();
		void set_verticalAxis(mscorlib::System::String* value);
		mscorlib::System::String* get_submitButton();
		void set_submitButton(mscorlib::System::String* value);
		mscorlib::System::String* get_cancelButton();
		void set_cancelButton(mscorlib::System::String* value);
		bool ShouldIgnoreEventsOnNoFocus();
		void UpdateModule();
		void ReleaseMouse(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* pointerEvent, UnityEngine_CoreModule::UnityEngine::GameObject* currentOverGo);
		bool IsModuleSupported();
		bool ShouldActivateModule();
		void ActivateModule();
		void DeactivateModule();
		void Process();
		bool ProcessTouchEvents();
		void ProcessTouchPress(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);
		bool SendSubmitEventToSelectedObject();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetRawMoveVector();
		bool SendMoveEventToSelectedObject();
		void ProcessMouseEvent();
		bool ForceAutoSelect();
		void ProcessMouseEvent(int32_t id);
		bool SendUpdateEventToSelectedObject();
		void ProcessMousePress(UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* data);
		UnityEngine_CoreModule::UnityEngine::GameObject* GetCurrentFocusedGameObject();
	};
}

