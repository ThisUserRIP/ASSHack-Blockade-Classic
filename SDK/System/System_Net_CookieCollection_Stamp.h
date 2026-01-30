#pragma once
namespace System::System::Net
{
	enum struct CookieCollection_Stamp : int32_t
	{
		Check = static_cast<int32_t>(0x0),
		Set = static_cast<int32_t>(0x1),
		SetToUnused = static_cast<int32_t>(0x2),
		SetToMaxUsed = static_cast<int32_t>(0x3),
	};
}

