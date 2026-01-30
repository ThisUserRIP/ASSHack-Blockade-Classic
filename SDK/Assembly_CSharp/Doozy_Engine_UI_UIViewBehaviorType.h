#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI
{
	enum struct UIViewBehaviorType : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Show = static_cast<int32_t>(0x1),
		Hide = static_cast<int32_t>(0x2),
		Loop = static_cast<int32_t>(0x3),
	};
}

