#pragma once
namespace mscorlib::System::IO
{
	enum struct SearchOption : int32_t
	{
		TopDirectoryOnly = static_cast<int32_t>(0x0),
		AllDirectories = static_cast<int32_t>(0x1),
	};
}

