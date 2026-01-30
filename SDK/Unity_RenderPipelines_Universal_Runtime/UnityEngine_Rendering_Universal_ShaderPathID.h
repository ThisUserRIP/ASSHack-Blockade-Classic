#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct ShaderPathID : int32_t
	{
		Lit = static_cast<int32_t>(0x0),
		SimpleLit = static_cast<int32_t>(0x1),
		Unlit = static_cast<int32_t>(0x2),
		TerrainLit = static_cast<int32_t>(0x3),
		ParticlesLit = static_cast<int32_t>(0x4),
		ParticlesSimpleLit = static_cast<int32_t>(0x5),
		ParticlesUnlit = static_cast<int32_t>(0x6),
		BakedLit = static_cast<int32_t>(0x7),
		SpeedTree7 = static_cast<int32_t>(0x8),
		SpeedTree7Billboard = static_cast<int32_t>(0x9),
		SpeedTree8 = static_cast<int32_t>(0xA),
	};
}

