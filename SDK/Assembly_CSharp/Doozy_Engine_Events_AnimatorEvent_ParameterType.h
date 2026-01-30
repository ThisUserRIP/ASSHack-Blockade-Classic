#pragma once
namespace Assembly_CSharp::Doozy::Engine::Events
{
	enum struct AnimatorEvent_ParameterType : int32_t
	{
		Bool = static_cast<int32_t>(0x0),
		Float = static_cast<int32_t>(0x1),
		Int = static_cast<int32_t>(0x2),
		Trigger = static_cast<int32_t>(0x3),
	};
}

