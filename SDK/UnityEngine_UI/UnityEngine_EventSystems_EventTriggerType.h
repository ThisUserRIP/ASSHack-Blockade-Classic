#pragma once
namespace UnityEngine_UI::UnityEngine::EventSystems
{
	enum struct EventTriggerType : int32_t
	{
		PointerEnter = static_cast<int32_t>(0x0),
		PointerExit = static_cast<int32_t>(0x1),
		PointerDown = static_cast<int32_t>(0x2),
		PointerUp = static_cast<int32_t>(0x3),
		PointerClick = static_cast<int32_t>(0x4),
		Drag = static_cast<int32_t>(0x5),
		Drop = static_cast<int32_t>(0x6),
		Scroll = static_cast<int32_t>(0x7),
		UpdateSelected = static_cast<int32_t>(0x8),
		Select = static_cast<int32_t>(0x9),
		Deselect = static_cast<int32_t>(0xA),
		Move = static_cast<int32_t>(0xB),
		InitializePotentialDrag = static_cast<int32_t>(0xC),
		BeginDrag = static_cast<int32_t>(0xD),
		EndDrag = static_cast<int32_t>(0xE),
		Submit = static_cast<int32_t>(0xF),
		Cancel = static_cast<int32_t>(0x10),
	};
}

