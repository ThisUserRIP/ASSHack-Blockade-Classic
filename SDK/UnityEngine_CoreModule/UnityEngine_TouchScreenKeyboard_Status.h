#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct TouchScreenKeyboard_Status : int32_t
	{
		Visible = static_cast<int32_t>(0x0),
		Done = static_cast<int32_t>(0x1),
		Canceled = static_cast<int32_t>(0x2),
		LostFocus = static_cast<int32_t>(0x3),
	};
}

