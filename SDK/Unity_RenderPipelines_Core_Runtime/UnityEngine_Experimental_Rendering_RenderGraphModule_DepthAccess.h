#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	enum struct DepthAccess : int32_t
	{
		Read = static_cast<int32_t>(0x1),
		Write = static_cast<int32_t>(0x2),
		ReadWrite = static_cast<int32_t>(0x3),
	};
}

