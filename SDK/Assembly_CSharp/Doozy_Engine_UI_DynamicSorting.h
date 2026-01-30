#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI
{
	enum struct DynamicSorting : int32_t
	{
		Disabled = static_cast<int32_t>(0x0),
		InFront = static_cast<int32_t>(0x1),
		Behind = static_cast<int32_t>(0x2),
		Custom = static_cast<int32_t>(0x3),
	};
}

