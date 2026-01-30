#pragma once
namespace mscorlib::System::Security::Cryptography
{
	enum struct RSASignaturePaddingMode : int32_t
	{
		Pkcs1 = static_cast<int32_t>(0x0),
		Pss = static_cast<int32_t>(0x1),
	};
}

