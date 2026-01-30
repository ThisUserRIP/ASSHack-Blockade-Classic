#pragma once
namespace mscorlib::Microsoft::Win32
{
	enum struct UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS : int32_t
	{
		BinaryTrackInfo = static_cast<int32_t>(0x0),
		SetEnableAllKeywords = static_cast<int32_t>(0x1),
		SetTraits = static_cast<int32_t>(0x2),
	};
}

