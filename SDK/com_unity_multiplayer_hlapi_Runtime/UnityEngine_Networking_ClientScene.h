#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct PlayerController; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
#include "UnityEngine_Networking_NetworkSceneId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkSceneId; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkIdentity; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkScene; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct ObjectSpawnSceneMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct ObjectSpawnFinishedMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct ObjectDestroyMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct ObjectSpawnMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct OwnerMessage; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct ClientAuthorityMessage; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem { struct PeerInfoMessage; };
#include "UnityEngine_Networking_ClientScene_PendingOwner.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct ClientScene_PendingOwner; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
#include "UnityEngine_Networking_NetworkHash128.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkHash128; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct MessageBase; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkClient; };
namespace mscorlib::System { struct String; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct SpawnDelegate; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct UnSpawnDelegate; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct ClientScene : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController>* s_LocalPlayers;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* s_ReadyConnection;
			mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity>* s_SpawnableObjects;
			bool s_IsReady;
			bool s_IsSpawnFinished;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkScene* s_NetworkScene;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::ObjectSpawnSceneMessage* s_ObjectSpawnSceneMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::ObjectSpawnFinishedMessage* s_ObjectSpawnFinishedMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::ObjectDestroyMessage* s_ObjectDestroyMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::ObjectSpawnMessage* s_ObjectSpawnMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::OwnerMessage* s_OwnerMessage;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::ClientAuthorityMessage* s_ClientAuthorityMessage;
			int32_t ReconnectIdInvalid;
			int32_t ReconnectIdHost;
			int32_t s_ReconnectId;
			IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>* s_Peers;
			mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::ClientScene_PendingOwner>* s_PendingOwnerIds;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool hasMigrationPending();
		static void SetReconnectId(int32_t newReconnectId, IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSystem::PeerInfoMessage*>* peers);
		static void SetNotReady();
		static mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController>* get_localPlayers();
		static bool get_ready();
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* get_readyConnection();
		static int32_t get_reconnectId();
		static mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity>* get_objects();
		static mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, UnityEngine_CoreModule::UnityEngine::GameObject>* get_prefabs();
		static mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity>* get_spawnableObjects();
		static void Shutdown();
		static bool GetPlayerController(int16_t playerControllerId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::PlayerController& player);
		static void InternalAddPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* view, int16_t playerControllerId);
		static bool AddPlayer(int16_t playerControllerId);
		static bool AddPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* readyConn, int16_t playerControllerId);
		static bool AddPlayer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* readyConn, int16_t playerControllerId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* extraMessage);
		static bool SendReconnectMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::MessageBase* extraMessage);
		static bool RemovePlayer(int16_t playerControllerId);
		static bool Ready(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* ConnectLocalServer();
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* ReconnectLocalServer();
		static void ClearLocalPlayers();
		static void HandleClientDisconnect(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		static void PrepareToSpawnSceneObjects();
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* SpawnSceneObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId sceneId);
		static void RegisterSystemHandlers(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkClient* client, bool localClient);
		static mscorlib::System::String* GetStringForAssetId(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId);
		static void RegisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 newAssetId);
		static void RegisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab);
		static void RegisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate* spawnHandler, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UnSpawnDelegate* unspawnHandler);
		static void UnregisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab);
		static void RegisterSpawnHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate* spawnHandler, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UnSpawnDelegate* unspawnHandler);
		static void UnregisterSpawnHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId);
		static void ClearSpawners();
		static void DestroyAllClientObjects();
		static void SetLocalObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		static UnityEngine_CoreModule::UnityEngine::GameObject* FindLocalObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId);
		static void ApplySpawnPayload(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv, UnityEngine_CoreModule::UnityEngine::Vector3 position, IL2CPP::Array<uint8_t>* payload, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, UnityEngine_CoreModule::UnityEngine::GameObject* newGameObject, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnObjectSpawn(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnObjectSpawnScene(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnObjectSpawnFinished(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnObjectDestroy(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnLocalClientObjectDestroy(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnLocalClientObjectHide(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnLocalClientObjectSpawn(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnLocalClientObjectSpawnScene(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnUpdateVarsMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnRPCMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnSyncEventMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnSyncListMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnClientAuthority(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void OnOwnerMessage(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		static void CheckForOwner(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity* uv);
		void _ctor();
		static void _cctor();
	};
}

