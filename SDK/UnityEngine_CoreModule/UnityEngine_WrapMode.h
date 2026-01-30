#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct WrapMode : int32_t
	{
		Once = static_cast<int32_t>(0x1),
		Loop = static_cast<int32_t>(0x2),
		PingPong = static_cast<int32_t>(0x4),
		Default = static_cast<int32_t>(0x0),
		ClampForever = static_cast<int32_t>(0x8),
		Clamp = static_cast<int32_t>(0x1),
	};
}

