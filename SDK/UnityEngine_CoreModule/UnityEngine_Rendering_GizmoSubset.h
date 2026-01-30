#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct GizmoSubset : int32_t
	{
		PreImageEffects = static_cast<int32_t>(0x0),
		PostImageEffects = static_cast<int32_t>(0x1),
	};
}

