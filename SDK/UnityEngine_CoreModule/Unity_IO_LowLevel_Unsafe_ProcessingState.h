#pragma once
namespace UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe
{
	enum struct ProcessingState : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		InQueue = static_cast<int32_t>(0x1),
		Reading = static_cast<int32_t>(0x2),
		Completed = static_cast<int32_t>(0x3),
		Failed = static_cast<int32_t>(0x4),
		Canceled = static_cast<int32_t>(0x5),
	};
}

