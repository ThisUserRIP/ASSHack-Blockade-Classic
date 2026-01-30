#pragma once
namespace Rewired_Core::Rewired::ComponentControls::Data
{
	enum struct CustomControllerElementTarget_ValueRange : int32_t
	{
		Full = static_cast<int32_t>(0x0),
		Positive = static_cast<int32_t>(0x1),
		Negative = static_cast<int32_t>(0x2),
	};
}

