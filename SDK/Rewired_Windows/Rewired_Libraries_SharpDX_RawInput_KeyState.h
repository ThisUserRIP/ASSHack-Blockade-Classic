#pragma once
namespace Rewired_Windows::Rewired::Libraries::SharpDX::RawInput
{
	enum struct KeyState : int32_t
	{
		VirtualKeyToItem = static_cast<int32_t>(0x2E),
		SetHotKey = static_cast<int32_t>(0x32),
		GetHotKey = static_cast<int32_t>(0x33),
		KeyFirst = static_cast<int32_t>(0x100),
		KeyDown = static_cast<int32_t>(0x100),
		KeyUp = static_cast<int32_t>(0x101),
		SystemKeyDown = static_cast<int32_t>(0x104),
		SystemKeyUp = static_cast<int32_t>(0x105),
		KeyLast = static_cast<int32_t>(0x109),
		ImeKeyLast = static_cast<int32_t>(0x10F),
		ImeKeyDown = static_cast<int32_t>(0x290),
		ImeKeyUp = static_cast<int32_t>(0x291),
		HotKey = static_cast<int32_t>(0x312),
	};
}

