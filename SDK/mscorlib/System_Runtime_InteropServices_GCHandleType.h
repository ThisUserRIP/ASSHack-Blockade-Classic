#pragma once
namespace mscorlib::System::Runtime::InteropServices
{
	enum struct GCHandleType : int32_t
	{
		Weak = static_cast<int32_t>(0x0),
		WeakTrackResurrection = static_cast<int32_t>(0x1),
		Normal = static_cast<int32_t>(0x2),
		Pinned = static_cast<int32_t>(0x3),
	};
}

