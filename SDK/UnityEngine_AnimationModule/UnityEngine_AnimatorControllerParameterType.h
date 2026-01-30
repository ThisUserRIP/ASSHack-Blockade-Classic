#pragma once
namespace UnityEngine_AnimationModule::UnityEngine
{
	enum struct AnimatorControllerParameterType : int32_t
	{
		Float = static_cast<int32_t>(0x1),
		Int = static_cast<int32_t>(0x3),
		Bool = static_cast<int32_t>(0x4),
		Trigger = static_cast<int32_t>(0x9),
	};
}

