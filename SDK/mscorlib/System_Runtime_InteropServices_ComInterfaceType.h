#pragma once
namespace mscorlib::System::Runtime::InteropServices
{
	enum struct ComInterfaceType : int32_t
	{
		InterfaceIsDual = static_cast<int32_t>(0x0),
		InterfaceIsIUnknown = static_cast<int32_t>(0x1),
		InterfaceIsIDispatch = static_cast<int32_t>(0x2),
		InterfaceIsIInspectable = static_cast<int32_t>(0x3),
	};
}

