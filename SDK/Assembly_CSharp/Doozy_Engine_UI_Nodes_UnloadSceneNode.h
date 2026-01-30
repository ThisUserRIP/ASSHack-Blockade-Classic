#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Nody_Models_Node.h"
#include "Doozy_Engine_SceneManagement_GetSceneBy.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };

namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	struct UnloadSceneNode : Assembly_CSharp::Doozy::Engine::Nody::Models::Node
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::SceneManagement::GetSceneBy GetSceneBy;
		int32_t SceneBuildIndex;
		mscorlib::System::String* SceneName;
		bool WaitForSceneToUnload;
		void OnCreate();
		void AddDefaultSockets();
		void CopyNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* original);
		void OnEnter(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* previousActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void OnExit(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* nextActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void UnloadScene();
		void SceneUnloaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene unloadedScene);
		void CheckForErrors();
		void _ctor();
	};
}

