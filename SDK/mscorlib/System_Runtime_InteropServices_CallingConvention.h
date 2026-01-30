#pragma once
namespace mscorlib::System::Runtime::InteropServices
{
	enum struct CallingConvention : int32_t
	{
		Winapi = static_cast<int32_t>(0x1),
		Cdecl = static_cast<int32_t>(0x2),
		StdCall = static_cast<int32_t>(0x3),
		ThisCall = static_cast<int32_t>(0x4),
		FastCall = static_cast<int32_t>(0x5),
	};
}

