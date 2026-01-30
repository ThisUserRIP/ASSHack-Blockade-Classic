#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Graph; };
namespace Assembly_CSharp::Doozy::Engine::Utils { struct UILanguagePack; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Doozy::Engine::Nody
{
	struct GraphController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _Initialized_k__BackingField;
		bool DebugMode;
		mscorlib::System::String* ControllerName;
		bool DontDestroyControllerOnLoad;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* m_graphModel;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* m_graph;
		struct StaticFields
		{
			mscorlib::System::String* DEFAULT_CONTROLLER_NAME;
			bool DEFAULT_DONT_DESTROY_CONTROLLER_ON_LOAD;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::GraphController>* Database;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::Doozy::Engine::Utils::UILanguagePack* get_UILabels();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* get_Graph();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* get_GraphModel();
		bool get_Initialized();
		void set_Initialized(bool value);
		bool get_DebugComponent();
		void _ctor();
		void Reset();
		void Awake();
		void OnEnable();
		void OnDisable();
		void OnDestroy();
		void Update();
		void FixedUpdate();
		void LateUpdate();
		void GoToNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* node);
		void GoToNodeByName(mscorlib::System::String* nodeName);
		void GoToNodeById(mscorlib::System::String* nodeId);
		void InitializeGraph(bool reset);
		void ResetController();
		mscorlib::System::Collections::IEnumerator* ActivateStartOrEnterNodeEnumerator();
		static Assembly_CSharp::Doozy::Engine::Nody::GraphController* AddToScene(bool selectGameObjectAfterCreation);
		static Assembly_CSharp::Doozy::Engine::Nody::GraphController* Get(mscorlib::System::String* controllerName);
		static void _cctor();
	};
}

