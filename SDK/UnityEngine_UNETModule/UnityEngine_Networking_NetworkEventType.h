#pragma once
namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	enum struct NetworkEventType : int32_t
	{
		DataEvent = static_cast<int32_t>(0x0),
		ConnectEvent = static_cast<int32_t>(0x1),
		DisconnectEvent = static_cast<int32_t>(0x2),
		Nothing = static_cast<int32_t>(0x3),
		BroadcastEvent = static_cast<int32_t>(0x4),
	};
}

