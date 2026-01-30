#pragma once
namespace mscorlib::System::IO
{
	enum struct FileMode : int32_t
	{
		CreateNew = static_cast<int32_t>(0x1),
		Create = static_cast<int32_t>(0x2),
		Open = static_cast<int32_t>(0x3),
		OpenOrCreate = static_cast<int32_t>(0x4),
		Truncate = static_cast<int32_t>(0x5),
		Append = static_cast<int32_t>(0x6),
	};
}

