#pragma once
namespace Ionic_Zip::Ionic::Zlib
{
	enum struct DeflateFlavor : int32_t
	{
		Store = static_cast<int32_t>(0x0),
		Fast = static_cast<int32_t>(0x1),
		Slow = static_cast<int32_t>(0x2),
	};
}

