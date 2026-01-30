#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Nody_Models_Node.h"
#include "Doozy_Engine_UI_Nodes_WaitNode_WaitType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_SceneManagement_GetSceneBy.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Doozy_Engine_UI_UIViewBehaviorType.h"
#include "Doozy_Engine_UI_UIButtonBehaviorType.h"
#include "Doozy_Engine_UI_UIDrawerBehaviorType.h"
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };
namespace Assembly_CSharp::Doozy::Engine { struct GameEventMessage; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIViewMessage; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButtonMessage; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawerMessage; };

namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	struct WaitNode : Assembly_CSharp::Doozy::Engine::Nody::Models::Node
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::SceneManagement::GetSceneBy GetSceneBy;
		Assembly_CSharp::Doozy::Engine::UI::Nodes::WaitNode_WaitType WaitFor;
		bool AnyValue;
		bool IgnoreUnityTimescale;
		bool RandomDuration;
		float Duration;
		float DurationMax;
		float DurationMin;
		int32_t SceneBuildIndex;
		mscorlib::System::String* GameEvent;
		mscorlib::System::String* SceneName;
		Assembly_CSharp::Doozy::Engine::UI::UIViewBehaviorType UIViewTriggerAction;
		mscorlib::System::String* ViewCategory;
		mscorlib::System::String* ViewName;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType UIButtonTriggerAction;
		mscorlib::System::String* ButtonCategory;
		mscorlib::System::String* ButtonName;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType UIDrawerTriggerAction;
		mscorlib::System::String* DrawerName;
		bool CustomDrawerName;
		float CurrentDuration;
		bool m_timerIsActive;
		double m_timerStart;
		float m_timeDelay;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::Nodes::WaitNode_WaitType DEFAULT_WAIT_TYPE;
			bool DEFAULT_ANY_VALUE;
			bool DEFAULT_IGNORE_UNITY_TIMESCALE;
			bool DEFAULT_RANDOM_DURATION;
			float DEFAULT_DURATION;
			float DEFAULT_DURATION_MAX;
			float DEFAULT_DURATION_MIN;
			mscorlib::System::String* DEFAULT_GAME_EVENT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		float get_TimerProgress();
		mscorlib::System::String* get_WaitForInfoTitle();
		mscorlib::System::String* get_WaitForInfoDescription();
		void OnCreate();
		void AddDefaultSockets();
		void CopyNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* original);
		void OnEnable();
		void OnEnter(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* previousActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void OnUpdate();
		void OnExit(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* nextActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void UpdateCurrentDuration();
		void StartWait();
		void EndWait();
		void ActivateTimer();
		void StopTimer();
		void OnGameEventMessage(Assembly_CSharp::Doozy::Engine::GameEventMessage* message);
		void SceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		void SceneUnloaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene unloadedScene);
		void ActiveSceneChanged(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene current, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene next);
		bool IsTargetScene(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene);
		void OnUIViewMessage(Assembly_CSharp::Doozy::Engine::UI::UIViewMessage* message);
		void OnUIButtonMessage(Assembly_CSharp::Doozy::Engine::UI::UIButtonMessage* message);
		void OnUIDrawerMessage(Assembly_CSharp::Doozy::Engine::UI::UIDrawerMessage* message);
		void ContinueToNextNode();
		void CheckForErrors();
		void _ctor();
	};
}

