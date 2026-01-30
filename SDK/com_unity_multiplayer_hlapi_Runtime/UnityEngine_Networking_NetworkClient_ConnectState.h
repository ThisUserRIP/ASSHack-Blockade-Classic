#pragma once
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	enum struct NetworkClient_ConnectState : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Resolving = static_cast<int32_t>(0x1),
		Resolved = static_cast<int32_t>(0x2),
		Connecting = static_cast<int32_t>(0x3),
		Connected = static_cast<int32_t>(0x4),
		Disconnected = static_cast<int32_t>(0x5),
		Failed = static_cast<int32_t>(0x6),
	};
}

