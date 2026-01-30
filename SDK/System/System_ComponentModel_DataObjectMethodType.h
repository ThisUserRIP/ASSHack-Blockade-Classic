#pragma once
namespace System::System::ComponentModel
{
	enum struct DataObjectMethodType : int32_t
	{
		Fill = static_cast<int32_t>(0x0),
		Select = static_cast<int32_t>(0x1),
		Update = static_cast<int32_t>(0x2),
		Insert = static_cast<int32_t>(0x3),
		Delete = static_cast<int32_t>(0x4),
	};
}

