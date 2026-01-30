#pragma once
namespace mscorlib::System::Security::Cryptography
{
	enum struct CipherMode : int32_t
	{
		CBC = static_cast<int32_t>(0x1),
		ECB = static_cast<int32_t>(0x2),
		OFB = static_cast<int32_t>(0x3),
		CFB = static_cast<int32_t>(0x4),
		CTS = static_cast<int32_t>(0x5),
	};
}

