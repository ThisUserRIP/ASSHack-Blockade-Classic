#pragma once
namespace mscorlib::System
{
	enum struct DTSubStringType : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Invalid = static_cast<int32_t>(0x1),
		Number = static_cast<int32_t>(0x2),
		End = static_cast<int32_t>(0x3),
		Other = static_cast<int32_t>(0x4),
	};
}

