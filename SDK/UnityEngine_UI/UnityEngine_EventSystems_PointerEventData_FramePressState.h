#pragma once
namespace UnityEngine_UI::UnityEngine::EventSystems
{
	enum struct PointerEventData_FramePressState : int32_t
	{
		Pressed = static_cast<int32_t>(0x0),
		Released = static_cast<int32_t>(0x1),
		PressedAndReleased = static_cast<int32_t>(0x2),
		NotChanged = static_cast<int32_t>(0x3),
	};
}

