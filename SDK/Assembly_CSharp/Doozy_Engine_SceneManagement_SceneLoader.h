#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "Doozy_Engine_SceneManagement_GetSceneBy.h"
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct AsyncOperation; };
namespace Assembly_CSharp::Doozy::Engine::SceneManagement { struct SceneLoadBehavior; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct ProgressEvent; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Assembly_CSharp::Doozy::Engine::SceneManagement
{
	struct SceneLoader : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::AsyncOperation* _CurrentAsyncOperation_k__BackingField;
		bool AllowSceneActivation;
		bool DebugMode;
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoadBehavior* LoadBehavior;
		Assembly_CSharp::Doozy::Engine::SceneManagement::GetSceneBy GetSceneBy;
		UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode LoadSceneMode;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnProgressChanged;
		Assembly_CSharp::Doozy::Engine::Progress::ProgressEvent* OnInverseProgressChanged;
		Assembly_CSharp::Doozy::Engine::Progress::Progressor* Progressor;
		float SceneActivationDelay;
		int32_t SceneBuildIndex;
		mscorlib::System::String* SceneName;
		bool SelfDestructAfterSceneLoaded;
		bool m_loadInProgress;
		bool m_sceneLoadedAndReady;
		bool m_activatingScene;
		float m_sceneLoadedAndReadyTime;
		float m_progress;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::SceneManagement::GetSceneBy DEFAULT_GET_SCENE_BY;
			UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode DEFAULT_LOAD_SCENE_MODE;
			bool DEFAULT_AUTO_SCENE_ACTIVATION;
			bool DEFAULT_SELF_DESTRUCT_AFTER_SCENE_LOADED;
			float DEFAULT_SCENE_ACTIVATION_DELAY;
			int32_t DEFAULT_BUILD_INDEX;
			mscorlib::System::String* DEFAULT_SCENE_NAME;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader>* Database;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::AsyncOperation* get_CurrentAsyncOperation();
		void set_CurrentAsyncOperation(UnityEngine_CoreModule::UnityEngine::AsyncOperation* value);
		float get_InverseProgress();
		float get_Progress();
		void set_Progress(float value);
		bool get_DebugComponent();
		void Reset();
		void Awake();
		void OnEnable();
		void OnDestroy();
		void Update();
		void ActivateLoadedScene();
		void LoadSceneAsync();
		Assembly_CSharp::Doozy::Engine::Progress::Progressor* LoadSceneAsync(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		Assembly_CSharp::Doozy::Engine::Progress::Progressor* LoadSceneAsync(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		void LoadSceneAsyncAdditive(int32_t sceneBuildIndex);
		void LoadSceneAsyncAdditive(mscorlib::System::String* sceneName);
		void LoadSceneAsyncSingle(int32_t sceneBuildIndex);
		void LoadSceneAsyncSingle(mscorlib::System::String* sceneName);
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* SetAllowSceneActivation(bool allowSceneActivation);
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* SetLoadSceneBy(Assembly_CSharp::Doozy::Engine::SceneManagement::GetSceneBy getSceneBy);
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* SetLoadSceneMode(UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode);
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* SetProgressor(Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor);
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* SetSceneActivationDelay(float sceneActivationDelay);
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* SetSceneBuildIndex(int32_t sceneBuildIndex);
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* SetSceneName(mscorlib::System::String* sceneName);
		Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* SetSelfDestructAfterSceneLoaded(bool selfDestruct);
		void ResetProgress();
		void StartSceneLoad();
		mscorlib::System::Collections::IEnumerator* AsynchronousLoad(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		mscorlib::System::Collections::IEnumerator* AsynchronousLoad(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		mscorlib::System::Collections::IEnumerator* SelfDestruct();
		static void ActivateLoadedScenes();
		static Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* GetLoader(UnityEngine_CoreModule::UnityEngine::Transform* parent);
		static Assembly_CSharp::Doozy::Engine::SceneManagement::SceneLoader* AddToScene(bool selectGameObjectAfterCreation);
		static void RemoveNullReferencesFromDatabase();
		void _ctor();
		static void _cctor();
	};
}

