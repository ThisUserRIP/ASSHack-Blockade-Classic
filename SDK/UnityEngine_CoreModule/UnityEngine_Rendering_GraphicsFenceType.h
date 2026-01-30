#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct GraphicsFenceType : int32_t
	{
		AsyncQueueSynchronisation = static_cast<int32_t>(0x0),
		CPUSynchronisation = static_cast<int32_t>(0x1),
	};
}

