#pragma once
namespace Ionic_Zip::Ionic::Zlib
{
	enum struct ZlibBaseStream_StreamMode : int32_t
	{
		Writer = static_cast<int32_t>(0x0),
		Reader = static_cast<int32_t>(0x1),
		Undefined = static_cast<int32_t>(0x2),
	};
}

