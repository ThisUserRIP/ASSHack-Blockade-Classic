#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine { struct GameEventMessage; };

namespace Assembly_CSharp::Doozy::Engine
{
	struct GameEventManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::GameEventManager* s_instance;
			bool _ApplicationIsQuitting_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static Assembly_CSharp::Doozy::Engine::GameEventManager* get_Instance();
		static bool get_ApplicationIsQuitting();
		static void set_ApplicationIsQuitting(bool value);
		bool get_DebugComponent();
		void Awake();
		void OnApplicationQuit();
		static Assembly_CSharp::Doozy::Engine::GameEventManager* AddToScene(bool selectGameObjectAfterCreation);
		static void ProcessGameEvent(Assembly_CSharp::Doozy::Engine::GameEventMessage* message, bool debug);
	};
}

