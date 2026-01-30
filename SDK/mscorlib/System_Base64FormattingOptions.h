#pragma once
namespace mscorlib::System
{
	enum struct Base64FormattingOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		InsertLineBreaks = static_cast<int32_t>(0x1),
	};
}

