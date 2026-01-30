#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct FieldPrecision : int32_t
	{
		Half = static_cast<int32_t>(0x0),
		Real = static_cast<int32_t>(0x1),
		Default = static_cast<int32_t>(0x2),
	};
}

