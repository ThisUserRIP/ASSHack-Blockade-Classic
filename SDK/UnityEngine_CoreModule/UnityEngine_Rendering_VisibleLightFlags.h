#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct VisibleLightFlags : int32_t
	{
		IntersectsNearPlane = static_cast<int32_t>(0x1),
		IntersectsFarPlane = static_cast<int32_t>(0x2),
	};
}

