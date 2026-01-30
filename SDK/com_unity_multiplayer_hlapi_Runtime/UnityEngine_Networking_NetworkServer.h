#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct ULocalConnectionToClient; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkScene; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkServer_ServerSimpleWrapper; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct RemovePlayerMessage; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessageDelegate; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct HostTopology; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkIdentity; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking { struct ConnectionConfig; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchInfo; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_Types_NetworkID.h"
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_Types_SourceID.h"
#include "..\UnityEngine_UNETModule\UnityEngine_Networking_Types_NodeID.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkClient; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct PeerInfoMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct LocalClient; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct MessageBase; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "UnityEngine_Networking_NetworkHash128.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkHash128; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct PlayerController; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct ULocalConnectionToServer; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection_PacketStat; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkServer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_LocalClientActive;
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* m_LocalConnectionsFakeList;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ULocalConnectionToClient* m_LocalConnection;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene* m_NetworkScene;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* m_ExternalConnections;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkServer_ServerSimpleWrapper* m_SimpleServerSimple;
		float m_MaxDelay;
		System_Core::System::Collections::Generic::HashSet_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId>* m_RemoveList;
		int32_t m_RemoveListCount;
		struct StaticFields
		{
			bool s_Active;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkServer* s_Instance;
			mscorlib::System::Object* s_Sync;
			bool m_DontListen;
			int32_t k_RemoveListInterval;
			uint16_t maxPacketSize;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::RemovePlayerMessage* s_RemovePlayerMessage;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* get_localConnections();
		static int32_t get_listenPort();
		static int32_t get_serverHostId();
		static mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* get_connections();
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate>* get_handlers();
		static UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* get_hostTopology();
		static mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity>* get_objects();
		static bool get_sendPeerInfo();
		static void set_sendPeerInfo(bool value);
		static bool get_dontListen();
		static void set_dontListen(bool value);
		static bool get_useWebSockets();
		static void set_useWebSockets(bool value);
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkServer* get_instance();
		static bool get_active();
		static bool get_localClientActive();
		static int32_t get_numChannels();
		static float get_maxDelay();
		static void set_maxDelay(float value);
		static mscorlib::System::Type* get_networkConnectionClass();
		template <typename T> static void SetNetworkConnectionClass()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetNetworkConnectionClass");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor();
		static bool Configure(UnityEngine_UNETModule::UnityEngine::Networking::ConnectionConfig* config, int32_t maxConnections);
		static bool Configure(UnityEngine_UNETModule::UnityEngine::Networking::HostTopology* topology);
		static void Reset();
		static void Shutdown();
		static bool Listen(UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* matchInfo, int32_t listenPort);
		void RegisterMessageHandlers();
		static void ListenRelay(mscorlib::System::String* relayIp, int32_t relayPort, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netGuid, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID sourceId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID nodeId);
		void InternalListenRelay(mscorlib::System::String* relayIp, int32_t relayPort, UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netGuid, UnityEngine_UNETModule::UnityEngine::Networking::Types::SourceID sourceId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID nodeId);
		static bool Listen(int32_t serverPort);
		static bool Listen(mscorlib::System::String* ipAddress, int32_t serverPort);
		bool InternalListen(mscorlib::System::String* ipAddress, int32_t serverPort);
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* BecomeHost(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* oldClient, int32_t port, UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* matchInfo, int32_t oldConnectionId, IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>* peers);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* BecomeHostInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* oldClient, int32_t port, UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo* matchInfo, int32_t oldConnectionId, IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>* peers);
		void InternalSetMaxDelay(float seconds);
		int32_t AddLocalClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::LocalClient* localClient);
		void RemoveLocalClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* localClientConnection);
		void SetLocalObjectOnServer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		void ActivateLocalClientScene();
		static bool SendToAll(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		static bool SendToObservers(UnityEngine_CoreModule::UnityEngine::GameObject* contextObj, int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		static bool SendToReady(UnityEngine_CoreModule::UnityEngine::GameObject* contextObj, int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		static void SendWriterToReady(UnityEngine_CoreModule::UnityEngine::GameObject* contextObj, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer, int32_t channelId);
		static void SendBytesToReady(UnityEngine_CoreModule::UnityEngine::GameObject* contextObj, IL2CPP::Array<uint8_t>* buffer, int32_t numBytes, int32_t channelId);
		static void SendBytesToPlayer(UnityEngine_CoreModule::UnityEngine::GameObject* player, IL2CPP::Array<uint8_t>* buffer, int32_t numBytes, int32_t channelId);
		static bool SendUnreliableToAll(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		static bool SendUnreliableToReady(UnityEngine_CoreModule::UnityEngine::GameObject* contextObj, int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		static bool SendByChannelToAll(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg, int32_t channelId);
		static bool SendByChannelToReady(UnityEngine_CoreModule::UnityEngine::GameObject* contextObj, int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg, int32_t channelId);
		static void DisconnectAll();
		void InternalDisconnectAll();
		static void Update();
		void UpdateServerObjects();
		void CheckForNullObjects();
		void InternalUpdate();
		void OnConnected(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnDisconnected(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnData(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int32_t receivedSize, int32_t channelId);
		void GenerateConnectError(int32_t error);
		void GenerateDataError(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int32_t error);
		void GenerateDisconnectError(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int32_t error);
		void GenerateError(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int32_t error);
		static void RegisterHandler(int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessageDelegate* handler);
		static void UnregisterHandler(int16_t msgType);
		static void ClearHandlers();
		static void ClearSpawners();
		static void GetStatsOut(int32_t& numMsgs, int32_t& numBufferedMsgs, int32_t& numBytes, int32_t& lastBufferedPerSecond);
		static void GetStatsIn(int32_t& numMsgs, int32_t& numBytes);
		static void SendToClientOfPlayer(UnityEngine_CoreModule::UnityEngine::GameObject* player, int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		static void SendToClient(int32_t connectionId, int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg);
		static bool ReplacePlayerForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, UnityEngine_CoreModule::UnityEngine::GameObject* player, int16_t playerControllerId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId);
		static bool ReplacePlayerForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, UnityEngine_CoreModule::UnityEngine::GameObject* player, int16_t playerControllerId);
		static bool AddPlayerForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, UnityEngine_CoreModule::UnityEngine::GameObject* player, int16_t playerControllerId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId);
		static bool AddPlayerForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, UnityEngine_CoreModule::UnityEngine::GameObject* player, int16_t playerControllerId);
		bool InternalAddPlayerForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, UnityEngine_CoreModule::UnityEngine::GameObject* playerGameObject, int16_t playerControllerId);
		static bool CheckPlayerControllerIdForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int16_t playerControllerId);
		bool SetupLocalPlayerForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController* newPlayerController);
		static void FinishPlayerForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv, UnityEngine_CoreModule::UnityEngine::GameObject* playerGameObject);
		bool InternalReplacePlayerForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, UnityEngine_CoreModule::UnityEngine::GameObject* playerGameObject, int16_t playerControllerId);
		static bool GetNetworkIdentity(UnityEngine_CoreModule::UnityEngine::GameObject* go, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity& view);
		static void SetClientReady(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void SetClientReadyInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static void ShowForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static void HideForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static void SetAllClientsNotReady();
		static void SetClientNotReady(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void InternalSetClientNotReady(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static void OnClientReadyMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnRemovePlayerMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnCommandMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void SpawnObject(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		void SendSpawnMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static void DestroyPlayersForConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static void UnSpawnObject(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		static void UnSpawnObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv);
		static void DestroyObject(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		static void DestroyObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv, bool destroyServerObject);
		static void ClearLocalObjects();
		static void Spawn(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		static bool CheckForPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		static bool VerifyCanSpawn(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		static bool SpawnWithClientAuthority(UnityEngine_CoreModule::UnityEngine::GameObject* obj, UnityEngine_CoreModule::UnityEngine::GameObject* player);
		static bool SpawnWithClientAuthority(UnityEngine_CoreModule::UnityEngine::GameObject* obj, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static bool SpawnWithClientAuthority(UnityEngine_CoreModule::UnityEngine::GameObject* obj, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static void Spawn(UnityEngine_CoreModule::UnityEngine::GameObject* obj, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId);
		static void Destroy(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		static void UnSpawn(UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		bool InvokeBytes(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ULocalConnectionToServer* conn, IL2CPP::Array<uint8_t>* buffer, int32_t numBytes, int32_t channelId);
		bool InvokeHandlerOnServer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ULocalConnectionToServer* conn, int16_t msgType, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* msg, int32_t channelId);
		static UnityEngine_CoreModule::UnityEngine::GameObject* FindLocalObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId);
		static mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int16, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection_PacketStat>* GetConnectionStats();
		static void ResetConnectionStats();
		static bool AddExternalConnection(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		bool AddExternalConnectionInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static void RemoveExternalConnection(int32_t connectionId);
		bool RemoveExternalConnectionInternal(int32_t connectionId);
		static bool ValidateSceneObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* netId);
		static bool SpawnObjects();
		static void SendCrc(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* targetConnection);
		void SendNetworkInfo(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* targetConnection);
		static void _cctor();
	};
}

