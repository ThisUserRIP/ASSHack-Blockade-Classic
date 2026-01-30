#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Nody_Models_Node.h"
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyData; };
#include "Doozy_Engine_UI_Nodes_SoundNode_SoundActions.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };

namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	struct SoundNode : Assembly_CSharp::Doozy::Engine::Nody::Models::Node
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* SoundData;
		Assembly_CSharp::Doozy::Engine::UI::Nodes::SoundNode_SoundActions SoundAction;
		bool get_HasSound();
		void OnCreate();
		void AddDefaultSockets();
		void CopyNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* original);
		void OnEnter(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* previousActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void CheckForErrors();
		void _ctor();
	};
}

