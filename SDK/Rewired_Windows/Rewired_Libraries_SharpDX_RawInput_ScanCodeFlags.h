#pragma once
namespace Rewired_Windows::Rewired::Libraries::SharpDX::RawInput
{
	enum struct ScanCodeFlags : int16_t
	{
		Make = static_cast<int16_t>(0x0),
		Break = static_cast<int16_t>(0x1),
		E0 = static_cast<int16_t>(0x2),
		E1 = static_cast<int16_t>(0x4),
	};
}

