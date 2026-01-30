#pragma once
namespace mscorlib::System::Security::Principal
{
	enum struct WindowsAccountType : int32_t
	{
		Normal = static_cast<int32_t>(0x0),
		Guest = static_cast<int32_t>(0x1),
		System = static_cast<int32_t>(0x2),
		Anonymous = static_cast<int32_t>(0x3),
	};
}

