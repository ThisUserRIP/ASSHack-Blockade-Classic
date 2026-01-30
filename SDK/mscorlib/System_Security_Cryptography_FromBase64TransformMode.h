#pragma once
namespace mscorlib::System::Security::Cryptography
{
	enum struct FromBase64TransformMode : int32_t
	{
		IgnoreWhiteSpaces = static_cast<int32_t>(0x0),
		DoNotIgnoreWhiteSpaces = static_cast<int32_t>(0x1),
	};
}

