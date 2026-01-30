#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct LogType : int32_t
	{
		Error = static_cast<int32_t>(0x0),
		Assert = static_cast<int32_t>(0x1),
		Warning = static_cast<int32_t>(0x2),
		Log = static_cast<int32_t>(0x3),
		Exception = static_cast<int32_t>(0x4),
	};
}

