#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_NetworkManager.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkLobbyPlayer; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_Networking_NetworkLobbyManager_PendingPlayer.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkLobbyManager_PendingPlayer; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct LobbyReadyToBeginMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct IntegerMessage; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct PlayerController; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkClient; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkLobbyManager : com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_ShowLobbyGUI;
		int32_t m_MaxPlayers;
		int32_t m_MaxPlayersPerConnection;
		int32_t m_MinPlayers;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkLobbyPlayer* m_LobbyPlayerPrefab;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_GamePlayerPrefab;
		mscorlib::System::String* m_LobbyScene;
		mscorlib::System::String* m_PlayScene;
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkLobbyManager_PendingPlayer>* m_PendingPlayers;
		IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkLobbyPlayer*>* lobbySlots;
		struct StaticFields
		{
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::LobbyReadyToBeginMessage* s_ReadyToBeginMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::IntegerMessage* s_SceneLoadedMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::LobbyReadyToBeginMessage* s_LobbyReadyToBeginMessage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_showLobbyGUI();
		void set_showLobbyGUI(bool value);
		int32_t get_maxPlayers();
		void set_maxPlayers(int32_t value);
		int32_t get_maxPlayersPerConnection();
		void set_maxPlayersPerConnection(int32_t value);
		int32_t get_minPlayers();
		void set_minPlayers(int32_t value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkLobbyPlayer* get_lobbyPlayerPrefab();
		void set_lobbyPlayerPrefab(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkLobbyPlayer* value);
		UnityEngine_CoreModule::UnityEngine::GameObject* get_gamePlayerPrefab();
		void set_gamePlayerPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		mscorlib::System::String* get_lobbyScene();
		void set_lobbyScene(mscorlib::System::String* value);
		mscorlib::System::String* get_playScene();
		void set_playScene(mscorlib::System::String* value);
		void OnValidate();
		uint8_t FindSlot();
		void SceneLoadedForPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, UnityEngine_CoreModule::UnityEngine::GameObject* lobbyPlayerGameObject);
		static int32_t CheckConnectionIsReadyToBegin(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void CheckReadyToBegin();
		void ServerReturnToLobby();
		void CallOnClientEnterLobby();
		void CallOnClientExitLobby();
		bool SendReturnToLobby();
		void OnServerConnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnServerDisconnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnServerAddPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int16_t playerControllerId);
		void OnServerRemovePlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController* player);
		void ServerChangeScene(mscorlib::System::String* sceneName);
		void OnServerSceneChanged(mscorlib::System::String* sceneName);
		void OnServerReadyToBeginMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnServerSceneLoadedMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnServerReturnToLobbyMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnStartServer();
		void OnStartHost();
		void OnStopHost();
		void OnStartClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* lobbyClient);
		void OnClientConnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnClientDisconnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnStopClient();
		void OnClientSceneChanged(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnClientReadyToBegin(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnClientAddPlayerFailedMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void OnLobbyStartHost();
		void OnLobbyStopHost();
		void OnLobbyStartServer();
		void OnLobbyServerConnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnLobbyServerDisconnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnLobbyServerSceneChanged(mscorlib::System::String* sceneName);
		UnityEngine_CoreModule::UnityEngine::GameObject* OnLobbyServerCreateLobbyPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int16_t playerControllerId);
		UnityEngine_CoreModule::UnityEngine::GameObject* OnLobbyServerCreateGamePlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int16_t playerControllerId);
		void OnLobbyServerPlayerRemoved(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int16_t playerControllerId);
		bool OnLobbyServerSceneLoadedForPlayer(UnityEngine_CoreModule::UnityEngine::GameObject* lobbyPlayer, UnityEngine_CoreModule::UnityEngine::GameObject* gamePlayer);
		void OnLobbyServerPlayersReady();
		void OnLobbyClientEnter();
		void OnLobbyClientExit();
		void OnLobbyClientConnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnLobbyClientDisconnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnLobbyStartClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* lobbyClient);
		void OnLobbyStopClient();
		void OnLobbyClientSceneChanged(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnLobbyClientAddPlayerFailed();
		void OnGUI();
		void TryToAddPlayer();
		void _ctor();
		static void _cctor();
	};
}

