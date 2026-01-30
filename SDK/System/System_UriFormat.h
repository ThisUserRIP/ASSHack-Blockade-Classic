#pragma once
namespace System::System
{
	enum struct UriFormat : int32_t
	{
		UriEscaped = static_cast<int32_t>(0x1),
		Unescaped = static_cast<int32_t>(0x2),
		SafeUnescaped = static_cast<int32_t>(0x3),
	};
}

