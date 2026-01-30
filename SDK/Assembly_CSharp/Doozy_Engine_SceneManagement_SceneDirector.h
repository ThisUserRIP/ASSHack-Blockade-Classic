#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::SceneManagement { struct ActiveSceneChangedEvent; };
namespace Assembly_CSharp::Doozy::Engine::SceneManagement { struct SceneLoadedEvent; };
namespace Assembly_CSharp::Doozy::Engine::SceneManagement { struct SceneUnloadedEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"
namespace Assembly_CSharp::Doozy::Engine::SceneManagement { struct SceneLoader; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct AsyncOperation; };

namespace Assembly_CSharp::Doozy::Engine::SceneManagement
{
	struct SceneDirector : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool DebugMode;
		Assembly_CSharp::Doozy::Engine::SceneManagement::ActiveSceneChangedEvent* OnActiveSceneChanged;
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoadedEvent* OnSceneLoaded;
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneUnloadedEvent* OnSceneUnloaded;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector* s_instance;
			bool _ApplicationIsQuitting_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector* get_Instance();
		static bool get_ApplicationIsQuitting();
		static void set_ApplicationIsQuitting(bool value);
		bool get_DebugComponent();
		void Awake();
		void OnEnable();
		void OnDisable();
		void OnApplicationQuit();
		void ActiveSceneChanged(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene current, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene next);
		void SceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		void SceneUnloaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene unloadedScene);
		static Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* LoadSceneAsync(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor);
		static Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* LoadSceneAsync(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode, Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneAsync(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneAsync(int32_t sceneBuildIndex);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneAsync(mscorlib::System::String* sceneName);
		static Assembly_CSharp::Doozy::Engine::SceneManagement::SceneDirector* AddToScene(bool selectGameObjectAfterCreation);
	};
}

