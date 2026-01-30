#pragma once
namespace mscorlib::System
{
	enum struct Version_ParseFailureKind : int32_t
	{
		ArgumentNullException = static_cast<int32_t>(0x0),
		ArgumentException = static_cast<int32_t>(0x1),
		ArgumentOutOfRangeException = static_cast<int32_t>(0x2),
		FormatException = static_cast<int32_t>(0x3),
	};
}

