#pragma once
namespace System::System
{
	enum struct UriKind : int32_t
	{
		RelativeOrAbsolute = static_cast<int32_t>(0x0),
		Absolute = static_cast<int32_t>(0x1),
		Relative = static_cast<int32_t>(0x2),
	};
}

