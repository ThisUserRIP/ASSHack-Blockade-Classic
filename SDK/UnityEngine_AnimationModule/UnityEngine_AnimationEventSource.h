#pragma once
namespace UnityEngine_AnimationModule::UnityEngine
{
	enum struct AnimationEventSource : int32_t
	{
		NoSource = static_cast<int32_t>(0x0),
		Legacy = static_cast<int32_t>(0x1),
		Animator = static_cast<int32_t>(0x2),
	};
}

