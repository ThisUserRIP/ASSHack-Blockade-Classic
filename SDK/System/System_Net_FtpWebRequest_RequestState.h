#pragma once
namespace System::System::Net
{
	enum struct FtpWebRequest_RequestState : int32_t
	{
		Before = static_cast<int32_t>(0x0),
		Scheduled = static_cast<int32_t>(0x1),
		Connecting = static_cast<int32_t>(0x2),
		Authenticating = static_cast<int32_t>(0x3),
		OpeningData = static_cast<int32_t>(0x4),
		TransferInProgress = static_cast<int32_t>(0x5),
		Finished = static_cast<int32_t>(0x6),
		Aborted = static_cast<int32_t>(0x7),
		Error = static_cast<int32_t>(0x8),
	};
}

