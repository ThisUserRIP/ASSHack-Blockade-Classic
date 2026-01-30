#pragma once
namespace mscorlib::System::Security::Cryptography
{
	enum struct PaddingMode : int32_t
	{
		None = static_cast<int32_t>(0x1),
		PKCS7 = static_cast<int32_t>(0x2),
		Zeros = static_cast<int32_t>(0x3),
		ANSIX923 = static_cast<int32_t>(0x4),
		ISO10126 = static_cast<int32_t>(0x5),
	};
}

