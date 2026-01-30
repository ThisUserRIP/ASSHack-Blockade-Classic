#pragma once
namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe
{
	enum struct ScheduleMode : int32_t
	{
		Run = static_cast<int32_t>(0x0),
		Batched = static_cast<int32_t>(0x1),
		Parallel = static_cast<int32_t>(0x1),
		Single = static_cast<int32_t>(0x2),
	};
}

