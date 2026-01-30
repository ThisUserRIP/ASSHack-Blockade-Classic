#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_UI_Base_UIComponentBase_1.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Doozy_Engine_UI_UIDrawerBehaviorType.h"
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawerArrow; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawerBehavior; };
#include "Doozy_Engine_Touchy_SimpleSwipe.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawerContainer; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct ProgressEvent; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIContainer; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
#include "Doozy_Engine_UI_VisibilityState.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Touchy { struct TouchDetector; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "Doozy_Engine_Orientation_DetectedOrientation.h"
#include "Doozy_Engine_UI_UIDrawerContainerSize.h"

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIDrawer : Assembly_CSharp::Doozy::Engine::UI::Base::UIComponentBase_1<Assembly_CSharp::Doozy::Engine::UI::UIDrawer>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _IsDragged_k__BackingField;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerArrow* Arrow;
		bool BlockBackButton;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehavior* CloseBehavior;
		Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe CloseDirection;
		float CloseSpeed;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerContainer* Container;
		UnityEngine_CoreModule::UnityEngine::Vector3 CustomStartAnchoredPosition;
		bool CustomDrawerName;
		mscorlib::System::String* DrawerName;
		bool DetectGestures;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehavior* DragBehavior;
		bool HideOnBackButton;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnProgressChanged;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnInverseProgressChanged;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehavior* OpenBehavior;
		float OpenSpeed;
		Assembly_CSharp::Doozy::Engine::UI::Base::UIContainer* Overlay;
		Assembly_CSharp::Doozy::Engine::Progress::Progressor* Progressor;
		bool UseCustomStartAnchoredPosition;
		UnityEngine_UIModule::UnityEngine::Canvas* m_canvas;
		Assembly_CSharp::Doozy::Engine::UI::VisibilityState m_visibility;
		float m_visibilityProgress;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_scaledCanvas;
		bool m_availableForDrag;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_dragStartPosition;
		struct StaticFields
		{
			float AUTO_OPEN_IF_DRAGGED_OVER_VISIBILITY_PERCENT;
			float AUTO_CLOSE_IF_DRAGGED_UNDER_VISIBILITY_PERCENT;
			float AUTO_OPEN_OR_CLOSE_TERMINAL_SWIPE_VELOCITY;
			Assembly_CSharp::Doozy::Engine::UI::UIDrawer* _DraggedDrawer_k__BackingField;
			Assembly_CSharp::Doozy::Engine::UI::UIDrawer* _OpenedDrawer_k__BackingField;
			mscorlib::System::Action_2<Assembly_CSharp::Doozy::Engine::UI::UIDrawer, Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType>* OnUIDrawerBehavior;
			mscorlib::System::String* GIZMOS_TEXTURE_PATH;
			bool GIZMOS_ALLOW_SCALING;
			mscorlib::System::String* ARROW_ROOT;
			mscorlib::System::String* ARROW_LEFT;
			mscorlib::System::String* ARROW_RIGHT;
			mscorlib::System::String* ARROW_UP;
			mscorlib::System::String* ARROW_DOWN;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_AnyDrawerOpened();
		static mscorlib::System::String* get_DefaultDrawerCategory();
		static mscorlib::System::String* get_DefaultDrawerName();
		static Assembly_CSharp::Doozy::Engine::UI::UIDrawer* get_DraggedDrawer();
		static void set_DraggedDrawer(Assembly_CSharp::Doozy::Engine::UI::UIDrawer* value);
		static Assembly_CSharp::Doozy::Engine::UI::UIDrawer* get_OpenedDrawer();
		static void set_OpenedDrawer(Assembly_CSharp::Doozy::Engine::UI::UIDrawer* value);
		static Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector* get_Detector();
		bool get_ArrowEnabled();
		UnityEngine_UIModule::UnityEngine::Canvas* get_Canvas();
		bool get_Closed();
		bool get_HasArrow();
		bool get_HasContainer();
		bool get_HasOverlay();
		float get_InverseVisibility();
		bool get_IsClosing();
		bool get_IsDragged();
		void set_IsDragged(bool value);
		bool get_IsOpening();
		bool get_Opened();
		Assembly_CSharp::Doozy::Engine::UI::VisibilityState get_Visibility();
		float get_VisibilityProgress();
		void set_VisibilityProgress(float value);
		bool get_DebugComponent();
		void OnDrawGizmosSelected();
		void Reset();
		void Awake();
		void OnEnable();
		void OnDisable();
		void Update();
		void OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnRectTransformDimensionsChange();
		void Close(bool instantAction);
		void DisableGestureDetection();
		void EnableGestureDetection();
		void NotifySystemOfTriggeredBehavior(Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType behaviorType);
		void Open(bool instantAction);
		void Toggle(bool instantAction);
		void ToggleGestureDetection();
		void UpdateArrowContainer();
		void UpdateContainer();
		void UpdateContainerSize();
		void UpdateContainerSize(float fixedSize);
		void UpdateContainerSize(float percentageOfScreen, float minimumSize);
		void UpdateDrawerCloseDirection(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe hideDirection);
		void InitiateOpen();
		void FinalizeOpen();
		void InitiateClose();
		void FinalizeClose();
		void MoveToCustomStartPosition();
		void OnOrientationChanged(Assembly_CSharp::Doozy::Engine::Orientation::DetectedOrientation detectedOrientation);
		void InitContainerPositions();
		void UpdateContainerSize(Assembly_CSharp::Doozy::Engine::UI::UIDrawerContainerSize size, float percentageOfScreen, float minimumSize, float fixedSize);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetContainerClosedPosition();
		void UpdateContainerAnimation();
		void UpdateContainerVelocity();
		void UpdateContainerDraggedPosition();
		void UpdateShowProgress();
		void InitArrow();
		void UpdateArrow();
		void UpdateOverlayAlpha(float value);
		void UpdateContainerAlpha(float value);
		void UpdateArrowActiveState();
		float ScaledPositionX(float x);
		float ScaledPositionY(float y);
		UnityEngine_CoreModule::UnityEngine::Vector2 ScaledTouchPosition(UnityEngine_CoreModule::UnityEngine::Vector2 touchPosition);
		void DebugOpenProgress();
		static void Close(mscorlib::System::String* drawerName, bool debug);
		static bool Contains(mscorlib::System::String* drawerName);
		static Assembly_CSharp::Doozy::Engine::UI::UIDrawer* Get(mscorlib::System::String* drawerName);
		static void Open(mscorlib::System::String* drawerName, bool debug);
		static void Toggle(mscorlib::System::String* drawerName, bool debug);
		void _ctor();
		static void _cctor();
	};
}

