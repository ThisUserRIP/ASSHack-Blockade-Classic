#pragma once
namespace System::System
{
	enum struct UriComponents : int32_t
	{
		Scheme = static_cast<int32_t>(0x1),
		UserInfo = static_cast<int32_t>(0x2),
		Host = static_cast<int32_t>(0x4),
		Port = static_cast<int32_t>(0x8),
		Path = static_cast<int32_t>(0x10),
		Query = static_cast<int32_t>(0x20),
		Fragment = static_cast<int32_t>(0x40),
		StrongPort = static_cast<int32_t>(0x80),
		NormalizedHost = static_cast<int32_t>(0x100),
		KeepDelimiter = static_cast<int32_t>(0x40000000),
		SerializationInfoString = static_cast<int32_t>(0x80000000),
		AbsoluteUri = static_cast<int32_t>(0x7F),
		HostAndPort = static_cast<int32_t>(0x84),
		StrongAuthority = static_cast<int32_t>(0x86),
		SchemeAndServer = static_cast<int32_t>(0xD),
		HttpRequestUrl = static_cast<int32_t>(0x3D),
		PathAndQuery = static_cast<int32_t>(0x30),
	};
}

