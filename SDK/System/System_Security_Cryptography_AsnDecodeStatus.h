#pragma once
namespace System::System::Security::Cryptography
{
	enum struct AsnDecodeStatus : int32_t
	{
		NotDecoded = static_cast<int32_t>(0xFFFFFFFF),
		Ok = static_cast<int32_t>(0x0),
		BadAsn = static_cast<int32_t>(0x1),
		BadTag = static_cast<int32_t>(0x2),
		BadLength = static_cast<int32_t>(0x3),
		InformationNotAvailable = static_cast<int32_t>(0x4),
	};
}

