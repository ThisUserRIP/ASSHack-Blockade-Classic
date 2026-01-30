#pragma once
namespace System::System::Net::Configuration
{
	enum struct UnicodeDecodingConformance : int32_t
	{
		Auto = static_cast<int32_t>(0x0),
		Strict = static_cast<int32_t>(0x1),
		Compat = static_cast<int32_t>(0x2),
		Loose = static_cast<int32_t>(0x3),
	};
}

