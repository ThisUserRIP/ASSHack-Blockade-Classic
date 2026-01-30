#pragma once
namespace System::System::IO::Compression
{
	enum struct CompressionMode : int32_t
	{
		Decompress = static_cast<int32_t>(0x0),
		Compress = static_cast<int32_t>(0x1),
	};
}

