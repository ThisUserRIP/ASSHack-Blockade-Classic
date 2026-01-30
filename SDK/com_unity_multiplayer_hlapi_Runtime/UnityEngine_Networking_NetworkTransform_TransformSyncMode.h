#pragma once
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	enum struct NetworkTransform_TransformSyncMode : int32_t
	{
		SyncNone = static_cast<int32_t>(0x0),
		SyncTransform = static_cast<int32_t>(0x1),
		SyncRigidbody2D = static_cast<int32_t>(0x2),
		SyncRigidbody3D = static_cast<int32_t>(0x3),
		SyncCharacterController = static_cast<int32_t>(0x4),
	};
}

