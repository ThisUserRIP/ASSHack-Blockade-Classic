#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct BuiltinRenderTextureType : int32_t
	{
		PropertyName = static_cast<int32_t>(0xFFFFFFFC),
		BufferPtr = static_cast<int32_t>(0xFFFFFFFD),
		RenderTexture = static_cast<int32_t>(0xFFFFFFFE),
		BindableTexture = static_cast<int32_t>(0xFFFFFFFF),
		None = static_cast<int32_t>(0x0),
		CurrentActive = static_cast<int32_t>(0x1),
		CameraTarget = static_cast<int32_t>(0x2),
		Depth = static_cast<int32_t>(0x3),
		DepthNormals = static_cast<int32_t>(0x4),
		ResolvedDepth = static_cast<int32_t>(0x5),
		PrepassNormalsSpec = static_cast<int32_t>(0x7),
		PrepassLight = static_cast<int32_t>(0x8),
		PrepassLightSpec = static_cast<int32_t>(0x9),
		GBuffer0 = static_cast<int32_t>(0xA),
		GBuffer1 = static_cast<int32_t>(0xB),
		GBuffer2 = static_cast<int32_t>(0xC),
		GBuffer3 = static_cast<int32_t>(0xD),
		Reflections = static_cast<int32_t>(0xE),
		MotionVectors = static_cast<int32_t>(0xF),
		GBuffer4 = static_cast<int32_t>(0x10),
		GBuffer5 = static_cast<int32_t>(0x11),
		GBuffer6 = static_cast<int32_t>(0x12),
		GBuffer7 = static_cast<int32_t>(0x13),
	};
}

