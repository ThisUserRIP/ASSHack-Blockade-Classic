#pragma once
namespace Facebook_Unity::Facebook::Unity
{
	enum struct ComponentFactory_IfNotExist : int32_t
	{
		AddNew = static_cast<int32_t>(0x0),
		ReturnNull = static_cast<int32_t>(0x1),
	};
}

