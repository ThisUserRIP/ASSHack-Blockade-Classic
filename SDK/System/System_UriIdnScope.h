#pragma once
namespace System::System
{
	enum struct UriIdnScope : int32_t
	{
		None = static_cast<int32_t>(0x0),
		AllExceptIntranet = static_cast<int32_t>(0x1),
		All = static_cast<int32_t>(0x2),
	};
}

