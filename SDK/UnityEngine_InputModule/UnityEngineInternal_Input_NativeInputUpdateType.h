#pragma once
namespace UnityEngine_InputModule::UnityEngineInternal::Input
{
	enum struct NativeInputUpdateType : int32_t
	{
		Dynamic = static_cast<int32_t>(0x1),
		Fixed = static_cast<int32_t>(0x2),
		BeforeRender = static_cast<int32_t>(0x4),
		Editor = static_cast<int32_t>(0x8),
		IgnoreFocus = static_cast<int32_t>(0x80000000),
	};
}

