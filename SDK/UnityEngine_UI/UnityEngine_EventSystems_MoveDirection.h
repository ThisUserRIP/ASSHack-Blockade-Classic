#pragma once
namespace UnityEngine_UI::UnityEngine::EventSystems
{
	enum struct MoveDirection : int32_t
	{
		Left = static_cast<int32_t>(0x0),
		Up = static_cast<int32_t>(0x1),
		Right = static_cast<int32_t>(0x2),
		Down = static_cast<int32_t>(0x3),
		None = static_cast<int32_t>(0x4),
	};
}

