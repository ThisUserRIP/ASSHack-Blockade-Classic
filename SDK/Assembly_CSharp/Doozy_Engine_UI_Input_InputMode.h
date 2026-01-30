#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI::Input
{
	enum struct InputMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		KeyCode = static_cast<int32_t>(0x1),
		VirtualButton = static_cast<int32_t>(0x2),
	};
}

