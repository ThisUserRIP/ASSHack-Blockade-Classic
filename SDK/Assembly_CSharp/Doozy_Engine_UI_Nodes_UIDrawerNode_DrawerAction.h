#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	enum struct UIDrawerNode_DrawerAction : int32_t
	{
		Open = static_cast<int32_t>(0x0),
		Close = static_cast<int32_t>(0x1),
		Toggle = static_cast<int32_t>(0x2),
	};
}

