#pragma once
namespace UnityEngine_SharedInternalsModule::UnityEngine::Bindings
{
	enum struct StaticAccessorType : int32_t
	{
		Dot = static_cast<int32_t>(0x0),
		Arrow = static_cast<int32_t>(0x1),
		DoubleColon = static_cast<int32_t>(0x2),
		ArrowWithDefaultReturnIfNull = static_cast<int32_t>(0x3),
	};
}

