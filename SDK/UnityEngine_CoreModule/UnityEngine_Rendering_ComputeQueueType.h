#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct ComputeQueueType : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		Background = static_cast<int32_t>(0x1),
		Urgent = static_cast<int32_t>(0x2),
	};
}

