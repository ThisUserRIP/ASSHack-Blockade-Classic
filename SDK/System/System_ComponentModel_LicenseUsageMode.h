#pragma once
namespace System::System::ComponentModel
{
	enum struct LicenseUsageMode : int32_t
	{
		Runtime = static_cast<int32_t>(0x0),
		Designtime = static_cast<int32_t>(0x1),
	};
}

