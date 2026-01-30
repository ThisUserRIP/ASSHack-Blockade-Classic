#pragma once
namespace UnityEngine_UNETModule::UnityEngine::Networking
{
	enum struct NetworkError : int32_t
	{
		Ok = static_cast<int32_t>(0x0),
		WrongHost = static_cast<int32_t>(0x1),
		WrongConnection = static_cast<int32_t>(0x2),
		WrongChannel = static_cast<int32_t>(0x3),
		NoResources = static_cast<int32_t>(0x4),
		BadMessage = static_cast<int32_t>(0x5),
		Timeout = static_cast<int32_t>(0x6),
		MessageToLong = static_cast<int32_t>(0x7),
		WrongOperation = static_cast<int32_t>(0x8),
		VersionMismatch = static_cast<int32_t>(0x9),
		CRCMismatch = static_cast<int32_t>(0xA),
		DNSFailure = static_cast<int32_t>(0xB),
		UsageError = static_cast<int32_t>(0xC),
	};
}

