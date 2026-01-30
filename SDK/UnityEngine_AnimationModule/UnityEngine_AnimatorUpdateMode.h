#pragma once
namespace UnityEngine_AnimationModule::UnityEngine
{
	enum struct AnimatorUpdateMode : int32_t
	{
		Normal = static_cast<int32_t>(0x0),
		AnimatePhysics = static_cast<int32_t>(0x1),
		UnscaledTime = static_cast<int32_t>(0x2),
	};
}

