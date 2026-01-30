#pragma once
namespace Assembly_CSharp::I2::Loc
{
	enum struct PersistentStorage_eFileType : int32_t
	{
		Raw = static_cast<int32_t>(0x0),
		Persistent = static_cast<int32_t>(0x1),
		Temporal = static_cast<int32_t>(0x2),
		Streaming = static_cast<int32_t>(0x3),
	};
}

