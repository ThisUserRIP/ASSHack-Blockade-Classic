#pragma once
namespace mscorlib::System::Runtime::Remoting::Lifetime
{
	enum struct LeaseState : int32_t
	{
		Null = static_cast<int32_t>(0x0),
		Initial = static_cast<int32_t>(0x1),
		Active = static_cast<int32_t>(0x2),
		Renewing = static_cast<int32_t>(0x3),
		Expired = static_cast<int32_t>(0x4),
	};
}

