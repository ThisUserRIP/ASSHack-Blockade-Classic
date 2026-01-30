#pragma once
namespace mscorlib::System::IO
{
	enum struct SeekOrigin : int32_t
	{
		Begin = static_cast<int32_t>(0x0),
		Current = static_cast<int32_t>(0x1),
		End = static_cast<int32_t>(0x2),
	};
}

