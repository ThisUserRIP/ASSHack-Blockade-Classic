#pragma once
namespace mscorlib::System::IO
{
	enum struct FileAccess : int32_t
	{
		Read = static_cast<int32_t>(0x1),
		Write = static_cast<int32_t>(0x2),
		ReadWrite = static_cast<int32_t>(0x3),
	};
}

