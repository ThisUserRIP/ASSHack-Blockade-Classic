#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct FastMemoryFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		SpillTop = static_cast<int32_t>(0x1),
		SpillBottom = static_cast<int32_t>(0x2),
	};
}

