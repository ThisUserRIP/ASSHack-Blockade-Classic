#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct AsyncOperation; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_SceneManagement_LoadSceneParameters.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct LoadSceneParameters; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_SceneManagement_UnloadSceneOptions.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::SceneManagement
{
	struct SceneManagerAPIInternal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene GetSceneByBuildIndex(int32_t buildIndex);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, bool immediately, UnityEngine_CoreModule::UnityEngine::SceneManagement::UnloadSceneOptions options, bool& outSuccess);
		static void GetSceneByBuildIndex_Injected(int32_t buildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene& ret);
		static UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal_Injected(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters& parameters, bool mustCompleteNextFrame);
	};
}

