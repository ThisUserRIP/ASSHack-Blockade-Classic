#pragma once
namespace mscorlib::System
{
	enum struct PlatformID : int32_t
	{
		Win32S = static_cast<int32_t>(0x0),
		Win32Windows = static_cast<int32_t>(0x1),
		Win32NT = static_cast<int32_t>(0x2),
		WinCE = static_cast<int32_t>(0x3),
		Unix = static_cast<int32_t>(0x4),
		Xbox = static_cast<int32_t>(0x5),
		MacOSX = static_cast<int32_t>(0x6),
	};
}

