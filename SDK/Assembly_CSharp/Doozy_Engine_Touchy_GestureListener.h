#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "Doozy_Engine_Touchy_GestureType.h"
#include "Doozy_Engine_Touchy_Swipe.h"
namespace Assembly_CSharp::Doozy::Engine::Touchy { struct TouchInfoEvent; };
#include "Doozy_Engine_Touchy_TouchInfo.h"
namespace Assembly_CSharp::Doozy::Engine::Touchy { struct TouchInfo; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::Touchy { struct TouchySettings; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Doozy::Engine::Touchy
{
	struct GestureListener : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool DebugMode;
		bool GlobalListener;
		bool OverrideTarget;
		UnityEngine_CoreModule::UnityEngine::GameObject* TargetGameObject;
		Assembly_CSharp::Doozy::Engine::Touchy::GestureType GestureType;
		Assembly_CSharp::Doozy::Engine::Touchy::Swipe SwipeDirection;
		Assembly_CSharp::Doozy::Engine::Touchy::TouchInfoEvent* OnGestureEvent;
		mscorlib::System::Action_1<Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo>* OnGestureAction;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GameEvents;
		static Assembly_CSharp::Doozy::Engine::Touchy::TouchySettings* get_Settings();
		bool get_DebugComponent();
		void Reset();
		void Awake();
		void OnEnable();
		void OnDisable();
		void RegisterToTouchDetector();
		void UnregisterFromTouchDetector();
		void HandleTap(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo);
		void HandleLongTap(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo);
		void HandleSwipe(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo);
		bool HasValidTarget(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo);
		void TriggerListener(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo);
		void SendGameEvents();
		mscorlib::System::Collections::IEnumerator* SendGameEventsInTheNextFrame();
		static Assembly_CSharp::Doozy::Engine::Touchy::GestureListener* AddToScene(bool selectGameObjectAfterCreation);
		static Assembly_CSharp::Doozy::Engine::Touchy::GestureListener* AddToScene(UnityEngine_CoreModule::UnityEngine::GameObject* parent, bool selectGameObjectAfterCreation);
		void _ctor();
	};
}

