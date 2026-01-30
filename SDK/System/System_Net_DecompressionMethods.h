#pragma once
namespace System::System::Net
{
	enum struct DecompressionMethods : int32_t
	{
		None = static_cast<int32_t>(0x0),
		GZip = static_cast<int32_t>(0x1),
		Deflate = static_cast<int32_t>(0x2),
	};
}

