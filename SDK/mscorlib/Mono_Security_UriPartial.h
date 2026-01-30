#pragma once
namespace mscorlib::Mono::Security
{
	enum struct UriPartial : int32_t
	{
		Scheme = static_cast<int32_t>(0x0),
		Authority = static_cast<int32_t>(0x1),
		Path = static_cast<int32_t>(0x2),
	};
}

