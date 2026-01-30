#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	enum struct WaitNode_WaitType : int32_t
	{
		Time = static_cast<int32_t>(0x0),
		GameEvent = static_cast<int32_t>(0x1),
		SceneLoad = static_cast<int32_t>(0x2),
		SceneUnload = static_cast<int32_t>(0x3),
		ActiveSceneChange = static_cast<int32_t>(0x4),
		UIView = static_cast<int32_t>(0x5),
		UIButton = static_cast<int32_t>(0x6),
		UIDrawer = static_cast<int32_t>(0x7),
	};
}

