#pragma once
namespace Assembly_CSharp::Doozy::Engine::Progress
{
	enum struct CompareType : int32_t
	{
		Between = static_cast<int32_t>(0x0),
		NotBetween = static_cast<int32_t>(0x1),
		EqualTo = static_cast<int32_t>(0x2),
		NotEqualTo = static_cast<int32_t>(0x3),
		GreaterThan = static_cast<int32_t>(0x4),
		LessThan = static_cast<int32_t>(0x5),
		GreaterThanOrEqualTo = static_cast<int32_t>(0x6),
		LessThanOrEqualTo = static_cast<int32_t>(0x7),
	};
}

