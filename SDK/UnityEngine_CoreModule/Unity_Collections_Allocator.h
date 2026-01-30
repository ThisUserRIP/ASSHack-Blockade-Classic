#pragma once
namespace UnityEngine_CoreModule::Unity::Collections
{
	enum struct Allocator : int32_t
	{
		Invalid = static_cast<int32_t>(0x0),
		None = static_cast<int32_t>(0x1),
		Temp = static_cast<int32_t>(0x2),
		TempJob = static_cast<int32_t>(0x3),
		Persistent = static_cast<int32_t>(0x4),
		AudioKernel = static_cast<int32_t>(0x5),
	};
}

