#pragma once
namespace Assembly_CSharp::BestHTTP
{
	enum struct HTTPMethods : uint8_t
	{
		Get = static_cast<uint8_t>(0x0),
		Head = static_cast<uint8_t>(0x1),
		Post = static_cast<uint8_t>(0x2),
		Put = static_cast<uint8_t>(0x3),
		Delete = static_cast<uint8_t>(0x4),
		Patch = static_cast<uint8_t>(0x5),
		Merge = static_cast<uint8_t>(0x6),
		Options = static_cast<uint8_t>(0x7),
	};
}

