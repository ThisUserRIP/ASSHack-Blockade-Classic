#pragma once
namespace Assembly_CSharp::LitJson
{
	enum struct JsonToken : int32_t
	{
		None = static_cast<int32_t>(0x0),
		ObjectStart = static_cast<int32_t>(0x1),
		PropertyName = static_cast<int32_t>(0x2),
		ObjectEnd = static_cast<int32_t>(0x3),
		ArrayStart = static_cast<int32_t>(0x4),
		ArrayEnd = static_cast<int32_t>(0x5),
		Int = static_cast<int32_t>(0x6),
		Long = static_cast<int32_t>(0x7),
		Double = static_cast<int32_t>(0x8),
		String = static_cast<int32_t>(0x9),
		Boolean = static_cast<int32_t>(0xA),
		Null = static_cast<int32_t>(0xB),
	};
}

