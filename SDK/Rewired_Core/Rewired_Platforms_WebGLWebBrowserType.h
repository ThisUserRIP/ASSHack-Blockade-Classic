#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct WebGLWebBrowserType : int32_t
	{
		Unknown = static_cast<int32_t>(0xFFFFFFFF),
		None = static_cast<int32_t>(0x0),
		Chrome = static_cast<int32_t>(0x1),
		Firefox = static_cast<int32_t>(0x2),
		Opera = static_cast<int32_t>(0x3),
		Safari = static_cast<int32_t>(0x4),
		InternetExplorer = static_cast<int32_t>(0x5),
		Edge = static_cast<int32_t>(0x6),
	};
}

