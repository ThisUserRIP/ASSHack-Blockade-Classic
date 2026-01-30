#pragma once
namespace System::System::Net
{
	enum struct MonoChunkStream_State : int32_t
	{
		None = static_cast<int32_t>(0x0),
		PartialSize = static_cast<int32_t>(0x1),
		Body = static_cast<int32_t>(0x2),
		BodyFinished = static_cast<int32_t>(0x3),
		Trailer = static_cast<int32_t>(0x4),
	};
}

