#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	enum struct PortalNode_ListenerType : int32_t
	{
		GameEvent = static_cast<int32_t>(0x0),
		UIButton = static_cast<int32_t>(0x1),
		UIView = static_cast<int32_t>(0x2),
		UIDrawer = static_cast<int32_t>(0x3),
	};
}

