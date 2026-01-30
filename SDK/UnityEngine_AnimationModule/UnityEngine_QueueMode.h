#pragma once
namespace UnityEngine_AnimationModule::UnityEngine
{
	enum struct QueueMode : int32_t
	{
		CompleteOthers = static_cast<int32_t>(0x0),
		PlayNow = static_cast<int32_t>(0x2),
	};
}

