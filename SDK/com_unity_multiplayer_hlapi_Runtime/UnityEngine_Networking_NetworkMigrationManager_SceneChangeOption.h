#pragma once
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	enum struct NetworkMigrationManager_SceneChangeOption : int32_t
	{
		StayInOnlineScene = static_cast<int32_t>(0x0),
		SwitchToOfflineScene = static_cast<int32_t>(0x1),
	};
}

