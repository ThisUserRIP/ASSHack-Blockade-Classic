#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Networking_NetworkInstanceId.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkInstanceId; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkIdentity; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "UnityEngine_Networking_NetworkHash128.h"
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct NetworkHash128; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct SpawnDelegate; };
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking { struct UnSpawnDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	struct NetworkScene : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity>* m_LocalObjects;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, UnityEngine_CoreModule::UnityEngine::GameObject>* s_GuidToPrefab;
			mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate>* s_SpawnHandlers;
			mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UnSpawnDelegate>* s_UnspawnHandlers;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity>* get_localObjects();
		static mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, UnityEngine_CoreModule::UnityEngine::GameObject>* get_guidToPrefab();
		static mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate>* get_spawnHandlers();
		static mscorlib::System::Collections::Generic::Dictionary_2<com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UnSpawnDelegate>* get_unspawnHandlers();
		void Shutdown();
		void SetLocalObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, UnityEngine_CoreModule::UnityEngine::GameObject* obj, bool isClient, bool isServer);
		UnityEngine_CoreModule::UnityEngine::GameObject* FindLocalObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId);
		bool GetNetworkIdentity(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkIdentity& uv);
		bool RemoveLocalObject(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId);
		bool RemoveLocalObjectAndDestroy(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkInstanceId netId);
		void ClearLocalObjects();
		static void RegisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 newAssetId);
		static void RegisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab);
		static bool GetPrefab(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, UnityEngine_CoreModule::UnityEngine::GameObject& prefab);
		static void ClearSpawners();
		static void UnregisterSpawnHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId);
		static void RegisterSpawnHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate* spawnHandler, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UnSpawnDelegate* unspawnHandler);
		static void UnregisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab);
		static void RegisterPrefab(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate* spawnHandler, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::UnSpawnDelegate* unspawnHandler);
		static bool GetSpawnHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::SpawnDelegate& handler);
		static bool InvokeUnSpawnHandler(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkHash128 assetId, UnityEngine_CoreModule::UnityEngine::GameObject* obj);
		void DestroyAllClientObjects();
		void DumpAllClientObjects();
		void _ctor();
		static void _cctor();
	};
}

