#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::Events { struct StringEvent; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine { struct GameEventMessage; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Assembly_CSharp::Doozy::Engine
{
	struct GameEventListener : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool DebugMode;
		Assembly_CSharp::Doozy::Engine::Events::StringEvent* Event;
		mscorlib::System::String* GameEvent;
		bool ListenForAllGameEvents;
		bool get_DebugComponent();
		void Reset();
		void Awake();
		void OnEnable();
		void OnDisable();
		void RegisterListener();
		void UnregisterListener();
		void OnMessage(Assembly_CSharp::Doozy::Engine::GameEventMessage* message);
		void InvokeEvent(Assembly_CSharp::Doozy::Engine::GameEventMessage* message);
		static Assembly_CSharp::Doozy::Engine::GameEventListener* AddToScene(bool selectGameObjectAfterCreation);
		static Assembly_CSharp::Doozy::Engine::GameEventListener* AddToScene(UnityEngine_CoreModule::UnityEngine::GameObject* parent, bool selectGameObjectAfterCreation);
		void _ctor();
	};
}

