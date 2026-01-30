#pragma once
namespace Assembly_CSharp::Doozy::Engine
{
	enum struct SystemGameEvent : int32_t
	{
		ActivateLoadedScenes = static_cast<int32_t>(0x0),
		ApplicationQuit = static_cast<int32_t>(0x1),
		Back = static_cast<int32_t>(0x2),
	};
}

