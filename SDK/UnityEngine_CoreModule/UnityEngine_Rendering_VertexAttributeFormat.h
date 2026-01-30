#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct VertexAttributeFormat : int32_t
	{
		Float32 = static_cast<int32_t>(0x0),
		Float16 = static_cast<int32_t>(0x1),
		UNorm8 = static_cast<int32_t>(0x2),
		SNorm8 = static_cast<int32_t>(0x3),
		UNorm16 = static_cast<int32_t>(0x4),
		SNorm16 = static_cast<int32_t>(0x5),
		UInt8 = static_cast<int32_t>(0x6),
		SInt8 = static_cast<int32_t>(0x7),
		UInt16 = static_cast<int32_t>(0x8),
		SInt16 = static_cast<int32_t>(0x9),
		UInt32 = static_cast<int32_t>(0xA),
		SInt32 = static_cast<int32_t>(0xB),
	};
}

