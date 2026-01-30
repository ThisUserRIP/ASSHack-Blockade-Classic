#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	enum struct WindingRule : int32_t
	{
		EvenOdd = static_cast<int32_t>(0x0),
		NonZero = static_cast<int32_t>(0x1),
		Positive = static_cast<int32_t>(0x2),
		Negative = static_cast<int32_t>(0x3),
		AbsGeqTwo = static_cast<int32_t>(0x4),
	};
}

