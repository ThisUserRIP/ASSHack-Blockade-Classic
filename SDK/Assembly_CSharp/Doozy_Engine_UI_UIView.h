#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_UI_Base_UIComponentBase_1.h"
#include "Doozy_Engine_UI_UIViewBehaviorType.h"
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Doozy_Engine_UI_UIViewStartBehavior.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIViewBehavior; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct ProgressEvent; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "Doozy_Engine_UI_TargetOrientation.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
namespace UnityEngine_UI::UnityEngine::UI { struct GraphicRaycaster; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasGroup; };
#include "Doozy_Engine_UI_VisibilityState.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButton; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIView; };
namespace Assembly_CSharp::Doozy::Engine::Layouts { struct LayoutController; };
namespace Assembly_CSharp::Doozy::Engine::Orientation { struct OrientationDetector; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Engine_Orientation_DetectedOrientation.h"
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIView : Assembly_CSharp::Doozy::Engine::UI::Base::UIComponentBase_1<Assembly_CSharp::Doozy::Engine::UI::UIView>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool AutoHideAfterShow;
		float AutoHideAfterShowDelay;
		bool AutoSelectButtonAfterShow;
		Assembly_CSharp::Doozy::Engine::UI::UIViewStartBehavior BehaviorAtStart;
		UnityEngine_CoreModule::UnityEngine::Vector3 CustomStartAnchoredPosition;
		bool DeselectAnyButtonSelectedOnHide;
		bool DeselectAnyButtonSelectedOnShow;
		bool DisableCanvasWhenHidden;
		bool DisableGameObjectWhenHidden;
		bool DisableGraphicRaycasterWhenHidden;
		Assembly_CSharp::Doozy::Engine::UI::UIViewBehavior* HideBehavior;
		Assembly_CSharp::Doozy::Engine::Progress::Progressor* HideProgressor;
		Assembly_CSharp::Doozy::Engine::UI::UIViewBehavior* LoopBehavior;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnInverseVisibilityChanged;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnVisibilityChanged;
		UnityEngine_CoreModule::UnityEngine::GameObject* SelectedButton;
		Assembly_CSharp::Doozy::Engine::UI::UIViewBehavior* ShowBehavior;
		Assembly_CSharp::Doozy::Engine::Progress::Progressor* ShowProgressor;
		Assembly_CSharp::Doozy::Engine::UI::TargetOrientation TargetOrientation;
		bool UpdateHideProgressorOnShow;
		bool UpdateShowProgressorOnHide;
		bool UseCustomStartAnchoredPosition;
		mscorlib::System::String* ViewCategory;
		mscorlib::System::String* ViewName;
		UnityEngine_UIModule::UnityEngine::Canvas* m_canvas;
		UnityEngine_UI::UnityEngine::UI::GraphicRaycaster* m_graphicRaycaster;
		UnityEngine_UIModule::UnityEngine::CanvasGroup* m_canvasGroup;
		float m_visibilityProgress;
		Assembly_CSharp::Doozy::Engine::UI::VisibilityState m_visibility;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_showCoroutine;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_hideCoroutine;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_autoHideCoroutine;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_disableButtonClickCoroutine;
		IL2CPP::Array<Assembly_CSharp::Doozy::Engine::UI::UIButton*>* m_childUIButtons;
		IL2CPP::Array<Assembly_CSharp::Doozy::Engine::UI::UIView*>* m_childUIViews;
		bool m_initialized;
		Assembly_CSharp::Doozy::Engine::Layouts::LayoutController* m_layoutController;
		bool m_hasLayoutController;
		bool m_controlledByLayoutGroup;
		struct StaticFields
		{
			mscorlib::System::Action_2<Assembly_CSharp::Doozy::Engine::UI::UIView, Assembly_CSharp::Doozy::Engine::UI::UIViewBehaviorType>* OnUIViewAction;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::UIView>* VisibleViews;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_DefaultViewCategory();
		static mscorlib::System::String* get_DefaultViewName();
		static Assembly_CSharp::Doozy::Engine::Orientation::OrientationDetector* get_OrientationDetector();
		UnityEngine_UIModule::UnityEngine::Canvas* get_Canvas();
		UnityEngine_UIModule::UnityEngine::CanvasGroup* get_CanvasGroup();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_CurrentStartPosition();
		UnityEngine_UI::UnityEngine::UI::GraphicRaycaster* get_GraphicRaycaster();
		float get_InverseVisibility();
		bool get_IsHidden();
		bool get_IsHiding();
		bool get_IsShowing();
		bool get_IsVisible();
		Assembly_CSharp::Doozy::Engine::UI::VisibilityState get_Visibility();
		void set_Visibility(Assembly_CSharp::Doozy::Engine::UI::VisibilityState value);
		float get_VisibilityProgress();
		void set_VisibilityProgress(float value);
		bool get_HasChildUIViews();
		bool get_DebugComponent();
		void Reset();
		void Awake();
		void Start();
		void CheckForLayoutController();
		void OnEnable();
		void OnDisable();
		void CancelAutoHide();
		void Hide(bool instantAction);
		void Hide(float delay);
		void InstantHide();
		void InstantShow();
		void NotifySystemOfTriggeredBehavior(Assembly_CSharp::Doozy::Engine::UI::UIViewBehaviorType behaviorType);
		void ResetAlpha();
		void ResetPosition();
		void SetVisibility(bool visible);
		void SetVisibility(bool visible, bool instantAction);
		void Show(bool instantAction);
		void StartLoopAnimation();
		void StopLoopAnimation();
		void Toggle(bool instantAction);
		void HideDeselectButton();
		void Initialize();
		void MoveToCustomStartPosition();
		void LoadPresets();
		void OnOrientationChange(Assembly_CSharp::Doozy::Engine::Orientation::DetectedOrientation newDeviceOrientation);
		void ShowSelectDeselectButton();
		void StopHide();
		void StopShow();
		void RemoveNullChildUIButtons();
		void UpdateChildUIButtonsStartValues();
		static mscorlib::System::Collections::IEnumerator* ShowViewNextFrame(mscorlib::System::String* viewCategory, mscorlib::System::String* viewName, bool instantAction);
		static mscorlib::System::Collections::IEnumerator* HideViewNextFrame(mscorlib::System::String* viewCategory, mscorlib::System::String* viewName, bool instantAction);
		mscorlib::System::Collections::IEnumerator* ShowEnumerator(bool instantAction);
		mscorlib::System::Collections::IEnumerator* HideEnumerator(bool instantAction);
		mscorlib::System::Collections::IEnumerator* HideWithDelayEnumerator(float delay);
		mscorlib::System::Collections::IEnumerator* ExecuteGetOrientationEnumerator();
		static mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::UIView>* GetViews(mscorlib::System::String* viewCategory, mscorlib::System::String* viewName);
		static void HideView(mscorlib::System::String* viewName, bool instantAction);
		static void HideView(mscorlib::System::String* viewCategory, mscorlib::System::String* viewName, bool instantAction);
		static void HideViewCategory(mscorlib::System::String* viewCategory, bool instantAction);
		static bool IsViewVisible(mscorlib::System::String* viewCategory, mscorlib::System::String* viewName);
		static void ShowView(mscorlib::System::String* viewName, bool instantAction);
		static void ShowView(mscorlib::System::String* viewCategory, mscorlib::System::String* viewName, bool instantAction);
		static void ShowViewCategory(mscorlib::System::String* viewCategory, bool instantAction);
		static void ExecuteHide(mscorlib::System::String* viewCategory, mscorlib::System::String* viewName, bool instantAction);
		static void ExecuteHideCategory(mscorlib::System::String* viewCategory, bool instantAction);
		static void ExecuteShow(mscorlib::System::String* viewCategory, mscorlib::System::String* viewName, bool instantAction);
		static void ExecuteShowCategory(mscorlib::System::String* viewCategory, bool instantAction);
		static void RemoveHiddenFromVisibleViews();
		static void RemoveNullsFromVisibleViews();
		void _ctor();
		static void _cctor();
	};
}

