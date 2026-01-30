#pragma once
namespace Mono_Security::Mono::Security::Interface
{
	enum struct AlertLevel : uint8_t
	{
		Warning = static_cast<uint8_t>(0x1),
		Fatal = static_cast<uint8_t>(0x2),
	};
}

