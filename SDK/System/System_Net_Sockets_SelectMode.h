#pragma once
namespace System::System::Net::Sockets
{
	enum struct SelectMode : int32_t
	{
		SelectRead = static_cast<int32_t>(0x0),
		SelectWrite = static_cast<int32_t>(0x1),
		SelectError = static_cast<int32_t>(0x2),
	};
}

