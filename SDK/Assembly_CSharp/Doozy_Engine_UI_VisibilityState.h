#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI
{
	enum struct VisibilityState : int32_t
	{
		Visible = static_cast<int32_t>(0x0),
		NotVisible = static_cast<int32_t>(0x1),
		Hiding = static_cast<int32_t>(0x2),
		Showing = static_cast<int32_t>(0x3),
	};
}

