#pragma once
namespace mscorlib::System::Security::Util
{
	enum struct Tokenizer_TokenSource : int32_t
	{
		UnicodeByteArray = static_cast<int32_t>(0x0),
		UTF8ByteArray = static_cast<int32_t>(0x1),
		ASCIIByteArray = static_cast<int32_t>(0x2),
		CharArray = static_cast<int32_t>(0x3),
		String = static_cast<int32_t>(0x4),
		NestedStrings = static_cast<int32_t>(0x5),
		Other = static_cast<int32_t>(0x6),
	};
}

