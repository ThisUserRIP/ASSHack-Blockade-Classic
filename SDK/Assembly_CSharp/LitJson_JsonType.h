#pragma once
namespace Assembly_CSharp::LitJson
{
	enum struct JsonType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Object = static_cast<int32_t>(0x1),
		Array = static_cast<int32_t>(0x2),
		String = static_cast<int32_t>(0x3),
		Int = static_cast<int32_t>(0x4),
		Long = static_cast<int32_t>(0x5),
		Double = static_cast<int32_t>(0x6),
		Boolean = static_cast<int32_t>(0x7),
	};
}

