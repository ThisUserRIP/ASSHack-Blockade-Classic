#pragma once
namespace mscorlib::System::Security::Cryptography
{
	enum struct RSAEncryptionPaddingMode : int32_t
	{
		Pkcs1 = static_cast<int32_t>(0x0),
		Oaep = static_cast<int32_t>(0x1),
	};
}

