#pragma once
namespace System_Core::System::Threading
{
	enum struct LockRecursionPolicy : int32_t
	{
		NoRecursion = static_cast<int32_t>(0x0),
		SupportsRecursion = static_cast<int32_t>(0x1),
	};
}

