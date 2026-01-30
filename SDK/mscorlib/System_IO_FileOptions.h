#pragma once
namespace mscorlib::System::IO
{
	enum struct FileOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Encrypted = static_cast<int32_t>(0x4000),
		DeleteOnClose = static_cast<int32_t>(0x4000000),
		SequentialScan = static_cast<int32_t>(0x8000000),
		RandomAccess = static_cast<int32_t>(0x10000000),
		Asynchronous = static_cast<int32_t>(0x40000000),
		WriteThrough = static_cast<int32_t>(0x80000000),
	};
}

