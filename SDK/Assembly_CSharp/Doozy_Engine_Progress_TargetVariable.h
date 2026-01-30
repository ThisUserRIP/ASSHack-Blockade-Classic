#pragma once
namespace Assembly_CSharp::Doozy::Engine::Progress
{
	enum struct TargetVariable : int32_t
	{
		Value = static_cast<int32_t>(0x0),
		MinValue = static_cast<int32_t>(0x1),
		MaxValue = static_cast<int32_t>(0x2),
		Progress = static_cast<int32_t>(0x3),
		InverseProgress = static_cast<int32_t>(0x4),
	};
}

