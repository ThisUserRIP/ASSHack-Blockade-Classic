#pragma once
namespace mscorlib::System::Runtime::CompilerServices
{
	enum struct LoadHint : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		Always = static_cast<int32_t>(0x1),
		Sometimes = static_cast<int32_t>(0x2),
	};
}

