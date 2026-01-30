#pragma once
namespace Assembly_CSharp::BestHTTP::Logger
{
	enum struct Loglevels : uint8_t
	{
		All = static_cast<uint8_t>(0x0),
		Information = static_cast<uint8_t>(0x1),
		Warning = static_cast<uint8_t>(0x2),
		Error = static_cast<uint8_t>(0x3),
		Exception = static_cast<uint8_t>(0x4),
		None = static_cast<uint8_t>(0x5),
	};
}

