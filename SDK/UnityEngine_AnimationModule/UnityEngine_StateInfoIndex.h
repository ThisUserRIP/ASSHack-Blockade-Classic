#pragma once
namespace UnityEngine_AnimationModule::UnityEngine
{
	enum struct StateInfoIndex : int32_t
	{
		CurrentState = static_cast<int32_t>(0x0),
		NextState = static_cast<int32_t>(0x1),
		ExitState = static_cast<int32_t>(0x2),
		InterruptedState = static_cast<int32_t>(0x3),
	};
}

