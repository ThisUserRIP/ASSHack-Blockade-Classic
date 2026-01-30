#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
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

namespace UnityEngine_CoreModule::UnityEngine::SceneManagement
{
	struct SceneManagerAPI : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPI* s_DefaultAPI;
			UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPI* _overrideAPI_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPI* get_ActiveAPI();
		static UnityEngine_CoreModule::UnityEngine::SceneManagement::SceneManagerAPI* get_overrideAPI();
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene GetSceneByBuildIndex(int32_t buildIndex);
		UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadSceneAsyncByNameOrIndex(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame);
		UnityEngine_CoreModule::UnityEngine::AsyncOperation* UnloadSceneAsyncByNameOrIndex(mscorlib::System::String* sceneName, int32_t sceneBuildIndex, bool immediately, UnityEngine_CoreModule::UnityEngine::SceneManagement::UnloadSceneOptions options, bool& outSuccess);
		UnityEngine_CoreModule::UnityEngine::AsyncOperation* LoadFirstScene(bool mustLoadAsync);
		static void _cctor();
	};
}

