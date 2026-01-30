#pragma once
namespace mscorlib::System::IO
{
	enum struct FileAttributes : int32_t
	{
		Archive = static_cast<int32_t>(0x20),
		Compressed = static_cast<int32_t>(0x800),
		Device = static_cast<int32_t>(0x40),
		Directory = static_cast<int32_t>(0x10),
		Encrypted = static_cast<int32_t>(0x4000),
		Hidden = static_cast<int32_t>(0x2),
		Normal = static_cast<int32_t>(0x80),
		NotContentIndexed = static_cast<int32_t>(0x2000),
		Offline = static_cast<int32_t>(0x1000),
		ReadOnly = static_cast<int32_t>(0x1),
		ReparsePoint = static_cast<int32_t>(0x400),
		SparseFile = static_cast<int32_t>(0x200),
		System = static_cast<int32_t>(0x4),
		Temporary = static_cast<int32_t>(0x100),
		IntegrityStream = static_cast<int32_t>(0x8000),
		NoScrubData = static_cast<int32_t>(0x20000),
	};
}

