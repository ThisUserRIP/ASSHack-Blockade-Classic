#pragma once
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	enum struct SyncList_1_Operation : int32_t
	{
		OP_ADD = static_cast<int32_t>(0x0),
		OP_CLEAR = static_cast<int32_t>(0x1),
		OP_INSERT = static_cast<int32_t>(0x2),
		OP_REMOVE = static_cast<int32_t>(0x3),
		OP_REMOVEAT = static_cast<int32_t>(0x4),
		OP_SET = static_cast<int32_t>(0x5),
		OP_DIRTY = static_cast<int32_t>(0x6),
	};
}

