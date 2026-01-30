#pragma once
namespace mscorlib::System::Runtime::InteropServices
{
	enum struct CharSet : int32_t
	{
		None = static_cast<int32_t>(0x1),
		Ansi = static_cast<int32_t>(0x2),
		Unicode = static_cast<int32_t>(0x3),
		Auto = static_cast<int32_t>(0x4),
	};
}

