#pragma once
namespace mscorlib::System::IO
{
	enum struct MonoFileType : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Disk = static_cast<int32_t>(0x1),
		Char = static_cast<int32_t>(0x2),
		Pipe = static_cast<int32_t>(0x3),
		Remote = static_cast<int32_t>(0x8000),
	};
}

