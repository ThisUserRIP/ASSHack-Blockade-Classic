#pragma once
namespace Assembly_CSharp::com::playGenesis::VkUnityPlugin::MiniJSON
{
	enum struct Json_Parser_TOKEN : int32_t
	{
		NONE = static_cast<int32_t>(0x0),
		CURLY_OPEN = static_cast<int32_t>(0x1),
		CURLY_CLOSE = static_cast<int32_t>(0x2),
		SQUARED_OPEN = static_cast<int32_t>(0x3),
		SQUARED_CLOSE = static_cast<int32_t>(0x4),
		COLON = static_cast<int32_t>(0x5),
		COMMA = static_cast<int32_t>(0x6),
		STRING = static_cast<int32_t>(0x7),
		NUMBER = static_cast<int32_t>(0x8),
		TRUE_ = static_cast<int32_t>(0x9),
		FALSE_ = static_cast<int32_t>(0xA),
		NULL_ = static_cast<int32_t>(0xB),
	};
}

