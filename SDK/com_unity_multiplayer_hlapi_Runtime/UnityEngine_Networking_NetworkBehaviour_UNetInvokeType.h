#pragma once
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	enum struct NetworkBehaviour_UNetInvokeType : int32_t
	{
		Command = static_cast<int32_t>(0x0),
		ClientRpc = static_cast<int32_t>(0x1),
		SyncEvent = static_cast<int32_t>(0x2),
		SyncList = static_cast<int32_t>(0x3),
	};
}

