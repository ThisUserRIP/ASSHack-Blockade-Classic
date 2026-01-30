#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_Nody_Models_ConnectionMode.h"
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Connection; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "Doozy_Engine_Nody_Models_SocketDirection.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Nody::Models { struct Node; };

namespace Assembly_CSharp::Doozy::Engine::Nody::Models
{
	struct Socket : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::Nody::Models::ConnectionMode m_connectionMode;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Connection>* m_connections;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* m_connectionPoints;
		Assembly_CSharp::Doozy::Engine::Nody::Models::SocketDirection m_direction;
		mscorlib::System::Type* m_valueType;
		bool m_canBeDeleted;
		bool m_canBeReordered;
		float m_curveModifier;
		float m_height;
		float m_width;
		float m_x;
		float m_y;
		mscorlib::System::String* m_id;
		mscorlib::System::String* m_nodeId;
		mscorlib::System::String* m_socketName;
		mscorlib::System::String* m_value;
		mscorlib::System::String* m_valueTypeQualifiedName;
		UnityEngine_CoreModule::UnityEngine::Rect m_hoverRect;
		struct StaticFields
		{
			mscorlib::System::String* DEFAULT_INPUT_SOCKET_NAME_PREFIX;
			mscorlib::System::String* DEFAULT_OUTPUT_SOCKET_NAME_PREFIX;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_AcceptsMultipleConnections();
		bool get_CanBeDeleted();
		bool get_CanBeReordered();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* get_ConnectionPoints();
		void set_ConnectionPoints(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Connection>* get_Connections();
		void set_Connections(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Nody::Models::Connection>* value);
		float get_CurveModifier();
		void set_CurveModifier(float value);
		Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* get_FirstConnection();
		UnityEngine_CoreModule::UnityEngine::Rect get_HoverRect();
		void set_HoverRect(UnityEngine_CoreModule::UnityEngine::Rect value);
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		bool get_IsConnected();
		bool get_IsInput();
		bool get_IsOutput();
		bool get_OverrideConnection();
		mscorlib::System::String* get_NodeId();
		void set_NodeId(mscorlib::System::String* value);
		mscorlib::System::String* get_SocketName();
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		mscorlib::System::Type* get_ValueType();
		void set_ValueType(mscorlib::System::Type* value);
		mscorlib::System::String* get_ValueTypeQualifiedName();
		void set_ValueTypeQualifiedName(mscorlib::System::String* value);
		void _ctor(Assembly_CSharp::Doozy::Engine::Nody::Models::Node* node, mscorlib::System::String* socketName, Assembly_CSharp::Doozy::Engine::Nody::Models::SocketDirection direction, Assembly_CSharp::Doozy::Engine::Nody::Models::ConnectionMode connectionMode, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* connectionPoints, mscorlib::System::Type* valueType, bool canBeDeleted, bool canBeReordered);
		void _ctor(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* other);
		bool CanConnect(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* other, bool ignoreValueType);
		bool ContainsConnection(mscorlib::System::String* connectionId);
		bool ContainsConnection(Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* connection);
		void Disconnect();
		void DisconnectFromNode(mscorlib::System::String* nodeId);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetClosestConnectionPointToPosition(UnityEngine_CoreModule::UnityEngine::Vector2 position);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetClosestConnectionPointToSocket(Assembly_CSharp::Doozy::Engine::Nody::Models::Socket* other);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetConnectedNodesIds();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetConnectedSocketIds();
		Assembly_CSharp::Doozy::Engine::Nody::Models::Connection* GetConnection(mscorlib::System::String* connectionId);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetConnectionIds();
		Assembly_CSharp::Doozy::Engine::Nody::Models::ConnectionMode GetConnectionMode();
		Assembly_CSharp::Doozy::Engine::Nody::Models::SocketDirection GetDirection();
		mscorlib::System::String* GenerateNewId();
		float GetHeight();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetPosition();
		UnityEngine_CoreModule::UnityEngine::Rect GetRect();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetSize();
		float GetWidth();
		float GetX();
		float GetY();
		bool IsConnectedToNode(mscorlib::System::String* nodeId);
		bool IsConnectedToSocket(mscorlib::System::String* socketId);
		void RemoveConnection(mscorlib::System::String* connectionId);
		void SetHeight(float value);
		void SetName(mscorlib::System::String* value);
		void SetPosition(UnityEngine_CoreModule::UnityEngine::Vector2 position);
		void SetPosition(float x, float y);
		void SetRect(UnityEngine_CoreModule::UnityEngine::Rect rect);
		void SetRect(UnityEngine_CoreModule::UnityEngine::Vector2 position, UnityEngine_CoreModule::UnityEngine::Vector2 size);
		void SetRect(float x, float y, float width, float height);
		void SetSize(UnityEngine_CoreModule::UnityEngine::Vector2 size);
		void SetSize(float width, float height);
		void SetWidth(float value);
		void SetX(float value);
		void SetY(float value);
		void UpdateHoverRect();
	};
}

