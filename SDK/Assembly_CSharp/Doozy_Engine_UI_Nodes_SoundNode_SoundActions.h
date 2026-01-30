#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	enum struct SoundNode_SoundActions : int32_t
	{
		Play = static_cast<int32_t>(0x0),
		Stop = static_cast<int32_t>(0x1),
		Pause = static_cast<int32_t>(0x2),
		Unpause = static_cast<int32_t>(0x3),
		Mute = static_cast<int32_t>(0x4),
		Unmute = static_cast<int32_t>(0x5),
	};
}

