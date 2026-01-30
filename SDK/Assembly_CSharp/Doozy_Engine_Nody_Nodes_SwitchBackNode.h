#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Nody_Models_Node.h"
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Graph; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Nodes { struct SwitchBackNode_SourceInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Socket; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };

namespace Assembly_CSharp::Doozy::Engine::Nody::Nodes
{
	struct SwitchBackNode : Assembly_CSharp::Doozy::Engine::Nody::Models::Node
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* m_targetGraph;
		mscorlib::System::String* m_returnSourceOutputSocketId;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Nodes::SwitchBackNode_SourceInfo>* Sources;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* get_TargetInputSocket();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* get_TargetOutputSocket();
		mscorlib::System::String* get_ReturnSourceOutputSocketId();
		void OnCreate();
		float GetDefaultNodeWidth();
		void AddDefaultSockets();
		void AddSourceSocketPair();
		void OnEnable();
		void OnDisable();
		Assembly_CSharp::Doozy::Engine::Nody::Nodes::SwitchBackNode_SourceInfo* GetSource(Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void CopyNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* original);
		void OnEnter(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* previousActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void CheckForErrors();
		void RegenerateSourcesSocketIds();
		void _ctor();
	};
}

