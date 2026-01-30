#pragma once
namespace UnityEngine_IMGUIModule::UnityEngine
{
	enum struct EventModifiers : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Shift = static_cast<int32_t>(0x1),
		Control = static_cast<int32_t>(0x2),
		Alt = static_cast<int32_t>(0x4),
		Command = static_cast<int32_t>(0x8),
		Numeric = static_cast<int32_t>(0x10),
		CapsLock = static_cast<int32_t>(0x20),
		FunctionKey = static_cast<int32_t>(0x40),
	};
}

