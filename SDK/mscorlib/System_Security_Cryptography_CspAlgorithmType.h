#pragma once
namespace mscorlib::System::Security::Cryptography
{
	enum struct CspAlgorithmType : int32_t
	{
		Rsa = static_cast<int32_t>(0x0),
		Dss = static_cast<int32_t>(0x1),
	};
}

