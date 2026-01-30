#pragma once
namespace mscorlib::System::Security::Cryptography
{
	enum struct KeyNumber : int32_t
	{
		Exchange = static_cast<int32_t>(0x1),
		Signature = static_cast<int32_t>(0x2),
	};
}

