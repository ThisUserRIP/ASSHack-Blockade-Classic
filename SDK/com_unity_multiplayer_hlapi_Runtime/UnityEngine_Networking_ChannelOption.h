#pragma once
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	enum struct ChannelOption : int32_t
	{
		MaxPendingBuffers = static_cast<int32_t>(0x1),
		AllowFragmentation = static_cast<int32_t>(0x2),
		MaxPacketSize = static_cast<int32_t>(0x3),
	};
}

