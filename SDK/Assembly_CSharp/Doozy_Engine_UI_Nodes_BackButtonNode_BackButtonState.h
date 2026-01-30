#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	enum struct BackButtonNode_BackButtonState : int32_t
	{
		Disable = static_cast<int32_t>(0x0),
		Enable = static_cast<int32_t>(0x1),
		EnableByForce = static_cast<int32_t>(0x2),
	};
}

