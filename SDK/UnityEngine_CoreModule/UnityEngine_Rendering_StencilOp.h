#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct StencilOp : int32_t
	{
		Keep = static_cast<int32_t>(0x0),
		Zero = static_cast<int32_t>(0x1),
		Replace = static_cast<int32_t>(0x2),
		IncrementSaturate = static_cast<int32_t>(0x3),
		DecrementSaturate = static_cast<int32_t>(0x4),
		Invert = static_cast<int32_t>(0x5),
		IncrementWrap = static_cast<int32_t>(0x6),
		DecrementWrap = static_cast<int32_t>(0x7),
	};
}

