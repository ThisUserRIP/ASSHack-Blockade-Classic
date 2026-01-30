#pragma once
namespace mscorlib::System::Reflection
{
	enum struct CallingConventions : int32_t
	{
		Standard = static_cast<int32_t>(0x1),
		VarArgs = static_cast<int32_t>(0x2),
		Any = static_cast<int32_t>(0x3),
		HasThis = static_cast<int32_t>(0x20),
		ExplicitThis = static_cast<int32_t>(0x40),
	};
}

