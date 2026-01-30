#pragma once
namespace Assembly_CSharp::Doozy::Engine
{
	enum struct SetupMode : int32_t
	{
		Basic = static_cast<int32_t>(0x0),
		Touch = static_cast<int32_t>(0x1),
		Mouse = static_cast<int32_t>(0x2),
		Controller = static_cast<int32_t>(0x3),
		VR = static_cast<int32_t>(0x4),
		Advanced = static_cast<int32_t>(0x5),
	};
}

