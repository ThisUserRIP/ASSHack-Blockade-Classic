#pragma once
namespace UnityEngine_VideoModule::UnityEngine::Video
{
	enum struct VideoTimeReference : int32_t
	{
		Freerun = static_cast<int32_t>(0x0),
		InternalTime = static_cast<int32_t>(0x1),
		ExternalTime = static_cast<int32_t>(0x2),
	};
}

