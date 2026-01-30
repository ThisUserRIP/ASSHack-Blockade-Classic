#pragma once
namespace System::System::ComponentModel
{
	enum struct ListChangedType : int32_t
	{
		Reset = static_cast<int32_t>(0x0),
		ItemAdded = static_cast<int32_t>(0x1),
		ItemDeleted = static_cast<int32_t>(0x2),
		ItemMoved = static_cast<int32_t>(0x3),
		ItemChanged = static_cast<int32_t>(0x4),
		PropertyDescriptorAdded = static_cast<int32_t>(0x5),
		PropertyDescriptorDeleted = static_cast<int32_t>(0x6),
		PropertyDescriptorChanged = static_cast<int32_t>(0x7),
	};
}

