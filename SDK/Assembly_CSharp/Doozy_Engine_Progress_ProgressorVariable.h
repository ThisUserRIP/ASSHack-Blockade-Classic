#pragma once
namespace Assembly_CSharp::Doozy::Engine::Progress
{
	enum struct ProgressorVariable : int32_t
	{
		Value = static_cast<int32_t>(0x0),
		Progress = static_cast<int32_t>(0x1),
		InverseProgress = static_cast<int32_t>(0x2),
	};
}

