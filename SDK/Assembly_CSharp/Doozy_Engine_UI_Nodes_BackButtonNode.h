#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Nody_Models_Node.h"
#include "Doozy_Engine_UI_Nodes_BackButtonNode_BackButtonState.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };

namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	struct BackButtonNode : Assembly_CSharp::Doozy::Engine::Nody::Models::Node
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Nodes::BackButtonNode_BackButtonState BackButtonAction;
		void OnCreate();
		void AddDefaultSockets();
		void CopyNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* original);
		void OnEnter(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* previousActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void ExecuteActions();
		void _ctor();
	};
}

