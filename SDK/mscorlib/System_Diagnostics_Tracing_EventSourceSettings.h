#pragma once
namespace mscorlib::System::Diagnostics::Tracing
{
	enum struct EventSourceSettings : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		ThrowOnEventWriteErrors = static_cast<int32_t>(0x1),
		EtwManifestEventFormat = static_cast<int32_t>(0x4),
		EtwSelfDescribingEventFormat = static_cast<int32_t>(0x8),
	};
}

