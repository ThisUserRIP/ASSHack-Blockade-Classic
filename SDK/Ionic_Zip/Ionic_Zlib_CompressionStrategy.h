#pragma once
namespace Ionic_Zip::Ionic::Zlib
{
	enum struct CompressionStrategy : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		Filtered = static_cast<int32_t>(0x1),
		HuffmanOnly = static_cast<int32_t>(0x2),
	};
}

