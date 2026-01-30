#pragma once
namespace mscorlib::System::Diagnostics::Tracing
{
	enum struct EventChannel : uint8_t
	{
		None = static_cast<uint8_t>(0x0),
		Admin = static_cast<uint8_t>(0x10),
		Operational = static_cast<uint8_t>(0x11),
		Analytic = static_cast<uint8_t>(0x12),
		Debug = static_cast<uint8_t>(0x13),
	};
}

