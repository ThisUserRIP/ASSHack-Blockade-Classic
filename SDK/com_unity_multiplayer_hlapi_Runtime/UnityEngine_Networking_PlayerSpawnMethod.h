#pragma once
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	enum struct PlayerSpawnMethod : int32_t
	{
		Random_ = static_cast<int32_t>(0x0),
		RoundRobin = static_cast<int32_t>(0x1),
	};
}

