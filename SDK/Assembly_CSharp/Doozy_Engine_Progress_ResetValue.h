#pragma once
namespace Assembly_CSharp::Doozy::Engine::Progress
{
	enum struct ResetValue : int32_t
	{
		Disabled = static_cast<int32_t>(0x0),
		ToMinValue = static_cast<int32_t>(0x1),
		ToMaxValue = static_cast<int32_t>(0x2),
		ToCustomValue = static_cast<int32_t>(0x3),
	};
}

