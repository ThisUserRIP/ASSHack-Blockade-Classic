#pragma once
namespace mscorlib::System
{
	enum struct Guid_GuidParseThrowStyle : int32_t
	{
		None = static_cast<int32_t>(0x0),
		All = static_cast<int32_t>(0x1),
		AllButOverflow = static_cast<int32_t>(0x2),
	};
}

