#pragma once
namespace Assembly_CSharp::BestHTTP::PlatformSupport::TcpClient::General
{
	enum struct TcpClient_Properties : uint32_t
	{
		LingerState = static_cast<uint32_t>(0x1),
		NoDelay = static_cast<uint32_t>(0x2),
		ReceiveBufferSize = static_cast<uint32_t>(0x4),
		ReceiveTimeout = static_cast<uint32_t>(0x8),
		SendBufferSize = static_cast<uint32_t>(0x10),
		SendTimeout = static_cast<uint32_t>(0x20),
	};
}

