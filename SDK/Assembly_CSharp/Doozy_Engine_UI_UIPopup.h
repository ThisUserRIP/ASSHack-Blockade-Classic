#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_UI_Base_UIComponentBase_1.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Doozy_Engine_UI_Animation_AnimationType.h"
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIContainer; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopupContentReferences; };
#include "Doozy_Engine_UI_PopupDisplayOn.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopupBehavior; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct ProgressEvent; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
namespace UnityEngine_UI::UnityEngine::UI { struct GraphicRaycaster; };
#include "Doozy_Engine_UI_VisibilityState.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButton; };
namespace Assembly_CSharp::Doozy::Engine::Touchy { struct TouchDetector; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UICanvas; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIPopup : Assembly_CSharp::Doozy::Engine::UI::Base::UIComponentBase_1<Assembly_CSharp::Doozy::Engine::UI::UIPopup>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _PopupName_k__BackingField;
		bool AddToPopupQueue;
		bool AutoHideAfterShow;
		float AutoHideAfterShowDelay;
		bool AutoSelectButtonAfterShow;
		bool BlockBackButton;
		mscorlib::System::String* CanvasName;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIContainer* Container;
		bool CustomCanvasName;
		Assembly_CSharp::Doozy::Engine::UI::UIPopupContentReferences* Data;
		bool DestroyAfterHide;
		Assembly_CSharp::Doozy::Engine::UI::PopupDisplayOn DisplayTarget;
		Assembly_CSharp::Doozy::Engine::UI::UIPopupBehavior* HideBehavior;
		bool HideOnAnyButton;
		bool HideOnBackButton;
		bool HideOnClickAnywhere;
		bool HideOnClickContainer;
		bool HideOnClickOverlay;
		Assembly_CSharp::Doozy::Engine::Progress::Progressor* HideProgressor;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnInverseVisibilityChanged;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnVisibilityChanged;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIContainer* Overlay;
		UnityEngine_CoreModule::UnityEngine::GameObject* SelectedButton;
		Assembly_CSharp::Doozy::Engine::UI::UIPopupBehavior* ShowBehavior;
		Assembly_CSharp::Doozy::Engine::Progress::Progressor* ShowProgressor;
		bool UpdateHideProgressorOnShow;
		bool UpdateShowProgressorOnHide;
		bool UseOverlay;
		UnityEngine_UIModule::UnityEngine::Canvas* m_canvas;
		UnityEngine_UI::UnityEngine::UI::GraphicRaycaster* m_graphicRaycaster;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_previousSelectedButton;
		float m_visibilityProgress;
		Assembly_CSharp::Doozy::Engine::UI::VisibilityState m_visibilityState;
		bool m_addedToQueue;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_showCoroutine;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_hideCoroutine;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_autoHideCoroutine;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_disableButtonClickCoroutine;
		IL2CPP::Array<Assembly_CSharp::Doozy::Engine::UI::UIButton*>* m_childUIButtons;
		bool m_initialized;
		struct StaticFields
		{
			mscorlib::System::String* DEFAULT_POPUP_CANVAS_NAME;
			int32_t DEFAULT_POPUP_CANVAS_OVERLAY_SORT_ORDER;
			mscorlib::System::Action_2<Assembly_CSharp::Doozy::Engine::UI::UIPopup, Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType>* OnUIPopupAction;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::UIPopup>* VisiblePopups;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_AnyPopupVisible();
		static mscorlib::System::String* get_DefaultPopupName();
		static mscorlib::System::String* get_DefaultTargetCanvasName();
		static Assembly_CSharp::Doozy::Engine::UI::UIPopup* get_LastShownPopup();
		static Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector* get_Detector();
		bool get_AddedToQueue();
		void set_AddedToQueue(bool value);
		UnityEngine_UIModule::UnityEngine::Canvas* get_Canvas();
		bool get_DetectsTouch();
		UnityEngine_UI::UnityEngine::UI::GraphicRaycaster* get_GraphicRaycaster();
		bool get_HasContainer();
		bool get_HasOverlay();
		float get_InverseVisibility();
		bool get_IsHidden();
		bool get_IsHiding();
		bool get_IsShowing();
		bool get_IsVisible();
		mscorlib::System::String* get_PopupName();
		void set_PopupName(mscorlib::System::String* value);
		Assembly_CSharp::Doozy::Engine::UI::VisibilityState get_Visibility();
		void set_Visibility(Assembly_CSharp::Doozy::Engine::UI::VisibilityState value);
		float get_VisibilityProgress();
		void set_VisibilityProgress(float value);
		bool get_DebugComponent();
		void Reset();
		void Awake();
		void OnDisable();
		void Update();
		void CancelAutoHide();
		Assembly_CSharp::Doozy::Engine::UI::UICanvas* GetTargetCanvas();
		void Hide(float delay);
		void Hide(bool instantAction);
		void InstantHide();
		void ResetTargetCanvasToPopupCanvas(bool reparentImmediately);
		void Show(bool instantAction);
		void NotifySystemOfTriggeredBehavior(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType);
		void SetPopupName(mscorlib::System::String* popupName);
		void SetTargetCanvasName(mscorlib::System::String* canvasName, bool reparentImmediately);
		void Initialize();
		void LoadPresets();
		void StopHide();
		void StopShow();
		void UpdateChildUIButtonsStartValues();
		void UpdateOverlayAlpha(float value);
		void ReparentToTargetCanvas();
		void ReparentToPopupCanvas();
		mscorlib::System::Collections::IEnumerator* TriggerShowInNextFrame(bool instantAction);
		mscorlib::System::Collections::IEnumerator* ShowEnumerator(bool instantAction);
		mscorlib::System::Collections::IEnumerator* HideEnumerator(bool instantAction);
		mscorlib::System::Collections::IEnumerator* HideWithDelayEnumerator(float delay);
		mscorlib::System::Collections::IEnumerator* ExecuteShowSelectDeselectButtonEnumerator();
		mscorlib::System::Collections::IEnumerator* ExecuteHideDeselectButtonEnumerator();
		static Assembly_CSharp::Doozy::Engine::UI::UIPopup* GetPopup(mscorlib::System::String* popupName);
		static Assembly_CSharp::Doozy::Engine::UI::UICanvas* GetPopupOverlayCanvas();
		static Assembly_CSharp::Doozy::Engine::UI::UICanvas* GetTargetCanvas(Assembly_CSharp::Doozy::Engine::UI::PopupDisplayOn popupDisplayOn, mscorlib::System::String* targetCanvasName);
		static bool HidePopup(mscorlib::System::String* popupName, bool instantAction);
		static void RemoveHiddenFromVisiblePopups();
		static void RemoveNullsFromVisiblePopups();
		void _ctor();
		static void _cctor();
		void _ShowEnumerator_b__111_0();
	};
}

