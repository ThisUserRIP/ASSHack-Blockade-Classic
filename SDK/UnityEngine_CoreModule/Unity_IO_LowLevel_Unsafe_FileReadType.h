#pragma once
namespace UnityEngine_CoreModule::Unity::IO::LowLevel::Unsafe
{
	enum struct FileReadType : int32_t
	{
		Sync = static_cast<int32_t>(0x0),
		Async = static_cast<int32_t>(0x1),
	};
}

