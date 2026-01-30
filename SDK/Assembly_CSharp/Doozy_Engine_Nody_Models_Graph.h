#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Nodes { struct SubGraphNode; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Socket; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };

namespace Assembly_CSharp::Doozy::Engine::Nody::Models
{
	struct Graph : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* _ActiveSubGraph_k__BackingField;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* _ActiveNode_k__BackingField;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* _PreviousActiveNode_k__BackingField;
		bool DebugMode;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* ParentGraph;
		Assembly_CSharp::Doozy::Engine::Nody::Nodes::SubGraphNode* ParentSubGraphNode;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Node>* m_activatedNodesHistory;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Node>* m_globalNodes;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* m_enterNode;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* m_exitNode;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* m_startNode;
		bool m_isDirty;
		double m_infiniteLoopTimerStart;
		float m_infiniteLoopTimeBreak;
		bool m_enabled;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Node>* m_nodes;
		bool m_isSubGraph;
		int32_t m_version;
		mscorlib::System::String* m_description;
		mscorlib::System::String* m_id;
		mscorlib::System::String* m_lastModified;
		struct StaticFields
		{
			int32_t FILE_VERSION;
			mscorlib::System::String* NODE_NOT_FOUND;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::DateTime get_LastModified();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* get_ActiveSubGraph();
		void set_ActiveSubGraph(Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Node>* get_GlobalNodes();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Node>* get_Nodes();
		void set_Nodes(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Node>* value);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* get_ActiveNode();
		void set_ActiveNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* value);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* get_PreviousActiveNode();
		void set_PreviousActiveNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* value);
		bool get_HasGlobalNodes();
		bool get_IsDirty();
		void set_IsDirty(bool value);
		bool get_IsSubGraph();
		void set_IsSubGraph(bool value);
		mscorlib::System::String* get_Description();
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		int32_t get_Version();
		bool get_Enabled();
		void set_Enabled(bool value);
		void ActivateGlobalNodes();
		void DeactivateGlobalNodes();
		void FixedUpdate();
		void LateUpdate();
		void Update();
		void ActivateStartOrEnterNode();
		bool ContainsNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* node);
		bool ContainsNodeById(mscorlib::System::String* nodeId);
		bool ContainsNodeByName(mscorlib::System::String* nodeName);
		bool ContainsSocket(mscorlib::System::String* socketId);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* GetEnterNode();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* GetExitNode();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* GetNodeById(mscorlib::System::String* nodeId);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* GetNodeByName(mscorlib::System::String* nodeName);
		mscorlib::System::String* GetNodeIdFromNodeName(mscorlib::System::String* nodeName);
		mscorlib::System::String* GetNodeNameFromNodeId(mscorlib::System::String* nodeId);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* GetStartNode();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Node* GetStartOrEnterNode();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* GetSocket(mscorlib::System::String* socketId);
		void SetActiveNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* nextActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void SetActiveNodeByConnection(Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void SetActiveNodeById(mscorlib::System::String* nodeId, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void SetActiveNodeByName(mscorlib::System::String* nodeName, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void SetLastModified(mscorlib::System::String* time);
		void SetVersion(int32_t version);
		bool InfiniteLoopDetected(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* nextActiveNode);
		void _ctor();
	};
}

