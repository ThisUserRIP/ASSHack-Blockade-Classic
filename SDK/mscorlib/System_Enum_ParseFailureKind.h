#pragma once
namespace mscorlib::System
{
	enum struct Enum_ParseFailureKind : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Argument = static_cast<int32_t>(0x1),
		ArgumentNull = static_cast<int32_t>(0x2),
		ArgumentWithParameter = static_cast<int32_t>(0x3),
		UnhandledException = static_cast<int32_t>(0x4),
	};
}

