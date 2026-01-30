#pragma once
namespace UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe
{
	enum struct Priority : int32_t
	{
		PriorityLow = static_cast<int32_t>(0x0),
		PriorityHigh = static_cast<int32_t>(0x1),
	};
}

