#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_UI_Base_UIComponentBase_1.h"
#include "Doozy_Engine_UI_UIButtonBehaviorType.h"
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_UI_SingleClickMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Doozy::Engine::UI::Input { struct InputData; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButtonBehavior; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButtonLoopAnimation; };
#include "Doozy_Engine_UI_TargetLabel.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct Button; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasGroup; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIButton : Assembly_CSharp::Doozy::Engine::UI::Base::UIComponentBase_1<Assembly_CSharp::Doozy::Engine::UI::UIButton>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool AllowMultipleClicks;
		mscorlib::System::String* ButtonCategory;
		mscorlib::System::String* ButtonName;
		Assembly_CSharp::Doozy::Engine::UI::SingleClickMode ClickMode;
		bool DeselectButtonAfterClick;
		float DisableButtonBetweenClicksInterval;
		float DoubleClickRegisterInterval;
		Assembly_CSharp::Doozy::Engine::UI::Input::InputData* InputData;
		float LongClickRegisterInterval;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* OnPointerEnter;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* OnPointerExit;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* OnPointerDown;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* OnPointerUp;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* OnClick;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* OnDoubleClick;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* OnLongClick;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* OnRightClick;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* OnSelected;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* OnDeselected;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonLoopAnimation* NormalLoopAnimation;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonLoopAnimation* SelectedLoopAnimation;
		Assembly_CSharp::Doozy::Engine::UI::TargetLabel TargetLabel;
		UnityEngine_UI::UnityEngine::UI::Text* TextLabel;
		UnityEngine_UI::UnityEngine::UI::Button* m_button;
		UnityEngine_UIModule::UnityEngine::CanvasGroup* m_canvasGroup;
		bool m_clickedOnce;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_disableButtonCoroutine;
		float m_doubleClickTimeoutCounter;
		bool m_executedLongClick;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_longClickRegisterCoroutine;
		float m_longClickTimeoutCounter;
		bool m_updateStartValuesRequired;
		struct StaticFields
		{
			mscorlib::System::Action_2<Assembly_CSharp::Doozy::Engine::UI::UIButton, Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType>* OnUIButtonAction;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_BackButtonName();
		static mscorlib::System::String* get_CustomButtonCategory();
		static mscorlib::System::String* get_DefaultButtonCategory();
		static mscorlib::System::String* get_DefaultButtonName();
		UnityEngine_UI::UnityEngine::UI::Button* get_Button();
		UnityEngine_UIModule::UnityEngine::CanvasGroup* get_CanvasGroup();
		bool get_HasLabel();
		bool get_Interactable();
		void set_Interactable(bool value);
		bool get_IsBackButton();
		bool get_IsSelected();
		bool get_UpdateStartValuesRequired();
		void set_UpdateStartValuesRequired(bool value);
		bool get_DebugComponent();
		void Reset();
		void Awake();
		void OnEnable();
		void OnDisable();
		void Update();
		void UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_IPointerClickHandler_OnPointerClick(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void UnityEngine_EventSystems_ISelectHandler_OnSelect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void UnityEngine_EventSystems_IDeselectHandler_OnDeselect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void DeselectButton();
		void DeselectButton(float delay);
		void DisableButton();
		void DisableButton(float duration);
		void EnableButton();
		void ExecutePointerEnter(bool debug);
		void ExecutePointerExit(bool debug);
		void ExecutePointerDown(bool debug);
		void ExecutePointerUp(bool debug);
		void ExecuteClick(bool debug);
		void ExecuteDoubleClick(bool debug);
		void ExecuteLongClick(bool debug);
		void ExecuteRightClick(bool debug);
		void ExecuteOnButtonDeselected(bool debug);
		void ExecuteOnButtonSelected(bool debug);
		void LoadPresets();
		void NotifySystemOfTriggeredBehavior(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType behaviorType);
		void SelectButton();
		void SetLabelText(mscorlib::System::String* text);
		void StartNormalLoopAnimation();
		void StartSelectedLoopAnimation();
		void StopNormalLoopAnimation();
		void StopSelectedLoopAnimation();
		void PrintBehaviorDebugMessage(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* behavior, mscorlib::System::String* action, bool debug);
		void TriggerButtonBehavior(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* behavior, bool debug);
		void InitiateClick(bool debug);
		void ReadyAllBehaviors();
		void RegisterLongClick(bool debug);
		void UnregisterLongClick(bool debug);
		void ResetLongClick(bool debug);
		bool BehaviorEnabled(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType behaviorType);
		mscorlib::System::Collections::IEnumerator* DeselectButtonEnumerator(float delay);
		mscorlib::System::Collections::IEnumerator* ExecuteButtonBehaviorEnumerator(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* behavior);
		mscorlib::System::Collections::IEnumerator* DisableButtonEnumerator(float duration);
		mscorlib::System::Collections::IEnumerator* DisableButtonBehaviorEnumerator(Assembly_CSharp::Doozy::Engine::UI::UIButtonBehavior* behavior);
		mscorlib::System::Collections::IEnumerator* RunOnClickEnumerator(bool debug);
		mscorlib::System::Collections::IEnumerator* RunOnLongClickEnumerator(bool debug);
		static mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::UIButton>* GetButtons(mscorlib::System::String* buttonCategory, mscorlib::System::String* buttonName);
		void _ctor();
		static void _cctor();
	};
}

