#pragma once
namespace System_Xml::System::Xml
{
	enum struct XsdCachingReader_CachingReaderState : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Init = static_cast<int32_t>(0x1),
		Record = static_cast<int32_t>(0x2),
		Replay = static_cast<int32_t>(0x3),
		ReaderClosed = static_cast<int32_t>(0x4),
		Error = static_cast<int32_t>(0x5),
	};
}

