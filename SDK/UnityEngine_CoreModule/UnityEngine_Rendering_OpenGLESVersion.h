#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct OpenGLESVersion : int32_t
	{
		None = static_cast<int32_t>(0x0),
		OpenGLES20 = static_cast<int32_t>(0x1),
		OpenGLES30 = static_cast<int32_t>(0x2),
		OpenGLES31 = static_cast<int32_t>(0x3),
		OpenGLES31AEP = static_cast<int32_t>(0x4),
		OpenGLES32 = static_cast<int32_t>(0x5),
	};
}

