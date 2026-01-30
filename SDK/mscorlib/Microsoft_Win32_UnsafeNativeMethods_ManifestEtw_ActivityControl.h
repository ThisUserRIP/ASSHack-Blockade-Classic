#pragma once
namespace mscorlib::Microsoft::Win32
{
	enum struct UnsafeNativeMethods_ManifestEtw_ActivityControl : uint32_t
	{
		EVENT_ACTIVITY_CTRL_GET_ID = static_cast<uint32_t>(0x1),
		EVENT_ACTIVITY_CTRL_SET_ID = static_cast<uint32_t>(0x2),
		EVENT_ACTIVITY_CTRL_CREATE_ID = static_cast<uint32_t>(0x3),
		EVENT_ACTIVITY_CTRL_GET_SET_ID = static_cast<uint32_t>(0x4),
		EVENT_ACTIVITY_CTRL_CREATE_SET_ID = static_cast<uint32_t>(0x5),
	};
}

