#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct CursorLockMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Locked = static_cast<int32_t>(0x1),
		Confined = static_cast<int32_t>(0x2),
	};
}

