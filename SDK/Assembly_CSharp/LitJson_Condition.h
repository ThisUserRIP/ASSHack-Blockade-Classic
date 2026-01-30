#pragma once
namespace Assembly_CSharp::LitJson
{
	enum struct Condition : int32_t
	{
		InArray = static_cast<int32_t>(0x0),
		InObject = static_cast<int32_t>(0x1),
		NotAProperty = static_cast<int32_t>(0x2),
		Property = static_cast<int32_t>(0x3),
		Value = static_cast<int32_t>(0x4),
	};
}

