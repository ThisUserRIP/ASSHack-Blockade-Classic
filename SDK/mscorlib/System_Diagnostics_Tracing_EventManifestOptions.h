#pragma once
namespace mscorlib::System::Diagnostics::Tracing
{
	enum struct EventManifestOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Strict = static_cast<int32_t>(0x1),
		AllCultures = static_cast<int32_t>(0x2),
		OnlyIfNeededForRegistration = static_cast<int32_t>(0x4),
		AllowEventSourceOverride = static_cast<int32_t>(0x8),
	};
}

