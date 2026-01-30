#pragma once
namespace UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe
{
	enum struct AssetLoadingSubsystem : int32_t
	{
		Other = static_cast<int32_t>(0x0),
		Texture = static_cast<int32_t>(0x1),
		VirtualTexture = static_cast<int32_t>(0x2),
		Mesh = static_cast<int32_t>(0x3),
		Audio = static_cast<int32_t>(0x4),
		Scripts = static_cast<int32_t>(0x5),
		EntitiesScene = static_cast<int32_t>(0x6),
		EntitiesStreamBinaryReader = static_cast<int32_t>(0x7),
	};
}

