#pragma once
namespace System::System::ComponentModel
{
	enum struct BindableSupport : int32_t
	{
		No = static_cast<int32_t>(0x0),
		Yes = static_cast<int32_t>(0x1),
		Default = static_cast<int32_t>(0x2),
	};
}

