#pragma once
namespace System::System::ComponentModel
{
	enum struct InheritanceLevel : int32_t
	{
		Inherited = static_cast<int32_t>(0x1),
		InheritedReadOnly = static_cast<int32_t>(0x2),
		NotInherited = static_cast<int32_t>(0x3),
	};
}

