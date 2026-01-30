#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct GraphicsDeviceType : int32_t
	{
		OpenGL2 = static_cast<int32_t>(0x0),
		Direct3D9 = static_cast<int32_t>(0x1),
		Direct3D11 = static_cast<int32_t>(0x2),
		PlayStation3 = static_cast<int32_t>(0x3),
		Null = static_cast<int32_t>(0x4),
		Xbox360 = static_cast<int32_t>(0x6),
		OpenGLES2 = static_cast<int32_t>(0x8),
		OpenGLES3 = static_cast<int32_t>(0xB),
		PlayStationVita = static_cast<int32_t>(0xC),
		PlayStation4 = static_cast<int32_t>(0xD),
		XboxOne = static_cast<int32_t>(0xE),
		PlayStationMobile = static_cast<int32_t>(0xF),
		Metal = static_cast<int32_t>(0x10),
		OpenGLCore = static_cast<int32_t>(0x11),
		Direct3D12 = static_cast<int32_t>(0x12),
		N3DS = static_cast<int32_t>(0x13),
		Vulkan = static_cast<int32_t>(0x15),
		Switch = static_cast<int32_t>(0x16),
		XboxOneD3D12 = static_cast<int32_t>(0x17),
		GameCoreXboxOne = static_cast<int32_t>(0x18),
		GameCoreScarlett = static_cast<int32_t>(0x19),
		GameCoreXboxSeries = static_cast<int32_t>(0x19),
		PlayStation5 = static_cast<int32_t>(0x1A),
		PlayStation5NGGC = static_cast<int32_t>(0x1B),
	};
}

