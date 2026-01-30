#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct BlockSet; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"

namespace Assembly_CSharp
{
	struct GameSetup : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BlockSet* blockSet;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void OnLevelLoad(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode mode);
		void OnEnable();
		void OnDisable();
		void _ctor();
	};
}

