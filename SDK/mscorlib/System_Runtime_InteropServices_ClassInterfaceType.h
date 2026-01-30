#pragma once
namespace mscorlib::System::Runtime::InteropServices
{
	enum struct ClassInterfaceType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		AutoDispatch = static_cast<int32_t>(0x1),
		AutoDual = static_cast<int32_t>(0x2),
	};
}

