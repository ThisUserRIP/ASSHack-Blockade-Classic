#pragma once
namespace Ionic_Zip::Ionic::Zlib
{
	enum struct CompressionMode : int32_t
	{
		Compress = static_cast<int32_t>(0x0),
		Decompress = static_cast<int32_t>(0x1),
	};
}

