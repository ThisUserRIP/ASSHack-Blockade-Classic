#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI::Connections
{
	enum struct UIConnectionTrigger : int32_t
	{
		ButtonClick = static_cast<int32_t>(0x0),
		ButtonDoubleClick = static_cast<int32_t>(0x1),
		ButtonLongClick = static_cast<int32_t>(0x2),
		GameEvent = static_cast<int32_t>(0x3),
		TimeDelay = static_cast<int32_t>(0x4),
	};
}

