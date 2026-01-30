#pragma once
namespace System::Mono::Unity
{
	enum struct UnityTls_unitytls_error_code : uint32_t
	{
		UNITYTLS_SUCCESS = static_cast<uint32_t>(0x0),
		UNITYTLS_INVALID_ARGUMENT = static_cast<uint32_t>(0x1),
		UNITYTLS_INVALID_FORMAT = static_cast<uint32_t>(0x2),
		UNITYTLS_INVALID_PASSWORD = static_cast<uint32_t>(0x3),
		UNITYTLS_INVALID_STATE = static_cast<uint32_t>(0x4),
		UNITYTLS_BUFFER_OVERFLOW = static_cast<uint32_t>(0x5),
		UNITYTLS_OUT_OF_MEMORY = static_cast<uint32_t>(0x6),
		UNITYTLS_INTERNAL_ERROR = static_cast<uint32_t>(0x7),
		UNITYTLS_NOT_SUPPORTED = static_cast<uint32_t>(0x8),
		UNITYTLS_ENTROPY_SOURCE_FAILED = static_cast<uint32_t>(0x9),
		UNITYTLS_STREAM_CLOSED = static_cast<uint32_t>(0xA),
		UNITYTLS_USER_CUSTOM_ERROR_START = static_cast<uint32_t>(0x100000),
		UNITYTLS_USER_WOULD_BLOCK = static_cast<uint32_t>(0x100001),
		UNITYTLS_USER_READ_FAILED = static_cast<uint32_t>(0x100002),
		UNITYTLS_USER_WRITE_FAILED = static_cast<uint32_t>(0x100003),
		UNITYTLS_USER_UNKNOWN_ERROR = static_cast<uint32_t>(0x100004),
		UNITYTLS_USER_CUSTOM_ERROR_END = static_cast<uint32_t>(0x200000),
	};
}

