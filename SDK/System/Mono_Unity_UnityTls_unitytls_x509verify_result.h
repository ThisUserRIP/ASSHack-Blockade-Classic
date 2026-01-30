#pragma once
namespace System::Mono::Unity
{
	enum struct UnityTls_unitytls_x509verify_result : uint32_t
	{
		UNITYTLS_X509VERIFY_SUCCESS = static_cast<uint32_t>(0x0),
		UNITYTLS_X509VERIFY_NOT_DONE = static_cast<uint32_t>(0x80000000),
		UNITYTLS_X509VERIFY_FATAL_ERROR = static_cast<uint32_t>(0xFFFFFFFF),
		UNITYTLS_X509VERIFY_FLAG_EXPIRED = static_cast<uint32_t>(0x1),
		UNITYTLS_X509VERIFY_FLAG_REVOKED = static_cast<uint32_t>(0x2),
		UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH = static_cast<uint32_t>(0x4),
		UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED = static_cast<uint32_t>(0x8),
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 = static_cast<uint32_t>(0x10000),
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 = static_cast<uint32_t>(0x20000),
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 = static_cast<uint32_t>(0x40000),
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 = static_cast<uint32_t>(0x80000),
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 = static_cast<uint32_t>(0x100000),
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 = static_cast<uint32_t>(0x200000),
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 = static_cast<uint32_t>(0x400000),
		UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 = static_cast<uint32_t>(0x800000),
		UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR = static_cast<uint32_t>(0x8000000),
	};
}

