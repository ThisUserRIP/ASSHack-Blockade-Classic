#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI
{
	enum struct UIDrawerBehaviorType : int32_t
	{
		Open = static_cast<int32_t>(0x0),
		Close = static_cast<int32_t>(0x1),
		Drag = static_cast<int32_t>(0x2),
	};
}

