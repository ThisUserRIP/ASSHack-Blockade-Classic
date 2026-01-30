#pragma once
namespace mscorlib::Microsoft::Win32
{
	enum struct RegistryValueKind : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		String = static_cast<int32_t>(0x1),
		ExpandString = static_cast<int32_t>(0x2),
		Binary = static_cast<int32_t>(0x3),
		DWord = static_cast<int32_t>(0x4),
		MultiString = static_cast<int32_t>(0x7),
		QWord = static_cast<int32_t>(0xB),
		None = static_cast<int32_t>(0xFFFFFFFF),
	};
}

