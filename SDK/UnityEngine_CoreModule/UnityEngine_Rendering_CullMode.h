#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct CullMode : int32_t
	{
		Off = static_cast<int32_t>(0x0),
		Front = static_cast<int32_t>(0x1),
		Back = static_cast<int32_t>(0x2),
	};
}

