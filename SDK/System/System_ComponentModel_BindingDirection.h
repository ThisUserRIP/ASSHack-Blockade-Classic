#pragma once
namespace System::System::ComponentModel
{
	enum struct BindingDirection : int32_t
	{
		OneWay = static_cast<int32_t>(0x0),
		TwoWay = static_cast<int32_t>(0x1),
	};
}

