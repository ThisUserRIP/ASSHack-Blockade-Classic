#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct HideFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		HideInHierarchy = static_cast<int32_t>(0x1),
		HideInInspector = static_cast<int32_t>(0x2),
		DontSaveInEditor = static_cast<int32_t>(0x4),
		NotEditable = static_cast<int32_t>(0x8),
		DontSaveInBuild = static_cast<int32_t>(0x10),
		DontUnloadUnusedAsset = static_cast<int32_t>(0x20),
		DontSave = static_cast<int32_t>(0x34),
		HideAndDontSave = static_cast<int32_t>(0x3D),
	};
}

