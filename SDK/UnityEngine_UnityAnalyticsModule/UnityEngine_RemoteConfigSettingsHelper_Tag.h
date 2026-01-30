#pragma once
namespace UnityEngine_UnityAnalyticsModule::UnityEngine
{
	enum struct RemoteConfigSettingsHelper_Tag : int32_t
	{
		kUnknown = static_cast<int32_t>(0x0),
		kIntVal = static_cast<int32_t>(0x1),
		kInt64Val = static_cast<int32_t>(0x2),
		kUInt64Val = static_cast<int32_t>(0x3),
		kDoubleVal = static_cast<int32_t>(0x4),
		kBoolVal = static_cast<int32_t>(0x5),
		kStringVal = static_cast<int32_t>(0x6),
		kArrayVal = static_cast<int32_t>(0x7),
		kMixedArrayVal = static_cast<int32_t>(0x8),
		kMapVal = static_cast<int32_t>(0x9),
		kMaxTags = static_cast<int32_t>(0xA),
	};
}

