#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct FieldPacking : int32_t
	{
		NoPacking = static_cast<int32_t>(0x0),
		R11G11B10 = static_cast<int32_t>(0x1),
		PackedFloat = static_cast<int32_t>(0x2),
		PackedUint = static_cast<int32_t>(0x3),
	};
}

