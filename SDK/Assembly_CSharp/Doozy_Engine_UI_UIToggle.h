#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_UI_Base_UIComponentBase_1.h"
#include "Doozy_Engine_UI_UIToggleState.h"
#include "Doozy_Engine_UI_UIToggleBehaviorType.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Doozy::Engine::UI::Input { struct InputData; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIToggleBehavior; };
namespace Assembly_CSharp::Doozy::Engine::Events { struct BoolEvent; };
#include "Doozy_Engine_UI_TargetLabel.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasGroup; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIToggle : Assembly_CSharp::Doozy::Engine::UI::Base::UIComponentBase_1<Assembly_CSharp::Doozy::Engine::UI::UIToggle>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool AllowMultipleClicks;
		float DisableButtonBetweenClicksInterval;
		bool DeselectButtonAfterClick;
		Assembly_CSharp::Doozy::Engine::UI::Input::InputData* InputData;
		Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior* OnPointerEnter;
		Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior* OnPointerExit;
		Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior* OnClick;
		Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior* OnSelected;
		Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior* OnDeselected;
		Assembly_CSharp::Doozy::Engine::Events::BoolEvent* OnValueChanged;
		Assembly_CSharp::Doozy::Engine::UI::TargetLabel TargetLabel;
		UnityEngine_UI::UnityEngine::UI::Text* TextLabel;
		Assembly_CSharp::Doozy::Engine::Progress::Progressor* ToggleProgressor;
		UnityEngine_UIModule::UnityEngine::CanvasGroup* m_canvasGroup;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_disableButtonCoroutine;
		bool m_previousValue;
		UnityEngine_UI::UnityEngine::UI::Toggle* m_toggle;
		bool m_updateStartValuesRequired;
		bool m_initialized;
		struct StaticFields
		{
			mscorlib::System::Action_3<Assembly_CSharp::Doozy::Engine::UI::UIToggle, Assembly_CSharp::Doozy::Engine::UI::UIToggleState, Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType>* OnUIToggleAction;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_UIModule::UnityEngine::CanvasGroup* get_CanvasGroup();
		bool get_HasLabel();
		bool get_Interactable();
		void set_Interactable(bool value);
		bool get_IsOn();
		void set_IsOn(bool value);
		bool get_IsSelected();
		UnityEngine_UI::UnityEngine::UI::Toggle* get_Toggle();
		bool get_UpdateStartValuesRequired();
		void set_UpdateStartValuesRequired(bool value);
		bool get_DebugComponent();
		void Reset();
		void Awake();
		void OnEnable();
		void Start();
		void OnDisable();
		void Update();
		void UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_ISelectHandler_OnSelect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void UnityEngine_EventSystems_IDeselectHandler_OnDeselect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void DeselectToggle();
		void DeselectToggle(float delay);
		void DisableToggle();
		void DisableToggle(float duration);
		void EnableToggle();
		void ExecutePointerEnter(bool debug);
		void ExecutePointerExit(bool debug);
		void ExecuteClick(bool debug);
		void ExecuteOnButtonDeselected(bool debug);
		void ExecuteOnButtonSelected(bool debug);
		void LoadPresets();
		void NotifySystemOfTriggeredBehavior(Assembly_CSharp::Doozy::Engine::UI::UIToggleState toggleState, Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType behaviorType);
		void SelectToggle();
		void SetLabelText(mscorlib::System::String* text);
		void ToggleOff();
		void ToggleOn();
		void PrintBehaviorDebugMessage(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior* behavior, mscorlib::System::String* action, bool debug);
		void ToggleOnValueChanged(bool value);
		void TriggerToggleBehavior(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior* behavior, bool debug);
		bool BehaviorEnabled(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType behaviorType);
		mscorlib::System::Collections::IEnumerator* DeselectToggleEnumerator(float delay);
		mscorlib::System::Collections::IEnumerator* ExecuteToggleBehaviorEnumerator(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior* behavior);
		mscorlib::System::Collections::IEnumerator* DisableToggleEnumerator(float duration);
		mscorlib::System::Collections::IEnumerator* DisableToggleBehaviorEnumerator(Assembly_CSharp::Doozy::Engine::UI::UIToggleBehavior* behavior);
		void _ctor();
		static void _cctor();
	};
}

