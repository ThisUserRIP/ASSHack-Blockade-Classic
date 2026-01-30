#pragma once
namespace System::System::Net::Configuration
{
	enum struct UnicodeEncodingConformance : int32_t
	{
		Auto = static_cast<int32_t>(0x0),
		Strict = static_cast<int32_t>(0x1),
		Compat = static_cast<int32_t>(0x2),
	};
}

