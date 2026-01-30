#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkClient; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchInfo; };
namespace mscorlib::System { struct String; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct PeerInfoMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct PeerListMessage; };
#include "UnityEngine_Networking_NetworkMigrationManager_ConnectionPendingPlayers.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMigrationManager_ConnectionPendingPlayers; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkIdentity; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };
#include "UnityEngine_Networking_NetworkMigrationManager_SceneChangeOption.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkMigrationManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_HostMigration;
		bool m_ShowGUI;
		int32_t m_OffsetX;
		int32_t m_OffsetY;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* m_Client;
		bool m_WaitingToBecomeNewHost;
		bool m_WaitingReconnectToNewHost;
		bool m_DisconnectedFromHost;
		bool m_HostWasShutdown;
		UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* m_MatchInfo;
		int32_t m_OldServerConnectionId;
		mscorlib::System::String* m_NewHostAddress;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage* m_NewHostInfo;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerListMessage* m_PeerListMessage;
		IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>* m_Peers;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager_ConnectionPendingPlayers>* m_PendingPlayers;
		void AddPendingPlayer(UnityEngine_CoreModule::UnityEngine::GameObject* obj, int32_t connectionId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, int16_t playerControllerId);
		UnityEngine_CoreModule::UnityEngine::GameObject* FindPendingPlayer(int32_t connectionId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, int16_t playerControllerId);
		void RemovePendingPlayer(int32_t connectionId);
		bool get_hostMigration();
		void set_hostMigration(bool value);
		bool get_showGUI();
		void set_showGUI(bool value);
		int32_t get_offsetX();
		void set_offsetX(int32_t value);
		int32_t get_offsetY();
		void set_offsetY(int32_t value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* get_client();
		bool get_waitingToBecomeNewHost();
		void set_waitingToBecomeNewHost(bool value);
		bool get_waitingReconnectToNewHost();
		void set_waitingReconnectToNewHost(bool value);
		bool get_disconnectedFromHost();
		bool get_hostWasShutdown();
		UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* get_matchInfo();
		int32_t get_oldServerConnectionId();
		mscorlib::System::String* get_newHostAddress();
		void set_newHostAddress(mscorlib::System::String* value);
		IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>* get_peers();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager_ConnectionPendingPlayers>* get_pendingPlayers();
		void Start();
		void Reset(int32_t reconnectId);
		void AssignAuthorityCallback(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv, bool authorityState);
		void Initialize(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* newClient, UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* newMatchInfo);
		void DisablePlayerObjects();
		void SendPeerInfo();
		void OnPeerClientAuthority(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnPeerInfo(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnServerReconnectPlayerMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		bool ReconnectObjectForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newConnection, UnityEngine_CoreModule::UnityEngine::GameObject* oldObject, int32_t oldConnectionId);
		bool ReconnectPlayerForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newConnection, UnityEngine_CoreModule::UnityEngine::GameObject* oldPlayer, int32_t oldConnectionId, int16_t playerControllerId);
		bool LostHostOnClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void LostHostOnHost();
		bool BecomeNewHost(int32_t port);
		void OnClientDisconnectedFromHost(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager_SceneChangeOption& sceneChange);
		void OnServerHostShutdown();
		void OnServerReconnectPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newConnection, UnityEngine_CoreModule::UnityEngine::GameObject* oldPlayer, int32_t oldConnectionId, int16_t playerControllerId);
		void OnServerReconnectPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newConnection, UnityEngine_CoreModule::UnityEngine::GameObject* oldPlayer, int32_t oldConnectionId, int16_t playerControllerId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* extraMessageReader);
		void OnServerReconnectObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* newConnection, UnityEngine_CoreModule::UnityEngine::GameObject* oldObject, int32_t oldConnectionId);
		void OnPeersUpdated(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerListMessage* peers);
		void OnAuthorityUpdated(UnityEngine_CoreModule::UnityEngine::GameObject* go, int32_t connectionId, bool authorityState);
		bool FindNewHost(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage& newHostInfo, bool& youAreNewHost);
		void OnGUIHost();
		void OnGUIClient();
		void OnGUI();
		void _ctor();
	};
}

