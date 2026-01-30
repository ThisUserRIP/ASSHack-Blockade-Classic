#pragma once
namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	enum struct QosType : int32_t
	{
		Unreliable = static_cast<int32_t>(0x0),
		UnreliableFragmented = static_cast<int32_t>(0x1),
		UnreliableSequenced = static_cast<int32_t>(0x2),
		Reliable = static_cast<int32_t>(0x3),
		ReliableFragmented = static_cast<int32_t>(0x4),
		ReliableSequenced = static_cast<int32_t>(0x5),
		StateUpdate = static_cast<int32_t>(0x6),
		ReliableStateUpdate = static_cast<int32_t>(0x7),
		AllCostDelivery = static_cast<int32_t>(0x8),
		UnreliableFragmentedSequenced = static_cast<int32_t>(0x9),
		ReliableFragmentedSequenced = static_cast<int32_t>(0xA),
	};
}

