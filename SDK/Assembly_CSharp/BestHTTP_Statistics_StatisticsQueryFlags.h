#pragma once
namespace Assembly_CSharp::BestHTTP::Statistics
{
	enum struct StatisticsQueryFlags : uint8_t
	{
		Connections = static_cast<uint8_t>(0x1),
		Cache = static_cast<uint8_t>(0x2),
		Cookies = static_cast<uint8_t>(0x4),
		All = static_cast<uint8_t>(0xFF),
	};
}

