#pragma once
namespace mscorlib::System::Security::Cryptography
{
	enum struct RijndaelManagedTransformMode : int32_t
	{
		Encrypt = static_cast<int32_t>(0x0),
		Decrypt = static_cast<int32_t>(0x1),
	};
}

