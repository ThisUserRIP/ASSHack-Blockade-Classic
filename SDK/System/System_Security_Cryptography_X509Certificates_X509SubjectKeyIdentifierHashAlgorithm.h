#pragma once
namespace System::System::Security::Cryptography::X509Certificates
{
	enum struct X509SubjectKeyIdentifierHashAlgorithm : int32_t
	{
		Sha1 = static_cast<int32_t>(0x0),
		ShortSha1 = static_cast<int32_t>(0x1),
		CapiSha1 = static_cast<int32_t>(0x2),
	};
}

