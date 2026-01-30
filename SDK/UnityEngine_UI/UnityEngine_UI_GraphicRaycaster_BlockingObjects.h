#pragma once
namespace UnityEngine_UI::UnityEngine::UI
{
	enum struct GraphicRaycaster_BlockingObjects : int32_t
	{
		None = static_cast<int32_t>(0x0),
		TwoD = static_cast<int32_t>(0x1),
		ThreeD = static_cast<int32_t>(0x2),
		All = static_cast<int32_t>(0x3),
	};
}

