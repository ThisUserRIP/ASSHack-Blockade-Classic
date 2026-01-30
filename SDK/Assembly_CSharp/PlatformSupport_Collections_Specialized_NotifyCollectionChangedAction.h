#pragma once
namespace Assembly_CSharp::PlatformSupport::Collections::Specialized
{
	enum struct NotifyCollectionChangedAction : int32_t
	{
		Add = static_cast<int32_t>(0x0),
		Remove = static_cast<int32_t>(0x1),
		Replace = static_cast<int32_t>(0x2),
		Move = static_cast<int32_t>(0x3),
		Reset = static_cast<int32_t>(0x4),
	};
}

