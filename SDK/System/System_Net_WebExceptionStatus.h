#pragma once
namespace System::System::Net
{
	enum struct WebExceptionStatus : int32_t
	{
		Success = static_cast<int32_t>(0x0),
		NameResolutionFailure = static_cast<int32_t>(0x1),
		ConnectFailure = static_cast<int32_t>(0x2),
		ReceiveFailure = static_cast<int32_t>(0x3),
		SendFailure = static_cast<int32_t>(0x4),
		PipelineFailure = static_cast<int32_t>(0x5),
		RequestCanceled = static_cast<int32_t>(0x6),
		ProtocolError = static_cast<int32_t>(0x7),
		ConnectionClosed = static_cast<int32_t>(0x8),
		TrustFailure = static_cast<int32_t>(0x9),
		SecureChannelFailure = static_cast<int32_t>(0xA),
		ServerProtocolViolation = static_cast<int32_t>(0xB),
		KeepAliveFailure = static_cast<int32_t>(0xC),
		Pending = static_cast<int32_t>(0xD),
		Timeout = static_cast<int32_t>(0xE),
		ProxyNameResolutionFailure = static_cast<int32_t>(0xF),
		UnknownError = static_cast<int32_t>(0x10),
		MessageLengthLimitExceeded = static_cast<int32_t>(0x11),
		CacheEntryNotFound = static_cast<int32_t>(0x12),
		RequestProhibitedByCachePolicy = static_cast<int32_t>(0x13),
		RequestProhibitedByProxy = static_cast<int32_t>(0x14),
	};
}

