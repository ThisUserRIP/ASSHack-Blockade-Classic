#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Networking_LogFilter_FilterLevel.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "UnityEngine_Networking_PlayerSpawnMethod.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionConfig; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct GlobalConfig; };
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_QosType.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMigrationManager; };
namespace System::System::Net { struct EndPoint; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct INetworkTransport; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkClient; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchInfo; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct NetworkMatch; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchInfoSnapshot; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct AddPlayerMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct RemovePlayerMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct ErrorMessage; };
namespace UnityEngine_CoreModule::UnityEngine { struct AsyncOperation; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct PlayerController; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_NetworkPort;
		bool m_ServerBindToIP;
		mscorlib::System::String* m_ServerBindAddress;
		mscorlib::System::String* m_NetworkAddress;
		bool m_DontDestroyOnLoad;
		bool m_RunInBackground;
		bool m_ScriptCRCCheck;
		float m_MaxDelay;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LogFilter_FilterLevel m_LogLevel;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_PlayerPrefab;
		bool m_AutoCreatePlayer;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerSpawnMethod m_PlayerSpawnMethod;
		mscorlib::System::String* m_OfflineScene;
		mscorlib::System::String* m_OnlineScene;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* m_SpawnPrefabs;
		bool m_CustomConfig;
		int32_t m_MaxConnections;
		UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* m_ConnectionConfig;
		UnityEngine_UNETModule::UnityEngine::Networking::GlobalConfig* m_GlobalConfig;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::QosType>* m_Channels;
		bool m_UseWebSockets;
		bool m_UseSimulator;
		int32_t m_SimulatedLatency;
		float m_PacketLossPercentage;
		int32_t m_MaxBufferedPackets;
		bool m_AllowFragmentation;
		mscorlib::System::String* m_MatchHost;
		int32_t m_MatchPort;
		mscorlib::System::String* matchName;
		uint32_t matchSize;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager* m_MigrationManager;
		System::System::Net::EndPoint* m_EndPoint;
		bool m_ClientLoadedScene;
		bool isNetworkActive;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* client;
		UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* matchInfo;
		UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch* matchMaker;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot>* matches;
		struct StaticFields
		{
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::INetworkTransport* s_ActiveTransport;
			mscorlib::System::String* networkSceneName;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Transform>* s_StartPositions;
			int32_t s_StartPositionIndex;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkManager* singleton;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::AddPlayerMessage* s_AddPlayerMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::RemovePlayerMessage* s_RemovePlayerMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::ErrorMessage* s_ErrorMessage;
			UnityEngine_CoreModule::UnityEngine::AsyncOperation* s_LoadingSceneAsync;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* s_ClientReadyConnection;
			mscorlib::System::String* s_Address;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_networkPort();
		void set_networkPort(int32_t value);
		bool get_serverBindToIP();
		void set_serverBindToIP(bool value);
		mscorlib::System::String* get_serverBindAddress();
		void set_serverBindAddress(mscorlib::System::String* value);
		mscorlib::System::String* get_networkAddress();
		void set_networkAddress(mscorlib::System::String* value);
		bool get_dontDestroyOnLoad();
		void set_dontDestroyOnLoad(bool value);
		bool get_runInBackground();
		void set_runInBackground(bool value);
		bool get_scriptCRCCheck();
		void set_scriptCRCCheck(bool value);
		bool get_sendPeerInfo();
		void set_sendPeerInfo(bool value);
		float get_maxDelay();
		void set_maxDelay(float value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LogFilter_FilterLevel get_logLevel();
		void set_logLevel(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LogFilter_FilterLevel value);
		UnityEngine_CoreModule::UnityEngine::GameObject* get_playerPrefab();
		void set_playerPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		bool get_autoCreatePlayer();
		void set_autoCreatePlayer(bool value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerSpawnMethod get_playerSpawnMethod();
		void set_playerSpawnMethod(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerSpawnMethod value);
		mscorlib::System::String* get_offlineScene();
		void set_offlineScene(mscorlib::System::String* value);
		mscorlib::System::String* get_onlineScene();
		void set_onlineScene(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* get_spawnPrefabs();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Transform>* get_startPositions();
		bool get_customConfig();
		void set_customConfig(bool value);
		UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* get_connectionConfig();
		UnityEngine_UNETModule::UnityEngine::Networking::GlobalConfig* get_globalConfig();
		int32_t get_maxConnections();
		void set_maxConnections(int32_t value);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::QosType>* get_channels();
		System::System::Net::EndPoint* get_secureTunnelEndpoint();
		void set_secureTunnelEndpoint(System::System::Net::EndPoint* value);
		bool get_useWebSockets();
		void set_useWebSockets(bool value);
		bool get_useSimulator();
		void set_useSimulator(bool value);
		int32_t get_simulatedLatency();
		void set_simulatedLatency(int32_t value);
		float get_packetLossPercentage();
		void set_packetLossPercentage(float value);
		mscorlib::System::String* get_matchHost();
		void set_matchHost(mscorlib::System::String* value);
		int32_t get_matchPort();
		void set_matchPort(int32_t value);
		bool get_clientLoadedScene();
		void set_clientLoadedScene(bool value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager* get_migrationManager();
		int32_t get_numPlayers();
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::INetworkTransport* get_defaultTransport();
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::INetworkTransport* get_activeTransport();
		static void set_activeTransport(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::INetworkTransport* value);
		void Awake();
		void InitializeSingleton();
		void OnValidate();
		void RegisterServerMessages();
		void SetupMigrationManager(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMigrationManager* man);
		bool StartServer(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config, int32_t maxConnections);
		bool StartServer();
		bool StartServer(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* info);
		bool StartServer(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* info, UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config, int32_t maxConnections);
		void RegisterClientMessages(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* client);
		void UseExternalClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* externalClient);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* StartClient(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* info, UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config, int32_t hostPort);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* StartClient(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* matchInfo);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* StartClient();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* StartClient(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* info, UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* StartHost(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config, int32_t maxConnections);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* StartHost(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* info);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* StartHost();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* ConnectLocalClient();
		void StopHost();
		void StopServer();
		void StopClient();
		void ServerChangeScene(mscorlib::System::String* newSceneName);
		void CleanupNetworkIdentities();
		void ClientChangeScene(mscorlib::System::String* newSceneName, bool forceReload);
		void FinishLoadScene();
		static void UpdateScene();
		void OnDestroy();
		static void RegisterStartPosition(UnityEngine_CoreModule::UnityEngine::Transform* start);
		static void UnRegisterStartPosition(UnityEngine_CoreModule::UnityEngine::Transform* start);
		bool IsClientConnected();
		static void Shutdown();
		void OnServerConnectInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnServerDisconnectInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnServerReadyMessageInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnServerAddPlayerMessageInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnServerRemovePlayerMessageInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnServerErrorInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnClientConnectInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnClientDisconnectInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnClientNotReadyMessageInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnClientErrorInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnClientSceneInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnServerConnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnServerDisconnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnServerReady(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnServerAddPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int16_t playerControllerId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* extraMessageReader);
		void OnServerAddPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int16_t playerControllerId);
		void OnServerAddPlayerInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int16_t playerControllerId);
		UnityEngine_CoreModule::UnityEngine::Transform* GetStartPosition();
		void OnServerRemovePlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController* player);
		void OnServerError(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int32_t errorCode);
		void OnServerSceneChanged(mscorlib::System::String* sceneName);
		void OnClientConnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnClientDisconnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnClientError(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int32_t errorCode);
		void OnClientNotReady(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnClientSceneChanged(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void StartMatchMaker();
		void StopMatchMaker();
		void SetMatchHost(mscorlib::System::String* newHost, int32_t port, bool https);
		void OnStartHost();
		void OnStartServer();
		void OnStartClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* client);
		void OnStopServer();
		void OnStopClient();
		void OnStopHost();
		void OnMatchCreate(bool success, mscorlib::System::String* extendedInfo, UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* matchInfo);
		void OnMatchList(bool success, mscorlib::System::String* extendedInfo, mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot>* matchList);
		void OnMatchJoined(bool success, mscorlib::System::String* extendedInfo, UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* matchInfo);
		void OnDestroyMatch(bool success, mscorlib::System::String* extendedInfo);
		void OnDropConnection(bool success, mscorlib::System::String* extendedInfo);
		void OnSetMatchAttributes(bool success, mscorlib::System::String* extendedInfo);
		void _ctor();
		static void _cctor();
	};
}

