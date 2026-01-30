#pragma once
namespace mscorlib::System::IO
{
	enum struct FileShare : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Read = static_cast<int32_t>(0x1),
		Write = static_cast<int32_t>(0x2),
		ReadWrite = static_cast<int32_t>(0x3),
		Delete = static_cast<int32_t>(0x4),
		Inheritable = static_cast<int32_t>(0x10),
	};
}

