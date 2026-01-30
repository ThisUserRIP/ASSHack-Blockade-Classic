#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Nody_Models_Node.h"
#include "Doozy_Engine_UI_Nodes_PortalNode_ListenerType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Graph; };
#include "Doozy_Engine_UI_UIViewBehaviorType.h"
#include "Doozy_Engine_UI_UIButtonBehaviorType.h"
#include "Doozy_Engine_UI_UIDrawerBehaviorType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine { struct GameEventMessage; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIViewMessage; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButtonMessage; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawerMessage; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };

namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	struct PortalNode : Assembly_CSharp::Doozy::Engine::Nody::Models::Node
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_gameEvent;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* m_portalGraph;
		Assembly_CSharp::Doozy::Engine::UI::Nodes::PortalNode_ListenerType ListenFor;
		bool AnyValue;
		Assembly_CSharp::Doozy::Engine::UI::UIViewBehaviorType UIViewTriggerAction;
		mscorlib::System::String* ViewCategory;
		mscorlib::System::String* ViewName;
		Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType UIButtonTriggerAction;
		mscorlib::System::String* ButtonCategory;
		mscorlib::System::String* ButtonName;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerBehaviorType UIDrawerTriggerAction;
		mscorlib::System::String* DrawerName;
		bool CustomDrawerName;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::Nodes::PortalNode_ListenerType DEFAULT_LISTENER_TYPE;
			bool DEFAULT_ANY_VALUE;
			mscorlib::System::String* DEFAULT_GAME_EVENT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_GameEventToListenFor();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* get_PortalGraph();
		void set_PortalGraph(Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* value);
		mscorlib::System::String* get_WaitForInfoTitle();
		mscorlib::System::String* get_WaitForInfoDescription();
		void OnCreate();
		void AddDefaultSockets();
		void AddListeners();
		void RemoveListeners();
		void Activate(Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* portalGraph);
		void Deactivate();
		void OnGameEventMessage(Assembly_CSharp::Doozy::Engine::GameEventMessage* message);
		void OnUIViewMessage(Assembly_CSharp::Doozy::Engine::UI::UIViewMessage* message);
		void OnUIButtonMessage(Assembly_CSharp::Doozy::Engine::UI::UIButtonMessage* message);
		void OnUIDrawerMessage(Assembly_CSharp::Doozy::Engine::UI::UIDrawerMessage* message);
		void CopyNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* original);
		void OnEnter(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* previousActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void CheckForErrors();
		void _ctor();
	};
}

