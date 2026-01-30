#pragma once
namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	enum struct ConnectionAcksType : int32_t
	{
		Acks32 = static_cast<int32_t>(0x1),
		Acks64 = static_cast<int32_t>(0x2),
		Acks96 = static_cast<int32_t>(0x3),
		Acks128 = static_cast<int32_t>(0x4),
	};
}

