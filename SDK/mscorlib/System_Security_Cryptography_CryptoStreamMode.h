#pragma once
namespace mscorlib::System::Security::Cryptography
{
	enum struct CryptoStreamMode : int32_t
	{
		Read = static_cast<int32_t>(0x0),
		Write = static_cast<int32_t>(0x1),
	};
}

