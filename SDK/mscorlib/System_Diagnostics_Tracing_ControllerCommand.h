#pragma once
namespace mscorlib::System::Diagnostics::Tracing
{
	enum struct ControllerCommand : int32_t
	{
		Update = static_cast<int32_t>(0x0),
		SendManifest = static_cast<int32_t>(0xFFFFFFFF),
		Enable = static_cast<int32_t>(0xFFFFFFFE),
		Disable = static_cast<int32_t>(0xFFFFFFFD),
	};
}

