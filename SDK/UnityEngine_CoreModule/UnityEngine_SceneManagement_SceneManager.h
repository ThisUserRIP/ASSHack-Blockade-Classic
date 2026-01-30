#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "UnityEngine_SceneManagement_LoadSceneMode.h"
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0, typename T1> struct UnityAction_2; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct AsyncOperation; };
#include "UnityEngine_SceneManagement_UnloadSceneOptions.h"
namespace mscorlib::System { struct String; };
#include "UnityEngine_SceneManagement_LoadSceneParameters.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct LoadSceneParameters; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::SceneManagement
{
	struct SceneManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool s_AllowLoadScene;
			UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode>* sceneLoaded;
			UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>* sceneUnloaded;
			UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>* activeSceneChanged;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t get_sceneCount();
		static UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene GetActiveScene();
		static UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene GetSceneByBuildIndex(int32_t buildIndex);
		static UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene GetSceneAt(int32_t index);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::UnloadSceneOptions options);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, bool immediately, UnityEngine_CoreModule::UnityEngine::SceneManagement::UnloadSceneOptions options, bool& outSuccess);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadFirstScene_Internal(bool async);
		static void add_sceneLoaded(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode>* value);
		static void remove_sceneLoaded(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode>* value);
		static void add_sceneUnloaded(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>* value);
		static void remove_sceneUnloaded(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>* value);
		static void add_activeSceneChanged(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>* value);
		static void remove_activeSceneChanged(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_2<UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene>* value);
		static void LoadScene(mscorlib::System::String* sceneName);
		static UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene LoadScene(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters);
		static void LoadScene(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		static void LoadScene(int32_t sceneBuildIndex);
		static UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene LoadScene(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadSceneAsync(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadSceneAsync(mscorlib::System::String* sceneName);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadSceneAsync(mscorlib::System::String* sceneName, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneAsync(int32_t sceneBuildIndex);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneAsync(mscorlib::System::String* sceneName);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneAsync(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene);
		static void Internal_SceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		static void Internal_SceneUnloaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene);
		static void Internal_ActiveSceneChanged(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene previousActiveScene, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene newActiveScene);
		static void _cctor();
		static void GetActiveScene_Injected(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene& ret);
		static void GetSceneAt_Injected(int32_t index, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene& ret);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal_Injected(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene& scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::UnloadSceneOptions options);
	};
}

