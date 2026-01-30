#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Nody_Models_Node.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Internal { struct UIViewCategoryName; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Socket; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButtonMessage; };
namespace Assembly_CSharp::Doozy::Engine { struct GameEventMessage; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Graph; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };
#include "Doozy_Engine_UI_Nodes_UINode_NodeState.h"
#include "Doozy_Engine_UI_Nodes_UINode_ViewAction.h"

namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	struct UINode : Assembly_CSharp::Doozy::Engine::Nody::Models::Node
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* m_onEnterShowViews;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* m_onEnterHideViews;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* m_onExitShowViews;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* m_onExitHideViews;
		bool m_timerIsActive;
		double m_timerStart;
		float m_timeDelay;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* m_activeSocketAfterTimeDelay;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* get_OnEnterShowViews();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* get_OnEnterHideViews();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* get_OnExitShowViews();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* get_OnExitHideViews();
		float get_TimerProgress();
		void CopyNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* original);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* UIViewCategoryNameListCopy(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* original);
		void OnCreate();
		void AddDefaultSockets();
		void SortShowViewsList();
		void SortHideViewsList();
		static mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* SortViewsList(mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* list);
		void AddListeners();
		void RemoveListeners();
		void OnButtonMessage(Assembly_CSharp::Doozy::Engine::UI::UIButtonMessage* message);
		void OnGameEventMessage(Assembly_CSharp::Doozy::Engine::GameEventMessage* message);
		void LookForTimeDelay();
		void ActivateTimer(float timeDelay, Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket);
		void ActivateOutputSocketInputNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket);
		void Activate(Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* portalGraph);
		void Deactivate();
		void OnEnter(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* previousActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void OnUpdate();
		void OnExit(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* nextActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void ShowViews(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* views);
		void HideViews(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName>* views);
		void AddView(Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName* view, Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode_NodeState nodeState, Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode_ViewAction viewAction, bool saveAssets);
		void _ctor();
	};
}

