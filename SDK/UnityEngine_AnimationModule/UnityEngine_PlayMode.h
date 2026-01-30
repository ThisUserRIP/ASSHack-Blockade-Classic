#pragma once
namespace UnityEngine_AnimationModule::UnityEngine
{
	enum struct PlayMode : int32_t
	{
		StopSameLayer = static_cast<int32_t>(0x0),
		StopAll = static_cast<int32_t>(0x4),
	};
}

