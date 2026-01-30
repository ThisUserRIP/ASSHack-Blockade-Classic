#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Experimental::Rendering
{
	enum struct TextureCreationFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		MipChain = static_cast<int32_t>(0x1),
		Crunch = static_cast<int32_t>(0x40),
	};
}

