#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Doozy_Engine_Touchy_TouchInfo.h"
namespace Assembly_CSharp::Doozy::Engine::Touchy { struct TouchInfo; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_InputLegacyModule\UnityEngine_Touch.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "..\UnityEngine_UI\UnityEngine_EventSystems_RaycastResult.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct RaycastResult; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Touchy { struct TouchySettings; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "Doozy_Engine_Touchy_Swipe.h"
#include "Doozy_Engine_Touchy_SimpleSwipe.h"

namespace Assembly_CSharp::Doozy::Engine::Touchy
{
	struct TouchDetector : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _TouchInProgress_k__BackingField;
		mscorlib::System::Action_1<Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo>* OnTapAction;
		mscorlib::System::Action_1<Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo>* OnLongTapAction;
		mscorlib::System::Action_1<Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo>* OnSwipeAction;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_currentSwipe;
		bool m_swipeEnded;
		Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo m_currentTouchInfo;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_InputLegacyModule::UnityEngine::Touch>* m_touches;
		UnityEngine_InputLegacyModule::UnityEngine::Touch m_touch;
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* m_pointerEventData;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* m_raycastResults;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector* s_instance;
			bool _ApplicationIsQuitting_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector* get_Instance();
		static Assembly_CSharp::Doozy::Engine::Touchy::TouchySettings* get_Settings();
		static bool get_ApplicationIsQuitting();
		static void set_ApplicationIsQuitting(bool value);
		static float get_SwipeLength();
		static float get_LongTapDuration();
		static bool get_DebugComponent();
		bool get_TouchInProgress();
		void set_TouchInProgress(bool value);
		Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo get_CurrentTouchInfo();
		void Awake();
		void Update();
		void OnApplicationQuit();
		void OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void SetDraggedObject(UnityEngine_CoreModule::UnityEngine::GameObject* target);
		void Initialize();
		void DetectTouch();
		void UpdateCurrentTouchInfo(UnityEngine_InputLegacyModule::UnityEngine::Touch touch);
		void HandleSwipe(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo);
		void HandleTap(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo);
		void HandleLongTap(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo);
		static void Init();
		static UnityEngine_CoreModule::UnityEngine::Vector2 GetCardinalDirection(Assembly_CSharp::Doozy::Engine::Touchy::Swipe swipe);
		static Assembly_CSharp::Doozy::Engine::Touchy::Swipe GetSwipe(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe simpleSwipe, bool reverse);
		static Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe GetSimpleSwipe(Assembly_CSharp::Doozy::Engine::Touchy::Swipe swipe, bool reverse);
		static Assembly_CSharp::Doozy::Engine::Touchy::Swipe GetSwipeDirection(UnityEngine_CoreModule::UnityEngine::Vector2 direction);
		static Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe GetSimpleSwipeDirection(UnityEngine_CoreModule::UnityEngine::Vector2 direction);
		static Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector* AddToScene(bool selectGameObjectAfterCreation);
	};
}

