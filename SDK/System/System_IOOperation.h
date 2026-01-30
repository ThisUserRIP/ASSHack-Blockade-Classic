#pragma once
namespace System::System
{
	enum struct IOOperation : int32_t
	{
		Read = static_cast<int32_t>(0x1),
		Write = static_cast<int32_t>(0x2),
	};
}

