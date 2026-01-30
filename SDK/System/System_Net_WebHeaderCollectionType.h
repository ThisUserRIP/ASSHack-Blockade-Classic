#pragma once
namespace System::System::Net
{
	enum struct WebHeaderCollectionType : uint16_t
	{
		Unknown = static_cast<uint16_t>(0x0),
		WebRequest = static_cast<uint16_t>(0x1),
		WebResponse = static_cast<uint16_t>(0x2),
		HttpWebRequest = static_cast<uint16_t>(0x3),
		HttpWebResponse = static_cast<uint16_t>(0x4),
		HttpListenerRequest = static_cast<uint16_t>(0x5),
		HttpListenerResponse = static_cast<uint16_t>(0x6),
		FtpWebRequest = static_cast<uint16_t>(0x7),
		FtpWebResponse = static_cast<uint16_t>(0x8),
		FileWebRequest = static_cast<uint16_t>(0x9),
		FileWebResponse = static_cast<uint16_t>(0xA),
	};
}

