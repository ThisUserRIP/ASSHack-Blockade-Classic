#pragma once
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking
{
	enum struct UnityWebRequest_UnityWebRequestError : int32_t
	{
		OK = static_cast<int32_t>(0x0),
		Unknown = static_cast<int32_t>(0x1),
		SDKError = static_cast<int32_t>(0x2),
		UnsupportedProtocol = static_cast<int32_t>(0x3),
		MalformattedUrl = static_cast<int32_t>(0x4),
		CannotResolveProxy = static_cast<int32_t>(0x5),
		CannotResolveHost = static_cast<int32_t>(0x6),
		CannotConnectToHost = static_cast<int32_t>(0x7),
		AccessDenied = static_cast<int32_t>(0x8),
		GenericHttpError = static_cast<int32_t>(0x9),
		WriteError = static_cast<int32_t>(0xA),
		ReadError = static_cast<int32_t>(0xB),
		OutOfMemory = static_cast<int32_t>(0xC),
		Timeout = static_cast<int32_t>(0xD),
		HTTPPostError = static_cast<int32_t>(0xE),
		SSLCannotConnect = static_cast<int32_t>(0xF),
		Aborted = static_cast<int32_t>(0x10),
		TooManyRedirects = static_cast<int32_t>(0x11),
		ReceivedNoData = static_cast<int32_t>(0x12),
		SSLNotSupported = static_cast<int32_t>(0x13),
		FailedToSendData = static_cast<int32_t>(0x14),
		FailedToReceiveData = static_cast<int32_t>(0x15),
		SSLCertificateError = static_cast<int32_t>(0x16),
		SSLCipherNotAvailable = static_cast<int32_t>(0x17),
		SSLCACertError = static_cast<int32_t>(0x18),
		UnrecognizedContentEncoding = static_cast<int32_t>(0x19),
		LoginFailed = static_cast<int32_t>(0x1A),
		SSLShutdownFailed = static_cast<int32_t>(0x1B),
		NoInternetConnection = static_cast<int32_t>(0x1C),
	};
}

