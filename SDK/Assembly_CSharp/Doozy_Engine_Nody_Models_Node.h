#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Socket; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "Doozy_Engine_Nody_Models_NodeType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Graph; };
namespace Assembly_CSharp::Doozy::Engine::Utils { struct UILanguagePack; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };
#include "Doozy_Engine_Nody_Models_ConnectionMode.h"
#include "Doozy_Engine_Nody_Models_SocketDirection.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };

namespace Assembly_CSharp::Doozy::Engine::Nody::Models
{
	struct Node : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Socket>* m_inputSockets;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Socket>* m_outputSockets;
		Assembly_CSharp::Doozy::Engine::Nody::Models::NodeType m_nodeType;
		bool m_allowDuplicateNodeName;
		bool m_allowEmptyNodeName;
		bool m_canBeDeleted;
		bool m_debugMode;
		bool m_useFixedUpdate;
		bool m_useLateUpdate;
		bool m_useUpdate;
		float m_height;
		float m_width;
		float m_x;
		float m_y;
		int32_t m_minimumInputSocketsCount;
		int32_t m_minimumOutputSocketsCount;
		mscorlib::System::String* m_graphId;
		mscorlib::System::String* m_id;
		mscorlib::System::String* m_name;
		mscorlib::System::String* m_notes;
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* m_activeGraph;
		bool m_activated;
		bool _Ping_k__BackingField;
		static Assembly_CSharp::Doozy::Engine::Utils::UILanguagePack* get_UILabels();
		bool get_AllowDuplicateNodeName();
		bool get_AllowEmptyNodeName();
		bool get_CanBeDeleted();
		void set_CanBeDeleted(bool value);
		bool get_DebugMode();
		void set_DebugMode(bool value);
		bool get_Ping();
		void set_Ping(bool value);
		bool get_UseFixedUpdate();
		void set_UseFixedUpdate(bool value);
		bool get_UseLateUpdate();
		void set_UseLateUpdate(bool value);
		bool get_UseUpdate();
		void set_UseUpdate(bool value);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* get_ActiveGraph();
		void set_ActiveGraph(Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* value);
		int32_t get_MinimumInputSocketsCount();
		void set_MinimumInputSocketsCount(int32_t value);
		int32_t get_MinimumOutputSocketsCount();
		void set_MinimumOutputSocketsCount(int32_t value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Socket>* get_InputSockets();
		void set_InputSockets(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Socket>* value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Socket>* get_OutputSockets();
		void set_OutputSockets(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Socket>* value);
		Assembly_CSharp::Doozy::Engine::Nody::Models::NodeType get_NodeType();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* get_FirstInputSocket();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* get_FirstOutputSocket();
		mscorlib::System::String* get_GraphId();
		void set_GraphId(mscorlib::System::String* value);
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		mscorlib::System::String* get_Name();
		void OnEnable();
		void Activate(Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* portalGraph);
		void AddDefaultSockets();
		void CheckForErrors();
		void CopyNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* original);
		void Deactivate();
		float GetDefaultNodeHeight();
		float GetDefaultNodeWidth();
		void InitNode(Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* graph, UnityEngine_CoreModule::UnityEngine::Vector2 pos, int32_t minimumInputSocketsCount, int32_t minimumOutputSocketsCount);
		void OnCreate();
		void OnEnter(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* previousActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void OnExit(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* nextActiveNode, Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void OnFixedUpdate();
		void OnLateUpdate();
		void OnUpdate();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* AddInputSocket(mscorlib::System::String* socketName, Assembly_CSharp::Doozy::Engine::Nody::Models::ConnectionMode connectionMode, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* connectionPoints, mscorlib::System::Type* valueType, bool canBeDeleted, bool canBeReordered);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* AddInputSocket(mscorlib::System::String* socketName, Assembly_CSharp::Doozy::Engine::Nody::Models::ConnectionMode connectionMode, mscorlib::System::Type* valueType, bool canBeDeleted, bool canBeReordered);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* AddInputSocket(Assembly_CSharp::Doozy::Engine::Nody::Models::ConnectionMode connectionMode, mscorlib::System::Type* valueType, bool canBeDeleted, bool canBeReordered);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* AddOutputSocket(mscorlib::System::String* socketName, Assembly_CSharp::Doozy::Engine::Nody::Models::ConnectionMode connectionMode, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* connectionPoints, mscorlib::System::Type* valueType, bool canBeDeleted, bool canBeReordered);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* AddOutputSocket(mscorlib::System::String* socketName, Assembly_CSharp::Doozy::Engine::Nody::Models::ConnectionMode connectionMode, mscorlib::System::Type* valueType, bool canBeDeleted, bool canBeReordered);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* AddOutputSocket(Assembly_CSharp::Doozy::Engine::Nody::Models::ConnectionMode connectionMode, mscorlib::System::Type* valueType, bool canBeDeleted, bool canBeReordered);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* AddSocket(mscorlib::System::String* socketName, Assembly_CSharp::Doozy::Engine::Nody::Models::SocketDirection direction, Assembly_CSharp::Doozy::Engine::Nody::Models::ConnectionMode connectionMode, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* connectionPoints, mscorlib::System::Type* valueType, bool canBeDeleted, bool canBeReordered);
		bool CanDeleteSocket(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* socket);
		bool ContainsConnection(mscorlib::System::String* connectionId);
		bool ContainsSocket(mscorlib::System::String* socketId);
		void Disconnect();
		void DisconnectFromNode(mscorlib::System::String* nodeId);
		mscorlib::System::String* GenerateNewId();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetCenterConnectionPointPosition();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* GetConnection(mscorlib::System::String* connectionId);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetConnectedInputNodesIds();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetConnectedInputSocketsIds();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetConnectedOutputNodesIds();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetConnectedOutputSocketsIds();
		UnityEngine_CoreModule::UnityEngine::Rect GetFooterRect();
		UnityEngine_CoreModule::UnityEngine::Rect GetHeaderRect();
		float GetHeight();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* GetInputSocketFromId(mscorlib::System::String* socketId);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* GetInputSocketFromName(mscorlib::System::String* socketName);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* GetLeftAndCenterAndRightConnectionPoints();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetLeftConnectionPointPosition();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* GetLeftAndRightConnectionPoints();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetPosition();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* GetOutputSocketFromId(mscorlib::System::String* socketId);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* GetOutputSocketFromName(mscorlib::System::String* socketName);
		UnityEngine_CoreModule::UnityEngine::Rect GetRect();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetRightConnectionPointPosition();
		float GetWidth();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetSize();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* GetSocketFromId(mscorlib::System::String* socketId);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* GetSocketFromName(mscorlib::System::String* socketName);
		float GetX();
		float GetY();
		bool IsConnected();
		bool IsConnectedToNode(mscorlib::System::String* nodeId);
		bool IsConnectedToSocket(mscorlib::System::String* socketId);
		void RemoveConnection(mscorlib::System::String* connectionId);
		void SetActiveGraph(Assembly_CSharp::Doozy::Engine::Nody::Models::Graph* graph);
		void SetAllowEmptyNodeName(bool value);
		void SetAllowDuplicateNodeName(bool value);
		void SetName(mscorlib::System::String* value);
		void SetNodeType(Assembly_CSharp::Doozy::Engine::Nody::Models::NodeType nodeType);
		void SetPosition(UnityEngine_CoreModule::UnityEngine::Vector2 position);
		void SetPosition(float x, float y);
		void SetRect(UnityEngine_CoreModule::UnityEngine::Rect rect);
		void SetRect(UnityEngine_CoreModule::UnityEngine::Vector2 position, UnityEngine_CoreModule::UnityEngine::Vector2 size);
		void SetRect(float x, float y, float width, float height);
		void SetSize(UnityEngine_CoreModule::UnityEngine::Vector2 size);
		void SetSize(float width, float height);
		void SetWidth(float value);
		void SetHeight(float value);
		void SetX(float value);
		void SetY(float value);
		void CheckThatNodeNameIsNotEmpty();
		void _ctor();
	};
}

