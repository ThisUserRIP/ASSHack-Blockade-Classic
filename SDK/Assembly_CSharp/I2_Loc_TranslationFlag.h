#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct TranslationFlag : uint8_t
	{
		Normal = static_cast<uint8_t>(0x1),
		AutoTranslated = static_cast<uint8_t>(0x2),
	};
}

