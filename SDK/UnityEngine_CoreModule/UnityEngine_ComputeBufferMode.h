#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct ComputeBufferMode : int32_t
	{
		Immutable = static_cast<int32_t>(0x0),
		Dynamic = static_cast<int32_t>(0x1),
		Circular = static_cast<int32_t>(0x2),
		StreamOut = static_cast<int32_t>(0x3),
		SubUpdates = static_cast<int32_t>(0x4),
	};
}

