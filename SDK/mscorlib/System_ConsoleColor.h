#pragma once
namespace mscorlib::System
{
	enum struct ConsoleColor : int32_t
	{
		Black = static_cast<int32_t>(0x0),
		DarkBlue = static_cast<int32_t>(0x1),
		DarkGreen = static_cast<int32_t>(0x2),
		DarkCyan = static_cast<int32_t>(0x3),
		DarkRed = static_cast<int32_t>(0x4),
		DarkMagenta = static_cast<int32_t>(0x5),
		DarkYellow = static_cast<int32_t>(0x6),
		Gray = static_cast<int32_t>(0x7),
		DarkGray = static_cast<int32_t>(0x8),
		Blue = static_cast<int32_t>(0x9),
		Green = static_cast<int32_t>(0xA),
		Cyan = static_cast<int32_t>(0xB),
		Red = static_cast<int32_t>(0xC),
		Magenta = static_cast<int32_t>(0xD),
		Yellow = static_cast<int32_t>(0xE),
		White = static_cast<int32_t>(0xF),
	};
}

