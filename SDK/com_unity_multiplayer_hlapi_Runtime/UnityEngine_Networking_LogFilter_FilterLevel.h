#pragma once
namespace com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking
{
	enum struct LogFilter_FilterLevel : int32_t
	{
		Developer = static_cast<int32_t>(0x0),
		Debug = static_cast<int32_t>(0x1),
		Info = static_cast<int32_t>(0x2),
		Warn = static_cast<int32_t>(0x3),
		Error = static_cast<int32_t>(0x4),
		Fatal = static_cast<int32_t>(0x5),
		SetInScripting = static_cast<int32_t>(0xFFFFFFFF),
	};
}

