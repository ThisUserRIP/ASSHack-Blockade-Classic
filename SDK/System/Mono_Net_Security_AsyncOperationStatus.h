#pragma once
namespace System::Mono::Net::Security
{
	enum struct AsyncOperationStatus : int32_t
	{
		Initialize = static_cast<int32_t>(0x0),
		Continue = static_cast<int32_t>(0x1),
		ReadDone = static_cast<int32_t>(0x2),
		Complete = static_cast<int32_t>(0x3),
	};
}

