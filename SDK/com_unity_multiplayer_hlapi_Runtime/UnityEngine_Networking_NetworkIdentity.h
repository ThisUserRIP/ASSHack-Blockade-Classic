#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "UnityEngine_Networking_NetworkSceneId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkSceneId; };
#include "UnityEngine_Networking_NetworkHash128.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkHash128; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkConnection; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkBehaviour; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkWriter; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkIdentity_ClientAuthorityCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkReader; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkMessage; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkIdentity : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId m_SceneId;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 m_AssetId;
		bool m_ServerOnly;
		bool m_LocalPlayerAuthority;
		bool m_IsClient;
		bool m_IsServer;
		bool m_HasAuthority;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId m_NetId;
		bool m_IsLocalPlayer;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* m_ConnectionToServer;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* m_ConnectionToClient;
		int16_t m_PlayerId;
		IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour*>* m_NetworkBehaviours;
		System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Int32>* m_ObserverConnections;
		mscorlib::System::Collections::Generic::List_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* m_Observers;
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* m_ClientAuthorityOwner;
		bool m_Reset;
		struct StaticFields
		{
			uint32_t s_NextNetworkId;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* s_UpdateWriter;
			com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity_ClientAuthorityCallback* clientAuthorityCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_isClient();
		bool get_isServer();
		bool get_hasAuthority();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId get_netId();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkSceneId get_sceneId();
		bool get_serverOnly();
		void set_serverOnly(bool value);
		bool get_localPlayerAuthority();
		void set_localPlayerAuthority(bool value);
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* get_clientAuthorityOwner();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 get_assetId();
		void SetDynamicAssetId(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 newAssetId);
		void SetClientOwner(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void ClearClientOwner();
		void ForceAuthority(bool authority);
		bool get_isLocalPlayer();
		int16_t get_playerControllerId();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* get_connectionToServer();
		com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* get_connectionToClient();
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection>* get_observers();
		static com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId GetNextNetworkId();
		void CacheBehaviours();
		static void AddNetworkId(uint32_t id);
		void SetNetworkInstanceId(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId newNetId);
		void ForceSceneId(int32_t newSceneId);
		void UpdateClientServer(bool isClientFlag, bool isServerFlag);
		void SetNotLocalPlayer();
		void RemoveObserverInternal(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void OnDestroy();
		void OnStartServer(bool allowNonZeroNetId);
		void OnStartClient();
		void OnStartAuthority();
		void OnStopAuthority();
		void OnSetLocalVisibility(bool vis);
		bool OnCheckObserver(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void UNetSerializeAllVars(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkWriter* writer);
		void HandleClientAuthority(bool authority);
		bool GetInvokeComponent(int32_t cmdHash, mscorlib::System::Type* invokeClass, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour& invokeComponent);
		void HandleSyncEvent(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		void HandleSyncList(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		void HandleCommand(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		void HandleRPC(int32_t cmdHash, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader);
		void UNetUpdate();
		IL2CPP::Array<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkBehaviour*>* GetBehavioursOfSameChannel(int32_t channelId, bool initialState);
		void OnUpdateVars(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkReader* reader, bool initialState, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkMessage* netMsg);
		void SetLocalPlayer(int16_t localPlayerControllerId);
		void SetConnectionToServer(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void SetConnectionToClient(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn, int16_t newPlayerControllerId);
		void OnNetworkDestroy();
		void ClearObservers();
		void AddObserver(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void RemoveObserver(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void RebuildObservers(bool initialize);
		bool RemoveClientAuthority(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		bool AssignClientAuthority(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkConnection* conn);
		void MarkForReset();
		void Reset();
		static void OnRuntimeInitializeOnLoad();
		static void UNetStaticUpdate();
		void _ctor();
		static void _cctor();
	};
}

