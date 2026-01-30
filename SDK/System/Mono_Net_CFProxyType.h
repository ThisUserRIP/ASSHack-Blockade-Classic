#pragma once
namespace System::Mono::Net
{
	enum struct CFProxyType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		AutoConfigurationUrl = static_cast<int32_t>(0x1),
		AutoConfigurationJavaScript = static_cast<int32_t>(0x2),
		FTP = static_cast<int32_t>(0x3),
		HTTP = static_cast<int32_t>(0x4),
		HTTPS = static_cast<int32_t>(0x5),
		SOCKS = static_cast<int32_t>(0x6),
	};
}

