#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct ComputeBufferType : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		Raw = static_cast<int32_t>(0x1),
		Append = static_cast<int32_t>(0x2),
		Counter = static_cast<int32_t>(0x4),
		Constant = static_cast<int32_t>(0x8),
		Structured = static_cast<int32_t>(0x10),
		DrawIndirect = static_cast<int32_t>(0x100),
		IndirectArguments = static_cast<int32_t>(0x100),
		GPUMemory = static_cast<int32_t>(0x200),
	};
}

