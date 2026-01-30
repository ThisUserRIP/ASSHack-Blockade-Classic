#pragma once
namespace UnityEngine_UI::UnityEngine::UI
{
	enum struct CanvasUpdate : int32_t
	{
		Prelayout = static_cast<int32_t>(0x0),
		Layout = static_cast<int32_t>(0x1),
		PostLayout = static_cast<int32_t>(0x2),
		PreRender = static_cast<int32_t>(0x3),
		LatePreRender = static_cast<int32_t>(0x4),
		MaxUpdateValue = static_cast<int32_t>(0x5),
	};
}

